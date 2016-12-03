/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMinimizedTabBarViewDelegate.h>
#import <Messenger/FBMinimizedTabBarBrowserViewControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class NSMutableArray, FBKVOController, UIViewController, FBMinimizedTabBarBrowserViewController, UIView, FBMinimizedTabBarView, NSString;

@interface FBMinimizedTabBarViewCoordinator : NSObject <FBMinimizedTabBarViewDelegate, FBMinimizedTabBarBrowserViewControllerDelegate> {

	BOOL _minimizedTabBarHidden;
	NSMutableArray* _minimizedViewControllers;
	FBKVOController* _kvoController;
	UIViewController* _currentKVoObeservingVC;
	FBMinimizedTabBarBrowserViewController* _tabBrowserViewController;
	UIView* _minimizedTabbarHostView;
	UIView* _tabbarView;
	BOOL _shouldShowMinimizedTabBar;
	FBMinimizedTabBarView* _minimizedTabBarView;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (nonatomic,readonly) FBMinimizedTabBarView * minimizedTabBarView;                  //@synthesize minimizedTabBarView=_minimizedTabBarView - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMinimizedTabBar;                                 //@synthesize shouldShowMinimizedTabBar=_shouldShowMinimizedTabBar - In the implementation block
@property (nonatomic,readonly) int numberOfMinimizedTabs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(void)minimizableItemDismissButtonTappedInTabBrowser:(id)arg1 ;
-(void)minimizableItemMinimizeButtonTappedInTabBrowser:(id)arg1 ;
-(int)numberOfMinimizedTabs;
-(void)addMinimizableContentViewController:(id)arg1 ;
-(void)closeAllTabsButtonTapped:(id)arg1 ;
-(void)minimizedTabBarBrowserViewController:(id)arg1 didSelectMinimizedTab:(id)arg2 atIndex:(int)arg3 withTabFrameInWindow:(CGRect)arg4 ;
-(void)minimizedTabBarViewDismissButtonTapped:(id)arg1 ;
-(void)minimizedTabBarViewTapped:(id)arg1 ;
-(void)browseAllMinimizedButtonTapped:(id)arg1 ;
-(id)_tabbarView;
-(void)_observeMinimizableContentVC:(id)arg1 ;
-(void)_hideMiniMizedTabBarView;
-(void)_animateShowMiniMizedTabBarView;
-(id)_findCorrespondMinimizableContentVC:(id)arg1 ;
-(void)_updateMinimizedTabBar;
-(void)_animateShowMinimizedTabbarFromHiddenPosition;
-(void)_animateHideMinimizedTabBarView;
-(double)_minimizedTabbarPositionHidden:(BOOL)arg1 ;
-(BOOL)hasMinimizedViewController:(id)arg1 ;
-(void)setShouldShowMinimizedTabBar:(BOOL)arg1 ;
-(FBMinimizedTabBarView *)minimizedTabBarView;
-(BOOL)shouldShowMinimizedTabBar;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dismissButtonTapped:(id)arg1 ;
@end

