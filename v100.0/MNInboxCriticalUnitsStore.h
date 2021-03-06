/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInboxUnitUpdateListening.h>

@protocol OS_dispatch_queue;
@class MNNonDiscardingBlobStore, MNInboxUnitsStore, NSObject, FBValueObjectPair, NSString;

@interface MNInboxCriticalUnitsStore : NSObject <MNInboxUnitUpdateListening> {

	MNNonDiscardingBlobStore* _blobStore;
	MNInboxUnitsStore* _inboxUnitStore;
	NSObject*<OS_dispatch_queue> _queue;
	FBValueObjectPair* _memoryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_writeToDisk;
-(void)inboxUnitsDidUpdate:(id)arg1 isFreshData:(BOOL)arg2 ;
-(void)loadCriticalUnitsWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didRestoreInboxUnits:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_unitIdsAboveRecent;
-(id)_appendRecentAndMoreThreads:(id)arg1 ;
-(id)_filterCriticalUnits:(id)arg1 ;
-(id)initWithBlobStore:(id)arg1 inboxUnitsStore:(id)arg2 queue:(id)arg3 ;
@end

