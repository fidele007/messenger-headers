/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadRowsViewModel, MNThreadListViewModelViewState;

@interface MNThreadListViewModelElement : FBValueObject <NSCopying> {

	MNThreadRowsViewModel* _threadRowsViewModel;
	MNThreadListViewModelViewState* _viewState;

}

@property (nonatomic,copy,readonly) MNThreadRowsViewModel * threadRowsViewModel;              //@synthesize threadRowsViewModel=_threadRowsViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListViewModelViewState * viewState;               //@synthesize viewState=_viewState - In the implementation block
-(MNThreadRowsViewModel *)threadRowsViewModel;
-(id)initWithThreadRowsViewModel:(id)arg1 viewState:(id)arg2 ;
-(MNThreadListViewModelViewState *)viewState;
@end
