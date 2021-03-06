/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMSPPayloadHandling.h>
#import <Messenger/FBMSPLocalPayloadHandling.h>

@protocol OS_dispatch_queue, FBMSPQueueCreationListener;
@class FBMSPQueueCreationHandler, FBMSPDeltaHandler, FBMSPErrorHandler, FBMSPFailedSendHandler, FBMSPErrorRetryManager, MNMessagesSyncCoordinatorRefreshRetrier, NSObject, MNMessagesSyncDeltaNewMessageRedactor, FBMMessagingStoreRestoreCompleteDelayer, MNSPDataStore, NSString;

@interface FBMSPPushHandler : NSObject <FBMSPPayloadHandling, FBMSPLocalPayloadHandling> {

	FBMSPQueueCreationHandler* _queueCreationHandler;
	FBMSPDeltaHandler* _deltaHandler;
	FBMSPErrorHandler* _errorHandler;
	FBMSPFailedSendHandler* _failedSendHandler;
	FBMSPErrorRetryManager* _retryManager;
	MNMessagesSyncCoordinatorRefreshRetrier* _coordinatorRefreshRetrier;
	NSObject*<OS_dispatch_queue> _queue;
	MNMessagesSyncDeltaNewMessageRedactor* _deltaNewMessageRedactor;
	FBMMessagingStoreRestoreCompleteDelayer* _messagingRestoreDelayer;
	id<FBMSPQueueCreationListener> _queueCreationDispatcher;
	MNSPDataStore* _spDataStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleLocalPayload:(id)arg1 ;
-(id)initWithQueueCreationHandler:(id)arg1 deltaHandler:(id)arg2 errorHandler:(id)arg3 failedSendHandler:(id)arg4 retryManager:(id)arg5 coordinatorRefreshRetrier:(id)arg6 deltaNewMessageRedactor:(id)arg7 messagingRestoreDelayer:(id)arg8 spDataStore:(id)arg9 queue:(id)arg10 ;
-(void)handleClientPayload:(id)arg1 ;
-(void)_processPushPayload:(id)arg1 ;
-(void)_processLocalPayload:(id)arg1 ;
-(void)dealloc;
@end

