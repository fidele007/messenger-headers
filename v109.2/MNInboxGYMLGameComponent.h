/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKCompositeComponent.h>

@class MNInboxGYMLViewModel, MNGameListPresenter;

@interface MNInboxGYMLGameComponent : CKCompositeComponent {

	MNInboxGYMLViewModel* _viewModel;
	MNGameListPresenter* _gameListPresenter;

}

@property (nonatomic,copy,readonly) MNInboxGYMLViewModel * viewModel;                //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) MNGameListPresenter * gameListPresenter;              //@synthesize gameListPresenter=_gameListPresenter - In the implementation block
+(id)newWithGYMLViewModel:(id)arg1 gameListPresenter:(id)arg2 ;
-(MNGameListPresenter *)gameListPresenter;
-(MNInboxGYMLViewModel *)viewModel;
@end

