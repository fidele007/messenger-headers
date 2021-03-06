/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol FBNavigationCoordinatorInternal
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * underlyingViewController; 
@property (nonatomic,readonly) UIViewController*<FBStackViewControllerProtocol> bottomStackViewController; 
@required
-(UIViewController*<FBStackViewControllerProtocol>)bottomStackViewController;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)removeViewControllerFromStack:(id)arg1;
-(BOOL)hasViewControllersOnBottomStack;
-(UIViewController *)underlyingViewController;
-(UIViewController *)topViewController;
-(void)setNeedsStatusBarAppearanceUpdate;

@end

