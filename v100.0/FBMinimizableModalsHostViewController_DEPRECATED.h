/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMinimizableModalsHostViewDelegate_DEPRECATED.h>
#import <Messenger/FBMinimizableModalViewControllerDelegate_DEPRECATED.h>

@class UIViewController, NSMapTable, FBMinimizableModalsHostView_DEPRECATED, NSString;

@interface FBMinimizableModalsHostViewController_DEPRECATED : UIViewController <FBMinimizableModalsHostViewDelegate_DEPRECATED, FBMinimizableModalViewControllerDelegate_DEPRECATED> {

	UIViewController* _baseViewController;
	NSMapTable* _modalViewControllers;
	FBMinimizableModalsHostView_DEPRECATED* _view;
	unsigned long long _appearanceState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissViewController:(id)arg1 ;
-(id)initWithBaseViewController:(id)arg1 ;
-(void)minimizeAllPresentedViewControllers;
-(void)minimizeAllPresentedViewControllersAndShowSwitcherView;
-(void)minimizableViewController:(id)arg1 setTitle:(id)arg2 ;
-(id)_viewControllerForStatusBarProperties;
-(id)_modalViewControllerForModalView:(id)arg1 ;
-(void)hostView:(id)arg1 modalViewWillAppear:(id)arg2 ;
-(void)hostView:(id)arg1 modalViewDidAppear:(id)arg2 ;
-(void)hostView:(id)arg1 modalViewWillDisappear:(id)arg2 ;
-(void)hostView:(id)arg1 modalViewDidDisappear:(id)arg2 ;
-(void)hostView:(id)arg1 modalViewMustDismiss:(id)arg2 ;
-(void)baseViewWillAppearInHostView:(id)arg1 ;
-(void)baseViewDidAppearInHostView:(id)arg1 ;
-(void)baseViewWillDisappearInHostView:(id)arg1 ;
-(void)baseViewDidDisappearInHostView:(id)arg1 ;
-(void)loadView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)presentViewController:(id)arg1 ;
@end
