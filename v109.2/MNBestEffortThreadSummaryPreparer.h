/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNThreadStore, MNOperationsTracker, NSObject;

@interface MNBestEffortThreadSummaryPreparer : NSObject {

	MNThreadStore* _threadStore;
	MNOperationsTracker* _operationsTracker;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithThreadStore:(id)arg1 queue:(id)arg2 ;
-(void)prepareThreadSummariesForSyncedThreadKeys:(id)arg1 fulfillmentPolicy:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleFetchedForRequestId:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(void)_handleFailureForRequestId:(unsigned long long)arg1 ;
-(void)_handleProgressForRequestId:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(void)_finishRequestWithInternalId:(unsigned long long)arg1 andMostCompleteResponse:(id)arg2 ;
@end

