/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNGroupChatUserBannerViewControllerDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNGroupChatUserBannerCoordinatorDelegate;
@class MNThreadViewModel, MNGroupChatUserBannerViewController, MNGroupChatUserBannerCoordinatorInjector, NSString, UIViewController;

@interface MNGroupChatUserBannerCoordinator : NSObject <FBClassInjectable, MNGroupChatUserBannerViewControllerDelegate, MNThreadViewModelConfigurable> {

	MNThreadViewModel* _threadViewModel;
	MNGroupChatUserBannerViewController* _viewController;
	MNGroupChatUserBannerCoordinatorInjector* _injector;
	id<MNGroupChatUserBannerCoordinatorDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * groupChatUserBannerViewController; 
@property (assign,nonatomic,__weak) id<MNGroupChatUserBannerCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowGroupChatUserBannerView; 
+(Class)injectorClass;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)threadViewModel;
-(BOOL)shouldShowGroupChatUserBannerView;
-(UIViewController *)groupChatUserBannerViewController;
-(void)_configureGroupChatUserBannerViewModels;
-(void)groupChatUserBannerViewController:(id)arg1 didTapUserWithUserId:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNGroupChatUserBannerCoordinatorDelegate>)arg1 ;
-(id<MNGroupChatUserBannerCoordinatorDelegate>)delegate;
@end

