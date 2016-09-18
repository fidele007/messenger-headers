/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMSPSentMessageListener.h>
#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNServiceControllable.h>
#import <Messenger/MNMessagingQuickReplyStoring.h>

@protocol OS_dispatch_queue;
@class FBMobileConfigContextManager, NSObject, MNMessagingQuickReplyStore, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, FBMSPSentMessageListenerAnnouncer, MNThreadSummarySubscribingAnnouncer, FBUserSession, NSString;

@interface MNMessagingQuickReplyStoreService : NSObject <FBMSPSentMessageListener, MNThreadSummarySubscribing, FBViewerContextClassProvidable, MNServiceControllable, MNMessagingQuickReplyStoring> {

	BOOL _isQuickReplyEnabled;
	FBMobileConfigContextManager* _configManager;
	NSObject*<OS_dispatch_queue> _queue;
	MNMessagingQuickReplyStore* _messagingQuickReplyStore;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDelayer;
	FBMSPSentMessageListenerAnnouncer* _sentMessageAnnouncer;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	FBUserSession* _session;
	BOOL _isStarted;

}

@property (nonatomic,readonly) BOOL isStarted;                      //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(id)quickRepliesForThreadKey:(id)arg1 ;
-(void)addMessagingQuickReplyStoreListener:(id)arg1 ;
-(void)setQuickReplies:(id)arg1 forThreadKey:(id)arg2 ;
-(void)fetchDefaultQuickRepliesForThreadKey:(id)arg1 callbackQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)messageDidSendConfirmedBySyncProtocol:(id)arg1 ;
-(void)removeMessagingQuickReplyStoreListener:(id)arg1 ;
-(void)_messagingQuickReplyStoreSetQuickReplies:(id)arg1 forThreadKey:(id)arg2 ;
-(void)stop;
-(BOOL)isStarted;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
