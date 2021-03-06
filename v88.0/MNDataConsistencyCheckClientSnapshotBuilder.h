/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDataConsistencyCheckClientSnapshotBuilding.h>

@protocol MNThreadSummaryCacheReading, MNThreadMessageCacheReading, MNDataConsistencyThreadFetchedConfirming;
@class MNThreadSummaryCacheThreadListFilterer, FBMSPDataStore, NSString;

@interface MNDataConsistencyCheckClientSnapshotBuilder : NSObject <MNDataConsistencyCheckClientSnapshotBuilding> {

	MNThreadSummaryCacheThreadListFilterer* _threadSummaryInboxFilterer;
	id<MNThreadSummaryCacheReading> _threadSummaryCacheReading;
	id<MNThreadMessageCacheReading> _threadMessageCacheReading;
	FBMSPDataStore* _syncProtocolDataStore;
	id<MNDataConsistencyThreadFetchedConfirming> _threadFetchedConfirmer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)buildClientSnapshot;
-(id)initWithThreadSummaryCacheReader:(id)arg1 threadListContinuityTracker:(id)arg2 threadMessageCacheReading:(id)arg3 threadFetchedConfirmer:(id)arg4 syncProtocolDataStore:(id)arg5 ;
@end

