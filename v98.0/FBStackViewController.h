/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBStackViewControllerProtocol.h>
#import <Messenger/FBInAppNotificationEligibilityProtocol.h>

@class NSArray, UIViewController, NSMutableOrderedSet, FBStackView, NSString;

@interface FBStackViewController : FBContainerViewController <FBStackViewControllerProtocol, FBInAppNotificationEligibilityProtocol> {

	NSMutableOrderedSet* _viewControllers;
	FBStackView* _stackView;

}

@property (nonatomic,retain) FBStackView * stackView;                                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) unsigned long long stackCount; 
@property (nonatomic,readonly) UIViewController * bottomStackViewController; 
@property (nonatomic,readonly) UIViewController * topStackViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
-(id)analyticsModule;
-(id)analyticsPresentedViewController;
-(void)addViewControllerOnTop:(id)arg1 ;
-(unsigned long long)stackCount;
-(UIViewController *)topStackViewController;
-(BOOL)containsViewController:(id)arg1 ;
-(void)removeViewController:(id)arg1 ;
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomStackViewController;
-(UIViewController *)bottomModalViewController;
-(NSArray *)modalPresentationItems;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(void)addModalItem:(id)arg1 ;
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(BOOL)arg2 ;
-(void)removeModalItem:(id)arg1 ;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;
-(id)viewControllerAtIndex:(unsigned long long)arg1 ;
-(void)removeAllViewControllers;
-(NSString *)description;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)transitioningDelegate;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(BOOL)accessibilityPerformEscape;
-(FBStackView *)stackView;
-(id)_topViewController;
-(void)setStackView:(FBStackView *)arg1 ;
@end

