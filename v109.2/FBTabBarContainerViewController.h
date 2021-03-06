/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBContainerViewController.h>

@class FBTabBarContainerView, FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer, UIView, UIViewController;

@interface FBTabBarContainerViewController : FBContainerViewController {

	FBTabBarContainerView* _containerView;
	FBTabBarContainerViewControllerAppearanceTransitioningListenerAnnouncer* _announcer;
	UIView* _navigationBar;
	UIView* _minimizedTabBarView;
	UIViewController* _contentViewController;
	UIViewController* _tabBarViewController;

}

@property (nonatomic,retain) UIView * navigationBar;                                       //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) UIView * minimizedTabBarView;                                 //@synthesize minimizedTabBarView=_minimizedTabBarView - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                     //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * tabBarViewController;                      //@synthesize tabBarViewController=_tabBarViewController - In the implementation block
@property (assign,nonatomic) unsigned long long tabBarViewControllerPosition; 
@property (assign,nonatomic) unsigned long long tabBarIconSize; 
@property (assign,nonatomic) BOOL alwaysExpandLeftTabBar; 
@property (assign,nonatomic) double tabBarViewOffsetFraction; 
@property (assign,getter=isTabBarHidden,nonatomic) BOOL tabBarHidden; 
-(void)setTabBarViewController:(UIViewController *)arg1 ;
-(UIViewController *)tabBarViewController;
-(id)initWithAnnouncer:(id)arg1 ;
-(UIView *)minimizedTabBarView;
-(void)setTabBarHidden:(BOOL)arg1 ;
-(void)remountTabBar;
-(unsigned long long)tabBarViewControllerPosition;
-(void)setTabBarViewOffsetFraction:(double)arg1 animated:(BOOL)arg2 ;
-(void)_setChildViewController:(id*)arg1 withViewController:(id)arg2 removeViewBlock:(/*^block*/id)arg3 addViewBlock:(/*^block*/id)arg4 ;
-(void)setMinimizedTabBarView:(UIView *)arg1 ;
-(unsigned long long)tabBarIconSize;
-(void)setTabBarIconSize:(unsigned long long)arg1 ;
-(BOOL)alwaysExpandLeftTabBar;
-(void)setAlwaysExpandLeftTabBar:(BOOL)arg1 ;
-(double)tabBarViewOffsetFraction;
-(void)setTabBarViewControllerPosition:(unsigned long long)arg1 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 ;
-(void)setTabBarViewOffsetFraction:(double)arg1 alongsideTransition:(id)arg2 animation:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isTabBarHidden;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(BOOL)fb_touchShouldPreventSwipeToOpenLeftNav:(id)arg1 ;
-(id)analyticsPresentedViewController;
-(BOOL)analyticsAutomaticallyLogContent;
-(id)init;
-(UIView *)navigationBar;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setNavigationBar:(UIView *)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(UIViewController *)contentViewController;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end

