/*************************************************************************
	> File Name: AgentUtils.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月13日 星期二 17时03分41秒
 ************************************************************************/

#include <iostream>
#include "sv_log.h"
#include "AgentUtils.h"
#include "Properties.h"
using namespace std;

string AgentUtils::sm_agentPath("/opt/fonsview/NE/agent/");
string AgentUtils::sm_logConfFile("log.conf");
string AgentUtils::sm_rabbitmqConfFile("rabbitmq.properties");
string AgentUtils::sm_systemConfigFile("SystemConfig.properties");
string AgentUtils::sm_agentVersionFile("version.properties");
string AgentUtils::sm_agentVersion("");
string AgentUtils::sm_agentIP("");
string AgentUtils::sm_agentIPV6("");
string AgentUtils::sm_agentIP_FLAG("ipv4");
string AgentUtils::sm_appMsgPort("8004");
bool   AgentUtils::sm_agentRunning(true);
CMutex AgentUtils::sm_lock;


int AgentUtils::Init()
{
    string etcPath = GetAgentEtcPath();
    string systemConfigPath =  etcPath + sm_systemConfigFile;

    if(__LoadSystemConfig(systemConfigPath) < 0)
    {
        SV_ERROR("Load Agent System Config Error");
        return -1;
    }

    string versionFilePath = etcPath + sm_agentVersionFile;
    if(__LoadAgentVersion(versionFilePath) < 0)
    {
        SV_ERROR("Load Agent System Version Error");
    }

    return 0;
}

bool AgentUtils::GetAgentRunning()
{
	bool running;

	sm_lock.Lock();
	running = sm_agentRunning;
	sm_lock.UnLock();

	return running;
}

void AgentUtils::StopAgent()
{
	sm_lock.Lock();
        sm_agentRunning = false;
        sm_lock.UnLock();
}

string AgentUtils::GetLogConfFile()
{
    return sm_logConfFile;
}

string AgentUtils::GetRabbitmqConfFile()
{
    return sm_rabbitmqConfFile;
}

string AgentUtils::GetAgentEtcPath()
{
	return sm_agentPath + "etc/";
}

string AgentUtils::GetAgentScriptPath()
{
	return sm_agentPath + "script/";
}

string AgentUtils::GetAgentLogPath()
{
	return sm_agentPath + "log/";
}

string AgentUtils::GetAgentPath()
{
	return sm_agentPath;
}

string AgentUtils::GetAgentVersion()
{
    return sm_agentVersion;
}

string AgentUtils::GetLocalIP()
{
    return sm_agentIP;
}

string AgentUtils::GetLocalIPV6()
{
    return sm_agentIPV6;
}

bool AgentUtils::UseIPV6()
{
	if(sm_agentIP_FLAG.compare("ipv6") == 0)
	{
		return true;
	}

	return false;
}

string AgentUtils::GetAppMsgPort()
{
	return sm_appMsgPort;
}


int AgentUtils::__LoadSystemConfig(string &fileName)
{
    if(fileName.empty())
    {
	SV_ERROR("parameter error");
        return -1;
    }

    Properties props;

    props.Load(fileName);
    sm_agentIP = props.GetValue("AGENT_IP");
    sm_agentIPV6 = props.GetValue("AGENT_IPV6");
    sm_agentIP_FLAG = props.GetValue("IP_FLAG");
    sm_appMsgPort = props.GetValue("APP_MSG_PORT");

    if(sm_agentIP.empty() || sm_agentIP_FLAG.empty() || sm_appMsgPort.empty())
    {
	SV_ERROR("Get agent ip or ip_flag or app msg port error");
	return -1;
    }

    return 0;
}

int AgentUtils::__LoadAgentVersion(string &fileName)
{
    if(fileName.empty())
    {
	SV_ERROR("get agent version error");
	return -1;
    }

    Properties props;
    props.Load(fileName);
    sm_agentVersion = props.GetValue("version");
    if(sm_agentVersion.empty())
    {
	SV_ERROR("ERROR : get agent version error, please check file : version.properties");
    }   
    printf("version : %s\n", sm_agentVersion.c_str());    
    return 0;
}


#ifdef _WIN32  
    #include <winsock2.h>  
    #include <time.h>  
#else  
    #include <sys/time.h>  
    #include <stddef.h>
#endif  
unsigned long long AgentUtils::GetCurrentTimeMsec()  
{  
#ifdef _WIN32  
        struct timeval tv;  
        time_t clock;  
        struct tm tm;  
        SYSTEMTIME wtm;  
  
        GetLocalTime(&wtm);  
        tm.tm_year = wtm.wYear - 1900;  
        tm.tm_mon = wtm.wMonth - 1;  
        tm.tm_mday = wtm.wDay;  
        tm.tm_hour = wtm.wHour;  
        tm.tm_min = wtm.wMinute;  
        tm.tm_sec = wtm.wSecond;  
        tm.tm_isdst = -1;  
        clock = mktime(&tm);  
        tv.tv_sec = clock;  
        tv.tv_usec = wtm.wMilliseconds * 1000;  
        return ((unsigned long long)tv.tv_sec * 1000 + (unsigned long long)tv.tv_usec / 1000);  
#else  
        struct timeval tv;  
        gettimeofday(&tv, NULL);
        return ((unsigned long long)tv.tv_sec * 1000 + (unsigned long long)tv.tv_usec / 1000);  
#endif  
}
