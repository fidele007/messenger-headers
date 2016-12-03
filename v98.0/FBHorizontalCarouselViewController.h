/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBCarouselScrollViewGestureDelegate.h>
#import <Messenger/FBNavigationChromePresenter.h>
#import <Messenger/FBLoadingProgressDelegate.h>
#import <Messenger/FBExpandableNavigationBarStatusBarAppearanceDelegate.h>
#import <Messenger/FBInAppNotificationEligibilityProtocol.h>

@protocol FBContentController, FBHorizontalCarouselViewControllerDelegate;
@class NSMutableArray, NSMutableSet, NSSet, UIViewController, FBExpandableNavigationBar, FBExpandableNavigationScrollHandler, FBExpandableButton, FBCarouselScrollView, FBCarouselTitleView, NSArray, UIControl, NSString;

@interface FBHorizontalCarouselViewController : UIViewController <UIScrollViewDelegate, FBCarouselScrollViewGestureDelegate, FBNavigationChromePresenter, FBLoadingProgressDelegate, FBExpandableNavigationBarStatusBarAppearanceDelegate, FBInAppNotificationEligibilityProtocol> {

	NSMutableArray* _contentControllers;
	NSMutableSet* _visibleContentControllers;
	NSMutableSet* _appearingContentControllers;
	NSMutableSet* _disappearingContentControllers;
	NSSet* _contentcontrollersInPreloadViewport;
	UIViewController*<FBContentController> _activeContentController;
	unsigned long long _navigationBarExpansionStyle;
	FBExpandableNavigationBar* _navigationBar;
	FBExpandableNavigationScrollHandler* _navigationBarScrollHandler;
	BOOL _hasBeenPresented;
	BOOL _statusBarHiddenForPreviousViewController;
	long long _statusBarStyleForPreviousViewController;
	BOOL _navigationChromeVisible;
	FBExpandableButton* _backButton;
	FBExpandableButton* _shareButton;
	FBCarouselScrollView* _horizontalScrollView;
	FBCarouselTitleView* _titleView;
	id<FBHorizontalCarouselViewControllerDelegate> _delegate;
	long long _activeContentControllerIndex;
	NSRange _preloadViewport;

}

@property (assign,nonatomic) NSRange preloadViewport;                                                     //@synthesize preloadViewport=_preloadViewport - In the implementation block
@property (assign,nonatomic) long long activeContentControllerIndex;                                      //@synthesize activeContentControllerIndex=_activeContentControllerIndex - In the implementation block
@property (nonatomic,readonly) FBExpandableButton * _backButton;                                          //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,readonly) FBExpandableButton * _shareButton;                                         //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,readonly) FBCarouselScrollView * horizontalScrollView;                               //@synthesize horizontalScrollView=_horizontalScrollView - In the implementation block
@property (assign,nonatomic,__weak) id<FBHorizontalCarouselViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contentControllers;                                         //@synthesize contentControllers=_contentControllers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * visibleContentControllers;                                    //@synthesize visibleContentControllers=_visibleContentControllers - In the implementation block
@property (nonatomic,readonly) UIControl * backButton; 
@property (nonatomic,readonly) UIControl * shareButton; 
@property (nonatomic,readonly) FBCarouselTitleView * titleView;                                           //@synthesize titleView=_titleView - In the implementation block
@property (assign,nonatomic) BOOL navigationChromeVisible;                                                //@synthesize navigationChromeVisible=_navigationChromeVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBExpandableButton *)_backButton;
-(void)requireGestureRecognizerToFailBeforePanning:(id)arg1 ;
-(id)initWithContentControllers:(id)arg1 navigationBarExpansionStyle:(unsigned long long)arg2 ;
-(NSRange)preloadViewport;
-(void)setPreloadViewport:(NSRange)arg1 ;
-(void)contentController:(id)arg1 didUpdateLoadingProgress:(double)arg2 ;
-(void)contentControllerDidFinishLoading:(id)arg1 ;
-(void)setNavigationChromeVisibilityPercentage:(double)arg1 ;
-(BOOL)fb_shouldBeginDismissModalViewControllerGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)fb_willDismissModalViewController:(id)arg1 ;
-(void)fb_didDismissModalViewController:(id)arg1 ;
-(BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(long long)arg1 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowFacecastNotification:(id)arg2 broadcaster:(id)arg3 ;
-(void)carouselScrollView:(id)arg1 didBeginPanningInDirection:(long long)arg2 ;
-(BOOL)carouselScrollView:(id)arg1 shouldBeginHorizontalScrollGestureInDirection:(long long)arg2 withTouches:(id)arg3 ;
-(void)insertContentController:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(FBCarouselScrollView *)horizontalScrollView;
-(void)_didTapNavigationBar:(id)arg1 ;
-(void)_setTitleViewVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_tileViews;
-(void)scrollToContentControllerAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(UIEdgeInsets)_chromeContentOverlapAmount;
-(void)_scrollViewDidFinishScrolling:(id)arg1 ;
-(void)_finishAppearanceTransitions;
-(NSSet *)visibleContentControllers;
-(void)_beginAppearanceTransitionForControllerIfNeeded:(id)arg1 appearing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(long long)_indexForContentControllerAtHorizontalPosition:(double)arg1 ;
-(void)setActiveContentControllerIndex:(long long)arg1 ;
-(void)_setActiveContentController:(id)arg1 ;
-(long long)activeContentControllerIndex;
-(void)expandableNavigationBarDidUpdatePreferredStatusBarVisibility:(id)arg1 ;
-(void)expandableNavigationBar:(id)arg1 didUpdateStatusBarVisibilityPercentage:(double)arg2 ;
-(void)bounceCarousel;
-(void)moveContentControllerAtIndex:(long long)arg1 toIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setNavigationChromeVisible:(BOOL)arg1 ;
-(NSArray *)contentControllers;
-(BOOL)navigationChromeVisible;
-(void)setDelegate:(id<FBHorizontalCarouselViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<FBHorizontalCarouselViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(FBCarouselTitleView *)titleView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateContentInset;
-(UIControl *)backButton;
-(UIControl *)shareButton;
-(FBExpandableButton *)_shareButton;
@end

