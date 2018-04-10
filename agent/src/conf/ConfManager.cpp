/*************************************************************************
* File Name : ConfManager.cpp
* Author : xus103
* Created Time : 2018年03月01日
* Description : config process
* CopyRight : Copyright(c) 2000-2020 fiberhome
* OtherInfo :
* ModifyLog :
 ************************************************************************/

#include "../utils/sv_log.h"
#include "../utils/ProtoBufPacker.h"
#include "../msg/AmqpMessageSendProcessor.h"
#include "ConfManager.h"


ConfManager* ConfManager::sm_confManager = NULL;
CRWLock ConfManager::agentConfFileRWLock;
CRWLock ConfManager::appRegisteredConfFileRWLoc;
CRWLock ConfManager::appConfFileRWLock;
CRWLock ConfManager::ntpConfFileRWLock;

Locker ConfManager::sm_lock;


ConfManager::ConfManager()
{
	InitConfManager();
}


ConfManager::~ConfManager()
{
	
}

ConfManager* ConfManager::GetInstance()
{
	 if(sm_confManager == NULL)
    {
        sm_lock.lock();
        if(sm_confManager == NULL)
        {
            sm_confManager = new (std::nothrow) ConfManager();
        }
        sm_lock.unlock();
    }

    return sm_confManager;
}


int ConfManager::InitConfManager()
{
	//manage agent configure
	agentConfFile = new (std::nothrow) AgentConfFile();
	if(agentConfFile == NULL)
	{
		SV_ERROR("new error");
		return -1;
	}
	if(agentConfFile->Init() <0 )
	{
		SV_ERROR("init agentConfFile error");
		return -1;
	}

	//manage app registered table;
	appRegisteredConfFile = new (std::nothrow) AppRegisteredConfFile();
	if(appRegisteredConfFile == NULL)
	{
		SV_ERROR("new error");
		return -1;
	}
	if(appRegisteredConfFile->Init() <0 )
	{
		SV_ERROR("init appConfFile error");
		return -1;
	}

	//manage app configure
	appConfFile = new (std::nothrow) AppConfFile();
	if(appConfFile == NULL)
	{
		SV_ERROR("new error");
		return -1;
	}
	if(appConfFile->Init() <0 )
	{
		SV_ERROR("init appConfFile error");
		return -1;
	}

	//manage ntp configure
	ntpConfFile = new (std::nothrow) NtpConfFile();
	if(ntpConfFile == NULL)
	{
		SV_ERROR("new error");
		return -1;
	}
	if(ntpConfFile->Init() <0 )
	{
		SV_ERROR("init appConfFile error");
		return -1;
	}
	return 0;
}

int ConfManager::Analyse(ConfigData &config)
{
	ConfigUpdateResponse response;
	response.set_status(CommonResponse::SUCCESS);
	response.set_reason("Success");
	response.set_filename(config.configfilename());
	response.set_netype(config.configfiletype());

	if(config.configfiletype() == ConfigData::AGETN && agentConfFile != NULL)
	{
		agentConfFile->Analyse(config, response);
	}
	else if(config.configfiletype() == ConfigData::APPS && appConfFile != NULL)
	{
		appRegisteredConfFile->Analyse(config, response);
	}
	else if(config.configfiletype() == ConfigData::NTP && ntpConfFile != NULL)
	{
		ntpConfFile->Analyse(config, response);
	}
	else if(config.configfiletype() == ConfigData::COMMON && appConfFile != NULL)
	{
		appConfFile->Analyse(config, response);
	}
	else if(config.configfiletype() == ConfigData::DOWNLOAD && appConfFile != NULL)
	{
		appConfFile->DownloadFile(config, response);
	}
	else
	{
		//appConfFile->Analyse(config, response);
		SV_ERROR("unknown config type %d", config.configfiletype());
	}
	
	string data = ProtoBufPacker::SerializeToArray<ConfigUpdateResponse>(response);
	Major major = ProtoBufPacker::PackResponseData(data, Header::CONFIG, config.uniqueid());
	AmqpMessageSendProcessor::GetInstance()->SendMessageToFums(major);
	
	return 0;
}
















