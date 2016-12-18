/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMinimizedTabBarViewDelegate.h>
#import <Messenger/FBMinimizedTabBarBrowserViewControllerDelegate.h>

@protocol OS_dispatch_queue, FBNavigationCoordinator, FBMinimizedTabBarWebViewProvider;
@class NSMutableArray, FBKVOController, UIViewController, FBMinimizedTabBarBrowserViewController, UIView, FBUserSession, NSObject, FBMinimizedTabBarView, NSString;

@interface FBMinimizedTabBarViewCoordinator : NSObject <FBMinimizedTabBarViewDelegate, FBMinimizedTabBarBrowserViewControllerDelegate> {

	BOOL _minimizedTabBarHidden;
	NSMutableArray* _minimizedViewControllers;
	FBKVOController* _kvoController;
	UIViewController* _currentKVoObeservingVC;
	FBMinimizedTabBarBrowserViewController* _tabBrowserViewController;
	UIView* _minimizedTabbarHostView;
	UIView* _tabbarView;
	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _diskCacheQueue;
	BOOL _visibilityHasBeenSet;
	BOOL _shouldShowMinimizedTabBar;
	BOOL _forceOpenDrawer;
	BOOL _useDiskCache;
	FBMinimizedTabBarView* _minimizedTabBarView;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBMinimizedTabBarWebViewProvider> _webViewProvider;

}

@property (nonatomic,readonly) FBMinimizedTabBarView * minimizedTabBarView;                     //@synthesize minimizedTabBarView=_minimizedTabBarView - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;                 //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldShowMinimizedTabBar;                                    //@synthesize shouldShowMinimizedTabBar=_shouldShowMinimizedTabBar - In the implementation block
@property (nonatomic,readonly) int numberOfMinimizedTabs; 
@property (assign,nonatomic) BOOL forceOpenDrawer;                                              //@synthesize forceOpenDrawer=_forceOpenDrawer - In the implementation block
@property (assign,nonatomic) BOOL useDiskCache;                                                 //@synthesize useDiskCache=_useDiskCache - In the implementation block
@property (nonatomic,retain) id<FBMinimizedTabBarWebViewProvider> webViewProvider;              //@synthesize webViewProvider=_webViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(id)_diskCache;
-(id<FBMinimizedTabBarWebViewProvider>)webViewProvider;
-(void)minimizableItemDismissButtonTappedInTabBrowser:(id)arg1 ;
-(void)minimizableItemMinimizeButtonTappedInTabBrowser:(id)arg1 ;
-(int)numberOfMinimizedTabs;
-(void)addMinimizableContentViewController:(id)arg1 ;
-(void)closeAllTabsButtonTapped:(id)arg1 ;
-(void)minimizedTabBarBrowserViewController:(id)arg1 didSelectMinimizedTab:(id)arg2 atIndex:(int)arg3 withTabFrameInWindow:(CGRect)arg4 ;
-(id)_tabbarView;
-(void)_hideMiniMizedTabBarView;
-(void)_animateShowMiniMizedTabBarView;
-(void)_updateMinimizedTabBar;
-(id)_findCorrespondMinimizableContentVC:(id)arg1 ;
-(void)_animateShowMinimizedTabbarFromHiddenPosition;
-(void)_animateHideMinimizedTabBarView;
-(void)browseAllMinimizedButtonTapped:(id)arg1 ;
-(id)_tryReplaceEmptyHolderViewController:(id)arg1 ;
-(double)_minimizedTabbarPositionHidden:(BOOL)arg1 ;
-(void)_cacheCurrentTabs;
-(void)_observeMinimizableContentVC:(id)arg1 ;
-(id)_archiveCurrentTabsToBinaryData;
-(id)_keyForDiskCache;
-(void)_restoreArchivedTabsFromArray:(id)arg1 ;
-(void)setShouldShowMinimizedTabBar:(BOOL)arg1 ;
-(void)minimizedTabBarViewDismissButtonTapped:(id)arg1 ;
-(void)minimizedTabBarViewTapped:(id)arg1 ;
-(BOOL)hasMinimizedViewController:(id)arg1 ;
-(void)restoreCachedTabsFromDisk;
-(FBMinimizedTabBarView *)minimizedTabBarView;
-(BOOL)shouldShowMinimizedTabBar;
-(BOOL)forceOpenDrawer;
-(void)setForceOpenDrawer:(BOOL)arg1 ;
-(void)setWebViewProvider:(id<FBMinimizedTabBarWebViewProvider>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithSession:(id)arg1 ;
-(void)dismissButtonTapped:(id)arg1 ;
-(void)setUseDiskCache:(BOOL)arg1 ;
-(BOOL)useDiskCache;
@end
