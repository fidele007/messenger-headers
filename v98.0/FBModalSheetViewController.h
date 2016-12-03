/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBModalSheetViewControllerDelegate;
@class UIViewController, UIColor, CALayer, UITapGestureRecognizer, NSString;

@interface FBModalSheetViewController : UIViewController <UIGestureRecognizerDelegate> {

	UIViewController* _contentViewController;
	id<FBModalSheetViewControllerDelegate> _delegate;
	double _sheetHeightInsetFromTop;
	UIColor* _backgroundColorForRubberbanding;
	CALayer* _backgroundLayerForRubberBanding;
	UITapGestureRecognizer* _dismissalTapGestureRecognizer;

}

@property (nonatomic,readonly) UIViewController * contentViewController;                          //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBModalSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double sheetHeightInsetFromTop;                                      //@synthesize sheetHeightInsetFromTop=_sheetHeightInsetFromTop - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColorForRubberbanding;                             //@synthesize backgroundColorForRubberbanding=_backgroundColorForRubberbanding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsPresentedViewController;
-(BOOL)fb_shouldBeginDismissModalViewControllerGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)fb_willPresentModalViewController:(id)arg1 ;
-(void)fb_willDismissModalViewController:(id)arg1 ;
-(void)fb_didBeginDismissGestureInModalViewController:(id)arg1 ;
-(void)_logAnalyticsOnTapDismissal;
-(id)outermostScrollView;
-(void)fb_didDismissModalViewController:(id)arg1 ;
-(BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(long long)arg1 ;
-(id)fb_dismissConfirmationHandler;
-(void)_updateBackgroundLayerForRubberBanding;
-(void)setSheetHeightInsetFromTop:(double)arg1 ;
-(void)setBackgroundColorForRubberbanding:(UIColor *)arg1 ;
-(double)sheetHeightInsetFromTop;
-(UIColor *)backgroundColorForRubberbanding;
-(void)setDelegate:(id<FBModalSheetViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBModalSheetViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(UIViewController *)contentViewController;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
@end

