/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserStoreExternalUserUpdateListening.h>

@protocol OS_dispatch_queue, MNParticipantUserCacheDiskHandlerListener, MNUserStoreExternalUserUpdateListening;
@class NSObject, MNSMSParticipantUserCache, MNParticipantUserCacheDiskHandler, FBAnalytics, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, NSString;

@interface MNSMSParticipantUserCacheCoordinator : NSObject <MNUserStoreExternalUserUpdateListening> {

	NSObject*<OS_dispatch_queue> _smsParticipantCacheListeningQueue;
	id<MNParticipantUserCacheDiskHandlerListener> _smsParticipantCacheWeakHandler;
	id<MNUserStoreExternalUserUpdateListening> _smsParticipantUserUpdateWeakHandler;
	MNSMSParticipantUserCache* _smsParticipantUserCache;
	MNParticipantUserCacheDiskHandler* _smsParticipantUserCacheDiskHandler;
	FBAnalytics* _analytics;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDatabaseDelayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)allUsersWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)userByPhoneNumber:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 messagingStore:(id)arg2 messagingStoreDatabaseDelayer:(id)arg3 ;
-(void)didFinishNetworkFetchOfUsers:(id)arg1 ;
-(void)didInvalidateUsersWithIds:(id)arg1 ;
-(void)didInvalidateAllUsers;
@end

