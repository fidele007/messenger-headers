/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMMQTTManager, FBAnalytics;

@interface FBMSendEventLogger : NSObject {

	FBMMQTTManager* _mqttManager;
	FBAnalytics* _analytics;

}
-(void)logMessageSendEvent:(id)arg1 message:(id)arg2 method:(id)arg3 error:(id)arg4 ;
-(void)logMessageSendEvent:(id)arg1 offlineThreadingId:(id)arg2 threadTargetString:(id)arg3 text:(id)arg4 attachment:(id)arg5 outgoingAttribution:(id)arg6 method:(id)arg7 error:(id)arg8 ;
-(id)initWithMQTTManager:(id)arg1 analytics:(id)arg2 ;
-(void)logMessageSendEvent:(id)arg1 messageBatch:(id)arg2 method:(id)arg3 results:(id)arg4 ;
@end

