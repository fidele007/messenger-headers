/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNIncrementalPersistenceCoordinating, MNThreadMessageCaching, MNMessagesSyncSnapshotPersistenceJobListening;
@class MNThreadSummaryCacheThreadListFilterer, MNThreadListContinuityTracker, NSString;

@interface MNMessagesSyncSnapshotPersistenceRunner : NSObject <FBViewerContextClassProvidable> {

	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	MNThreadSummaryCacheThreadListFilterer* _threadSummaryListCacheFilter;
	MNThreadListContinuityTracker* _threadListContinuityTracker;
	id<MNThreadMessageCaching> _inMemoryThreadMessageCache;
	id<MNMessagesSyncSnapshotPersistenceJobListening> _listener;
	/*^block*/id _persistenceJobBuilderBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)buildAndRunSnapshotPersistenceJobsWithSequenceId:(long long)arg1 ;
-(id)initWithPersistenceCoordinator:(id)arg1 threadSummaryListCacheFilter:(id)arg2 threadListContinuityTracker:(id)arg3 inMemoryThreadMessageCache:(id)arg4 listener:(id)arg5 persistenceJobBuilderBlock:(/*^block*/id)arg6 ;
@end

