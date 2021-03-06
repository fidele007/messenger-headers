/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBMDetachable.h>
#import <Messenger/FBCancelable.h>
#import <Messenger/MNThreadCustomizationUpdateRunning.h>

@protocol OS_dispatch_queue;
@class FBUserSession, FBMDetchedNetworkRequestsQueue, MNThreadUpdateService, MNMessagingRegionHeaderHelper, FBMSyncedThreadKey, FBMThreadCustomizationInfo, NSString, FBGraphBatchParticipatingRequest, FBSimpleNetworkerRequest, NSObject;

@interface MNThreadCustomizationSetter : NSObject <FBNetworkerRequestDelegate, FBMDetachable, FBCancelable, MNThreadCustomizationUpdateRunning> {

	FBUserSession* _session;
	FBMDetchedNetworkRequestsQueue* _detachedQueue;
	MNThreadUpdateService* _threadUpdateService;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	FBMSyncedThreadKey* _threadKey;
	FBMThreadCustomizationInfo* _newCustomizationInfo;
	NSString* _botId;
	BOOL _isSubscribing;
	FBGraphBatchParticipatingRequest* _changeThreadCustomizationRequest;
	FBSimpleNetworkerRequest* _networkerRequest;
	BOOL _requestFinished;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _successCallback;
	/*^block*/id _failureCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 detachedQueue:(id)arg2 threadUpdateService:(id)arg3 messagingRegionHeaderHelper:(id)arg4 ;
-(void)updateThreadWithKey:(id)arg1 threadCustomizationInfo:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(void)updateThreadWithKey:(id)arg1 botId:(id)arg2 isSubscribing:(BOOL)arg3 source:(unsigned long long)arg4 queue:(id)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(void)_updateThreadWithKey:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)_cleanUpDetachedState;
-(void)cancel;
-(void)dealloc;
-(void)detach;
-(void)_didFailWithError:(id)arg1 ;
@end

