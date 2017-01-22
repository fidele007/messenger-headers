/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBFriendListDeltaMonitorListener.h>
#import <Messenger/FBContactSyncDeltaListener.h>

@protocol MNAuthenticationManager, MNSpotlightUserIndexing, MNSpotlightItemPreparing, MNCDNProfileImageDownloadListener, OS_dispatch_queue;
@class FBContactStore, MNSpotlightIndexPolicy, FBSyncStore, MNFriendListDeltaMonitorListener, MNContactSyncPolicy, NSOperationQueue, MNSpotlightUserContactUpdatePolicy, MNCDNProfileImageDownloader, MNSearchableItemTracker, NSObject, NSString;

@interface MNSpotlightUserIndexService : NSObject <MNServiceControllable, FBFriendListDeltaMonitorListener, FBContactSyncDeltaListener> {

	id<MNAuthenticationManager> _authManager;
	FBContactStore* _contactStore;
	MNSpotlightIndexPolicy* _spotlightIndexPolicy;
	FBSyncStore* _syncStore;
	MNFriendListDeltaMonitorListener* _friendListDeltaMonitorListener;
	MNContactSyncPolicy* _contactSyncPolicy;
	NSOperationQueue* _operationQueue;
	id<MNSpotlightUserIndexing> _spotlightUserIndexer;
	id<MNSpotlightItemPreparing> _spotlightItemPreparer;
	MNSpotlightUserContactUpdatePolicy* _spotlightUserContactUpdatePolicy;
	id<MNCDNProfileImageDownloadListener> _spotlightProfileImageListener;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	MNSearchableItemTracker* _searchableItemTracker;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isStarted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactsDidUpdate:(id)arg1 ;
-(void)contactsDidDelete:(id)arg1 ;
-(id)initWithAuthenticationManager:(id)arg1 contactStore:(id)arg2 spotlightIndexPolicy:(id)arg3 syncStore:(id)arg4 friendListDeltaMonitorListener:(id)arg5 contactSyncPolicy:(id)arg6 spotlightUserIndexer:(id)arg7 spotlightItemPreparer:(id)arg8 spotlightUserContactUpdatePolicy:(id)arg9 profileImageDownloader:(id)arg10 spotlightProfileImageListener:(id)arg11 searchableItemTracker:(id)arg12 ;
-(void)_didChangeCurrentSession:(id)arg1 ;
-(BOOL)_shouldUseSyncStore;
-(void)_indexContactSyncUsers:(id)arg1 ;
-(void)_indexMissingFriends;
-(void)_indexSyncStoreFriends;
-(void)_indexContactStoreFriends;
-(void)_onAllContactsFetchOperationCompleted:(id)arg1 ;
-(void)_contactUpdateIndexingWithContactSyncUsers:(id)arg1 ;
-(void)didAddFriends:(id)arg1 ;
-(void)didRemoveFriends:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
