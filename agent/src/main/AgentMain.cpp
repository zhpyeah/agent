/*************************************************************************
* File Name : agent_main.cpp
* Author : xus103
* Created Time : 2018年03月01日
* Description : main function
* CopyRight : Copyright(c) 2000-2020 firberhome
* OtherInfo :
* ModifyLog :
 ************************************************************************/

#include <iostream>
#include <stdlib.h> 
#include <unistd.h>
#include <string>
#include "../conf/ConfManager.h"
#include "../msg/app/AppMsgManager.h"
#include "../msg/RabbitmqConfig.h"
#include "ThreadPool.h"
#include "../msg/AmqpReceiveBuilder.h"
#include "../msg/AmqpMessageReceiveProcessor.h"
#include "../msg/AmqpMessageSendProcessor.h"
#include "../app/AppManager.h"
#include "../proto/Msg.pb.h"
#include "../utils/AgentUtils.h"
#include "../utils/sv_log.h"
#include "../utils/ProtoBufPacker.h"
#include "../proto/HeartProto.pb.h"
#include "../perf/host/HostStatus.h"
#include "../perf/SchedulerActiveJob.h"


using namespace std;
using namespace com::fiberhome::fums::proto;



//日志系统初始化
static int log_init()
{
    string logFile(AgentUtils::GetAgentEtcPath() + AgentUtils::GetLogConfFile());
    if(sv_log_init(logFile.c_str(), 5) < 0)
    {
        return -1;
    }
    SV_LOG("%s", "init log");
    
    return 0;
}

//Rabbitmq 客户端初始化
static int RabbitmqInit()
{
    SV_LOG("初始化MQ配置");
    RabbitmqConfig::Init();

    SV_LOG("启动MQ消息接收");
    AmqpReceiveBuilder* messageReceiver = AmqpReceiveBuilder::GetInstance();
    if(messageReceiver == NULL || messageReceiver->Stop() == false)
    {
	SV_ERROR("get messageReceiver error");
	return -1;
    }
    SV_LOG("start messageReceiver");
    messageReceiver->Start();

    SV_LOG("初始化MQ消息发送处理器");
    AmqpMessageSendProcessor* messageProcessor = AmqpMessageSendProcessor::GetInstance();
    if(messageProcessor == NULL || messageProcessor->CheckSender() < 0)
    {
        SV_ERROR("AmqpMessageReceiveProcessor init error");
        return -1;
    }

    return 0;
}

int AppManagerInit()
{
    AppManager *appManager = new (std::nothrow) AppManager();
    if(appManager == NULL)
    {
	SV_ERROR("new error");
	return -1;
    }
    appManager->Start();

    return 0;
}


int StatisticModuleInit()
{
    /*SIGAR INIT*/
    if (CHostStatus::InitHostStatus() < 0)
    {
        return -1;
    }

    /*SCHEDULER JOB INIT*/
    CSchedulerActiveJob *schedulerJob = CSchedulerActiveJob::GetInstance();
    if (schedulerJob == NULL)
    {
        SV_ERROR("Init SchedulerActiveJob failed...");
        return -1;
    }

    SV_LOG("Init StatisticModuleInit success...");
    return 0;
}

int AppMsgManagerInit()
{
	AppMsgManager *appMsgManager = AppMsgManager::GetInstance();
	if(appMsgManager == NULL)
	{
		SV_ERROR("get appMsgManager error");
		return -1;
	}
	if(appMsgManager->Init() < 0)
	{
		SV_ERROR("appMsgManager init error");
		return -1;
	}
	appMsgManager->Start();

	return 0;
}

void agent_signal_handler(int signal)
{
	printf("cheked signal  -- %d --\n", signal);
	AgentUtils::StopAgent();
}


//初始化agent
static int InitAgent()
{
    AgentUtils::Init();
    
    	signal(SIGINT, agent_signal_handler);
	signal(SIGHUP, agent_signal_handler);
	signal(SIGTERM, agent_signal_handler);
	signal(SIGPIPE, SIG_IGN);   

    if(log_init() < 0)
    {
	return -1;
    }

    if(RabbitmqInit() < 0)
    {
        SV_ERROR("RabbitmqInit error");
        return -1;
    }

    ConfManager::GetInstance();
    
    if(AppManagerInit() < 0)
    {
	SV_ERROR("AppManagerInit error");
	return -1;
    }

	if (StatisticModuleInit() < 0)
    {
        SV_ERROR("StatisticModuleInit error...");
        return -1;
    }
	
    if(AppMsgManagerInit() < 0)
    {
		SV_ERROR("AppMsgManagerInit error");
		return -1;
    }

    

    return 0;
}

//agent 程序入口
int main(int argc, char *argv[])
{
    if(InitAgent() < 0)
    {
		SV_ERROR("init agent error");
		return 0;
    }

    //test
    
    //char aa[] = "abcde";
	
    /*
    std::ThreadPool *executor = new (std::nothrow) ThreadPool{4};
    if(executor == NULL)
    {
        printf("new error\n");
        return -1;
    }
    std::future<int> f1 = executor->AddTaskToQueue(fun1, 1, aa);
    if(!executor->IsFullQueue())
        std::future<int> f2 = executor->AddTaskToQueue(fun1, 2, aa);
    std::future<int> f3 = executor->AddTaskToQueue(fun1, 3, aa);
    if(!executor->IsFullQueue())
        std::future<int> f4 = executor->AddTaskToQueue(fun1, 4, aa);
    std::future<int> f5 = executor->AddTaskToQueue(fun1, 5, aa);
    if(!executor->IsFullQueue())
        std::future<int> f6 = executor->AddTaskToQueue(fun1, 6, aa);
    std::cout << " =======  sleep ========= " << std::this_thread::get_id() << std::endl;
    sleep(5);
    */
    while(AgentUtils::GetAgentRunning())
    {
	//heart test
    sleep(5);
	HeartData heartData;
	heartData.set_hearttype(HeartData::AGENT);
	heartData.set_msg("Hello, World!");
	heartData.set_uniqueid(AgentUtils::GetCurrentTimeMsec());
	Major major = ProtoBufPacker::PackHeartBeatData(ProtoBufPacker::SerializeToArray<HeartData>(heartData));

    	AmqpMessageSendProcessor::GetInstance()->SendMessageToFums(major);
    }
    sleep(1);
    //delete executor;
    return 0;
}
