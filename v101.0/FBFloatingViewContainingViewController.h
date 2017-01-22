/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface FBFloatingViewContainingViewController : UIViewController {

	/*^block*/id _viewFrameBlock;
	BOOL _isPresented;
	BOOL _shouldInvokeDismissBlockBeforeRemovingFromParentViewController;
	BOOL _isBeingRemovedFromParent;
	UIViewController* _presentedFloatingViewController;
	/*^block*/id _onPresentBlock;
	/*^block*/id _onDismissBlock;

}

@property (nonatomic,readonly) UIViewController * presentedFloatingViewController;                             //@synthesize presentedFloatingViewController=_presentedFloatingViewController - In the implementation block
@property (nonatomic,copy) id onPresentBlock;                                                                  //@synthesize onPresentBlock=_onPresentBlock - In the implementation block
@property (nonatomic,copy) id onDismissBlock;                                                                  //@synthesize onDismissBlock=_onDismissBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldInvokeDismissBlockBeforeRemovingFromParentViewController;              //@synthesize shouldInvokeDismissBlockBeforeRemovingFromParentViewController=_shouldInvokeDismissBlockBeforeRemovingFromParentViewController - In the implementation block
@property (nonatomic,readonly) BOOL isBeingRemovedFromParent;                                                  //@synthesize isBeingRemovedFromParent=_isBeingRemovedFromParent - In the implementation block
+(id)floatingViewContainingViewControllerForViewController:(id)arg1 ;
-(id)analyticsPresentedViewController;
-(id)initWithFloatingViewController:(id)arg1 viewFrameBlock:(/*^block*/id)arg2 ;
-(void)setOnDismissBlock:(id)arg1 ;
-(void)setOnPresentBlock:(id)arg1 ;
-(BOOL)isBeingRemovedFromParent;
-(void)setShouldInvokeDismissBlockBeforeRemovingFromParentViewController:(BOOL)arg1 ;
-(UIViewController *)presentedFloatingViewController;
-(BOOL)shouldInvokeDismissBlockBeforeRemovingFromParentViewController;
-(void)_invokeDismissBlock;
-(void)_invokePresentBlock;
-(id)onPresentBlock;
-(id)onDismissBlock;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end
