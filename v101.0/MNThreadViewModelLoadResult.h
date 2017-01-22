/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadClientSummaryUpdateCreating;
@class MNThreadViewModel;

@interface MNThreadViewModelLoadResult : NSObject {

	MNThreadViewModel* _threadViewModel;
	id<MNThreadClientSummaryUpdateCreating> _summaryUpdateCreator;

}

@property (nonatomic,copy,readonly) MNThreadViewModel * threadViewModel;                                  //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,readonly) id<MNThreadClientSummaryUpdateCreating> summaryUpdateCreator;              //@synthesize summaryUpdateCreator=_summaryUpdateCreator - In the implementation block
-(id<MNThreadClientSummaryUpdateCreating>)summaryUpdateCreator;
-(MNThreadViewModel *)threadViewModel;
-(id)initWithThreadViewModel:(id)arg1 summaryUpdateCreator:(id)arg2 ;
@end
