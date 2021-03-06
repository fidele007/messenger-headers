/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalPresentationStackViewController.h>
#import <Messenger/MNContainerViewController.h>
#import <Messenger/FBToastPresenterProviding.h>

@class MNAppThemeConfiguration, UIViewController, NSString;

@interface MNModalHostViewController : FBModalPresentationStackViewController <MNContainerViewController, FBToastPresenterProviding> {

	MNAppThemeConfiguration* _appThemeConfiguration;
	BOOL _forcePrefersStatusBarHidden;
	UIViewController* _baseViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController * baseViewController;              //@synthesize baseViewController=_baseViewController - In the implementation block
@property (assign,nonatomic) BOOL forcePrefersStatusBarHidden;                     //@synthesize forcePrefersStatusBarHidden=_forcePrefersStatusBarHidden - In the implementation block
-(id)analyticsModule;
-(id)globalToastPresenter;
-(id)initWithBaseViewController:(id)arg1 appThemeConfiguration:(id)arg2 ;
-(id)analyticsPresentedViewController;
-(id)mn_modalPresentationStackManager;
-(void)dismissAllFullScreenModalPresentationItems;
-(UIViewController *)baseViewController;
-(id)mn_visibleContentViewControllers;
-(id)addModalPresentationLayerForItem:(id)arg1 ;
-(void)removeModalPresentationLayerForItem:(id)arg1 ;
-(void)setForcePrefersStatusBarHidden:(BOOL)arg1 ;
-(id)_topPresentedFullscreenViewController;
-(BOOL)_occludesScreen:(id)arg1 ;
-(void)_viewController:(id)arg1 didAddFirstModalPresentationLayerForItem:(id)arg2 ;
-(void)_viewController:(id)arg1 didRemoveLastModalPresentationLayerForItem:(id)arg2 ;
-(id)analyticsContentDelegate;
-(BOOL)forcePrefersStatusBarHidden;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)preferredFocusedView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end

