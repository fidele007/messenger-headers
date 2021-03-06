/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsSyncStatusListener.h>
#import <Messenger/FBContactImportPermissionListener.h>

@protocol FBImportedContactsDownloadCancellationListener, FBImportedContactsSyncListener, OS_dispatch_queue, FBLocalContactsSyncStatusListener, FBContactImportPermissionListener;
@class FBImportedContactsFilterer, NSObject, FBUserSession, FBImportedContactsSyncPersonOptimisticUpdater, NSString;

@interface FBImportedContactsDownloader : NSObject <FBLocalContactsSyncStatusListener, FBContactImportPermissionListener> {

	id<FBImportedContactsDownloadCancellationListener> _downloadCoordinatorCancellationEventsToCancellationListenerDispatcher;
	id<FBImportedContactsSyncListener> _downloadCoordinatorSyncEventsToListenerDispatcher;
	FBImportedContactsFilterer* _filterer;
	NSObject*<OS_dispatch_queue> _importedContactsDownloadQueue;
	id<FBLocalContactsSyncStatusListener> _outsideLocalContactSyncEventsToDownloadCoordinatorDispatcher;
	id<FBContactImportPermissionListener> _outsideContactImportPermissionEventsToDownloadCoordinatorDispatcher;
	FBUserSession* _session;
	FBImportedContactsSyncPersonOptimisticUpdater* _syncPersonOptimisticUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImportingAllowed;
-(void)contactImportingDisallowed;
-(void)localContactsSyncStarted;
-(void)foundLocalContactChangesWithNumberOfChanges:(unsigned long long)arg1 ;
-(void)foundNoLocalContactChanges;
-(void)localContactsSyncProgressedWithStatus:(id)arg1 ;
-(void)localContactsSyncCompleted;
-(void)localContactsSyncFailed;
-(void)localContactsSyncFailedDueToContactImportingBeingLocked;
-(id)initWithNetworker:(id)arg1 session:(id)arg2 queueOntoWhichEventsAreDispatched:(id)arg3 listener:(id)arg4 cancellationListener:(id)arg5 ;
@end

