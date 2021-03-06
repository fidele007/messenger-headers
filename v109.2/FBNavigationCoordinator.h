/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPopoverOverlayNavigationCoordinatorDelegate.h>
#import <Messenger/FBModalPresentationStackViewControllerDelegate.h>
#import <Messenger/FBNavigationCoordinatorIntrospection.h>
#import <Messenger/FBNavigationCoordinatorModalPresentation.h>
#import <Messenger/FBNavigationCoordinatorInternal.h>
#import <Messenger/FBNavigationCoordinatorImplProtocol.h>

@protocol FBNavigationController_DEPRECATEDFBNavigationControllerInternal_DEPRECATED, FBNavigationURLHandler;
@class UIViewController, FBCustomNavigationController, FBNavigationBugReportLogger, NSMutableOrderedSet, FBUserSession, FBPopoverOverlayNavigationCoordinator, NSString;

@interface FBNavigationCoordinator : NSObject <FBPopoverOverlayNavigationCoordinatorDelegate, FBModalPresentationStackViewControllerDelegate, FBNavigationCoordinatorIntrospection, FBNavigationCoordinatorModalPresentation, FBNavigationCoordinatorInternal, FBNavigationCoordinatorImplProtocol> {

	FBCustomNavigationController*<FBNavigationController_DEPRECATED>*<FBNavigationControllerInternal_DEPRECATED> _navigationController;
	FBNavigationBugReportLogger* _bugReportLogger;
	NSMutableOrderedSet* _modalPresentationStackManagers;
	FBUserSession* _session;
	id<FBNavigationURLHandler> _urlHandler;
	NSMutableOrderedSet* _stackViewControllers;
	FBPopoverOverlayNavigationCoordinator* _popoverOverlayNavigationCoordinator;

}

@property (nonatomic,readonly) NSMutableOrderedSet * stackViewControllers;                                                   //@synthesize stackViewControllers=_stackViewControllers - In the implementation block
@property (nonatomic,retain) FBPopoverOverlayNavigationCoordinator * popoverOverlayNavigationCoordinator;                    //@synthesize popoverOverlayNavigationCoordinator=_popoverOverlayNavigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * topViewController; 
@property (nonatomic,readonly) UIViewController * underlyingViewController; 
@property (nonatomic,readonly) UIViewController*<FBStackViewControllerProtocol> bottomStackViewController; 
@property (nonatomic,readonly) id<FBNavigation_DEPRECATED_DO_NOT_USE> DEPRECATED_DO_NOT_USE_fb_navigationOwner; 
@property (nonatomic,readonly) BOOL hasModalViewController; 
@property (nonatomic,readonly) UIViewController * viewControllerOnBottomStack; 
@property (assign,nonatomic,__weak) id<FBNavigationURLHandler> urlHandler;                                                   //@synthesize urlHandler=_urlHandler - In the implementation block
+(id)_stackViewControllerForViewController:(id)arg1 ;
-(void)dismissFloatingViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewController:(id)arg1 ;
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)closeAllPopovers;
-(BOOL)canPresentWithNavigationInfo:(id)arg1 ;
-(BOOL)isPresentingPopover;
-(BOOL)topViewControllerPassesTest:(/*^block*/id)arg1 ;
-(id)topViewControllerConformingToProtocol:(id)arg1 ;
-(id)modalPresentationStackManager;
-(id)topStackViewController;
-(UIViewController*<FBStackViewControllerProtocol>)bottomStackViewController;
-(void)zeroRatingFence:(id)arg1 wantsToPresentInterstitialController:(id)arg2 ;
-(void)zeroRatingFence:(id)arg1 wantsToDismissInterstitialController:(id)arg2 ;
-(void)cleanUpDismissedModalViewController:(id)arg1 ;
-(id)_newStackViewController;
-(void)_setBugReportData:(id)arg1 ;
-(BOOL)hasModalViewController;
-(void)_dismissSingleModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_performModalDismissalForViewController:(id)arg1 containerStackViewControllers:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_cleanUpDismissedModalViewController:(id)arg1 containerStackViewControllers:(id)arg2 ;
-(void)_cleanupStackViewControllerOnRemoval:(id)arg1 ;
-(id)rootContainerController;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(FBPopoverOverlayNavigationCoordinator *)popoverOverlayNavigationCoordinator;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popoverOverlayNavigationCoordinator:(id)arg1 didDismissPopoverOverlay:(id)arg2 ;
-(BOOL)hasPresentedModalPresentationLayer;
-(void)presentModalViewController:(id)arg1 fromViewController:(id)arg2 supportStackViewController:(BOOL)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)dismissModalViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeViewControllerFromStack:(id)arg1 ;
-(BOOL)hasViewControllersOnBottomStack;
-(UIViewController *)underlyingViewController;
-(id)initWithNavigationController:(id)arg1 session:(id)arg2 navigationBarDecoratorProvider:(/*^block*/id)arg3 ;
-(id<FBNavigationURLHandler>)urlHandler;
-(void)setUrlHandler:(id<FBNavigationURLHandler>)arg1 ;
-(void)presentFloatingViewController:(id)arg1 viewFrameBlock:(/*^block*/id)arg2 ;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(id<FBNavigation_DEPRECATED_DO_NOT_USE>)DEPRECATED_DO_NOT_USE_fb_navigationOwner;
-(UIViewController *)viewControllerOnBottomStack;
-(void)addViewControllerOnTopStack:(id)arg1 ;
-(void)removeAllStacks;
-(NSMutableOrderedSet *)stackViewControllers;
-(void)setPopoverOverlayNavigationCoordinator:(FBPopoverOverlayNavigationCoordinator *)arg1 ;
-(BOOL)presentWithNavigationInfo:(id)arg1 ;
-(BOOL)presentWithNavigationInfo:(id)arg1 animated:(BOOL)arg2 ;
-(void)modalPresentationStackViewController:(id)arg1 willAddModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)modalPresentationStackViewController:(id)arg1 didRemoveModalPresentationLayer:(id)arg2 forItem:(id)arg3 ;
-(void)modalPresentationStackViewController:(id)arg1 didUpdateOcclusionState:(BOOL)arg2 ;
-(void)dealloc;
-(UIViewController *)topViewController;
-(void)setNeedsStatusBarAppearanceUpdate;
-(id)session;
@end

