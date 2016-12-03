/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPresentableViewController.h>
#import <Messenger/FBHorizontalSwipeBasedDismissalManagerDelegate.h>
#import <Messenger/FBModalInteractionControllerDelegate.h>
#import <Messenger/FBScrollViewSwipeBasedDismissalManagerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Messenger/FBInAppNotificationEligibilityProtocol.h>

@protocol FBModalContentViewController, FBModalContainerViewControllerDelegate;
@class UIView, UIResponder, FBScrollViewSwipeBasedDismissalManager, FBHorizontalSwipeBasedDismissalManager, FBModalInteractionController, FBModalInteractiveDismissalStateMachine, UIViewController, NSString;

@interface FBModalContainerViewController : UIViewController <FBPresentableViewController, FBHorizontalSwipeBasedDismissalManagerDelegate, FBModalInteractionControllerDelegate, FBScrollViewSwipeBasedDismissalManagerDelegate, UIViewControllerTransitioningDelegate, FBInAppNotificationEligibilityProtocol> {

	UIView* _containerView;
	id<FBModalContentViewController> _contentDelegate;
	UIResponder* _firstResponderAtInteractiveDismissalStart;
	FBScrollViewSwipeBasedDismissalManager* _verticalDismissalManager;
	FBHorizontalSwipeBasedDismissalManager* _horizontalDismissalManager;
	FBModalInteractionController* _interactionController;
	FBModalInteractiveDismissalStateMachine* _stateMachine;
	BOOL _horizontalAppearanceAndDismissalTransitionEnabled;
	BOOL _shouldBounceScrollViewInVerticalSwipe;
	BOOL _shouldAnimateStatusBarInTransition;
	id<FBModalContainerViewControllerDelegate> _delegate;
	UIViewController* _contentViewController;
	UIView* _headerView;
	long long _supportedDismissalDirections;

}

@property (assign,nonatomic,__weak) id<FBModalContainerViewControllerDelegate> delegate;                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;                                                                                     //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) UIView * headerView;                                                                                                          //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) long long supportedDismissalDirections;                                                                                         //@synthesize supportedDismissalDirections=_supportedDismissalDirections - In the implementation block
@property (assign,getter=isHorizontalAppearanceAndDismissalTransitionEnabled,nonatomic) BOOL horizontalAppearanceAndDismissalTransitionEnabled;              //@synthesize horizontalAppearanceAndDismissalTransitionEnabled=_horizontalAppearanceAndDismissalTransitionEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldBounceScrollViewInVerticalSwipe;                                                                                     //@synthesize shouldBounceScrollViewInVerticalSwipe=_shouldBounceScrollViewInVerticalSwipe - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateStatusBarInTransition;                                                                                        //@synthesize shouldAnimateStatusBarInTransition=_shouldAnimateStatusBarInTransition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(id)analyticsExtras;
-(id)analyticsPresentedViewController;
-(id)initWithContentViewController:(id)arg1 session:(id)arg2 ;
-(void)setHorizontalAppearanceAndDismissalTransitionEnabled:(BOOL)arg1 ;
-(void)setSupportedDismissalDirections:(long long)arg1 ;
-(long long)supportedDismissalDirections;
-(unsigned long long)preferredPresentationMethod;
-(id)analyticsDestinationURL;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowFacecastNotification:(id)arg2 broadcaster:(id)arg3 ;
-(void)_didTapCloseButtonInHeaderView;
-(void)setNeedsDismissalScrollViewUpdate;
-(void)_startInteractiveDismissal;
-(void)_cancelInteractiveDismissal;
-(void)_finishInteractiveDismissalWithDirection:(unsigned long long)arg1 ;
-(void)_finishInteractiveDismissal;
-(id)_commonAnimationsForPresentationAndDismissal;
-(id)_panningAnimationWithDirection:(unsigned long long)arg1 ;
-(void)_resetIdleState;
-(void)_finishInteractiveDismissalWithAnimation:(id)arg1 ;
-(void)horizontalSwipeBasedDismissalManagerDidDetectDismissalGesture:(id)arg1 ;
-(BOOL)horizontalSwipeBasedDismissalManagerCanBeginSwipingContainerView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)horizontalSwipeBasedDismissalManagerDidEndContainerReset:(id)arg1 ;
-(void)horizontalSwipeBasedDismissalManagerDidBeginSwipingContainerView:(id)arg1 ;
-(void)horizontalSwipeBasedDismissalManager:(id)arg1 didUpdateContainerTranslationProgress:(double)arg2 ;
-(void)modalInteractionControllerDidStartInteractiveTransition:(id)arg1 ;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didDetectDismissalGestureWithDirection:(unsigned long long)arg2 fromView:(id)arg3 ;
-(BOOL)scrollViewSwipeBasedDismissalManagerShouldBeginSwipingContainerView:(id)arg1 withDirection:(long long)arg2 ;
-(void)scrollViewSwipeBasedDismissalManagerWillBeginContainerResetAnimation:(id)arg1 ;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didEndContainerResetWithAnimation:(BOOL)arg2 ;
-(void)scrollViewSwipeBasedDismissalManagerDidBeginSwipingContainerView:(id)arg1 ;
-(void)scrollViewSwipeBasedDismissalManager:(id)arg1 didUpdateContainerTranslationProgress:(double)arg2 ;
-(BOOL)isHorizontalAppearanceAndDismissalTransitionEnabled;
-(BOOL)shouldBounceScrollViewInVerticalSwipe;
-(void)setShouldBounceScrollViewInVerticalSwipe:(BOOL)arg1 ;
-(BOOL)shouldAnimateStatusBarInTransition;
-(void)setShouldAnimateStatusBarInTransition:(BOOL)arg1 ;
-(void)setDelegate:(id<FBModalContainerViewControllerDelegate>)arg1 ;
-(id<FBModalContainerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(UIViewController *)contentViewController;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)transitioningDelegate;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)previewActionItems;
-(UIView *)headerView;
-(BOOL)accessibilityPerformEscape;
@end

