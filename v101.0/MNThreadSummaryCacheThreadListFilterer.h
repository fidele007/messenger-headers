/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadSummaryCacheReading;
@class MNThreadListContinuityTracker;

@interface MNThreadSummaryCacheThreadListFilterer : NSObject {

	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	MNThreadListContinuityTracker* _threadListContinuityTracker;

}
-(id)orderedThreadSummariesForThreadListType:(long long)arg1 ;
-(id)initWithThreadSummaryCacheReader:(id)arg1 threadListContinuityTracker:(id)arg2 ;
-(id)orderedThreadSummariesForThreadListType:(long long)arg1 filter:(/*^block*/id)arg2 ;
@end

