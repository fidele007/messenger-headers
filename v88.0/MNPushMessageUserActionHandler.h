/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class FBMThreadMessageSender, FBExperimentManager, FBWebRTCCallController, MNThreadSummaryUpdateRunningService, NSObject, FBAnalytics, NSString;

@interface MNPushMessageUserActionHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	FBMThreadMessageSender* _threadMessageSender;
	id<MNAuthenticationManager> _authManager;
	FBExperimentManager* _experimentManager;
	FBWebRTCCallController* _callController;
	MNThreadSummaryUpdateRunningService* _summaryUpdateRunningService;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_muteThreadForThreadKey:(id)arg1 ;
-(void)_sendLikeMessageForThreadKey:(id)arg1 messageLifeTime:(long long)arg2 ;
-(void)_sendReply:(id)arg1 forThreadKey:(id)arg2 messageLifeTime:(long long)arg3 ;
-(void)_returnCall:(id)arg1 ;
-(void)_presentThreadMutingLocalNotificationWithThreadKey:(id)arg1 type:(id)arg2 alertBody:(id)arg3 alertAction:(id)arg4 soundName:(id)arg5 ;
-(void)_didMuteThreadWithKey:(id)arg1 until:(long long)arg2 ;
-(void)_didFailToMuteThreadWithKey:(id)arg1 withError:(id)arg2 ;
-(id)initWithThreadMessageSender:(id)arg1 summaryUpdateRunningService:(id)arg2 authManager:(id)arg3 experimentManager:(id)arg4 callController:(id)arg5 queue:(id)arg6 analytics:(id)arg7 ;
@end

