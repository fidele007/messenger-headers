/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCDNProfileImageDownloadListener.h>

@protocol OS_dispatch_queue;
@class FBContactStore, MNSpotlightUserIndexer, MNSearchableItemTracker, FBSyncStore, MNContactSyncPolicy, NSObject, NSString;

@interface MNSpotlightUserProfileIndexer : NSObject <MNCDNProfileImageDownloadListener> {

	FBContactStore* _contactStore;
	MNSpotlightUserIndexer* _spotlightUserIndexer;
	MNSearchableItemTracker* _searchableItemTracker;
	FBSyncStore* _syncStore;
	MNContactSyncPolicy* _contactSyncPolicy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContactStore:(id)arg1 syncStore:(id)arg2 contactSyncPolicy:(id)arg3 searchableItemTracker:(id)arg4 spotlightUserIndexer:(id)arg5 queue:(id)arg6 ;
-(void)didDownloadProfileImageForUserWithId:(id)arg1 size:(unsigned long long)arg2 image:(id)arg3 ;
@end

