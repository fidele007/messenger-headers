/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)didFinishNetworkFetchOfUsers:(id)arg1 ;
-(id)initWithAnalytics:(id)arg1 messagingStore:(id)arg2 messagingStoreDatabaseDelayer:(id)arg3 ;
-(void)didInvalidateUsersWithIds:(id)arg1 ;
-(void)didInvalidateAllUsers;
@end

