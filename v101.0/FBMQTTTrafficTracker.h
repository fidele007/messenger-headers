/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMQTTTrafficTracking.h>

@protocol OS_dispatch_queue;
@class MQTTTrafficInfo, NSMutableDictionary, NSObject;

@interface FBMQTTTrafficTracker : NSObject <FBMQTTTrafficTracking> {

	double _timeOfLastPacket;
	MQTTTrafficInfo* _mqttTrafficInfo;
	NSMutableDictionary* _attributionInfo;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) MQTTTrafficInfo * mqttTrafficInfo; 
-(void)didRecvOrSendMqtt:(id)arg1 ;
-(MQTTTrafficInfo *)mqttTrafficInfo;
-(id)getMqttAttributionInfo;
-(void)_processPacketWithType:(id)arg1 direction:(id)arg2 payloadSize:(unsigned long long)arg3 currentTimeSecond:(double)arg4 topic:(id)arg5 ;
-(id)initWithQueue:(id)arg1 ;
@end
