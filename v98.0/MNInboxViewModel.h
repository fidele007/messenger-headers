/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxRowsViewModel, MNCYMKViewModel, MNThreadListViewModelViewState, MNThreadCellLayout;

@interface MNInboxViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowMoreCell;
	MNInboxRowsViewModel* _inboxRowsViewModel;
	MNCYMKViewModel* _cymkViewModel;
	MNThreadListViewModelViewState* _threadListViewState;
	MNThreadCellLayout* _defaultThreadCellLayout;

}

@property (nonatomic,copy,readonly) MNInboxRowsViewModel * inboxRowsViewModel;                         //@synthesize inboxRowsViewModel=_inboxRowsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNCYMKViewModel * cymkViewModel;                                   //@synthesize cymkViewModel=_cymkViewModel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreCell;                                                //@synthesize shouldShowMoreCell=_shouldShowMoreCell - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListViewModelViewState * threadListViewState;              //@synthesize threadListViewState=_threadListViewState - In the implementation block
@property (nonatomic,copy,readonly) MNThreadCellLayout * defaultThreadCellLayout;                      //@synthesize defaultThreadCellLayout=_defaultThreadCellLayout - In the implementation block
-(MNInboxRowsViewModel *)inboxRowsViewModel;
-(BOOL)shouldShowMoreCell;
-(MNCYMKViewModel *)cymkViewModel;
-(MNThreadListViewModelViewState *)threadListViewState;
-(MNThreadCellLayout *)defaultThreadCellLayout;
-(id)initWithInboxRowsViewModel:(id)arg1 cymkViewModel:(id)arg2 shouldShowMoreCell:(BOOL)arg3 threadListViewState:(id)arg4 defaultThreadCellLayout:(id)arg5 ;
@end
