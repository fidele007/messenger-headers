/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(MNThreadViewModel *)threadViewModel;
-(id)initWithThreadViewModel:(id)arg1 summaryUpdateCreator:(id)arg2 ;
-(id<MNThreadClientSummaryUpdateCreating>)summaryUpdateCreator;
@end

