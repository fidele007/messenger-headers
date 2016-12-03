/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPaymentsThemeCardViewDelegate.h>
#import <Messenger/MNPaymentsThemeCoordinatorListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBUserSession, MNPaymentsThemeCardView, MNPaymentsThemeCardDataModel, FBPaymentsPeerToPeerNavigationCoordinator, MNPaymentsThemeCoordinator, MNVerticalSwipeDismissalModalInteractionController, UITapGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface MNPaymentsThemeCardViewController : UIViewController <MNPaymentsThemeCardViewDelegate, MNPaymentsThemeCoordinatorListener, UIGestureRecognizerDelegate> {

	FBUserSession* _session;
	MNPaymentsThemeCardView* _cardView;
	MNPaymentsThemeCardDataModel* _themeCardDataModel;
	FBPaymentsPeerToPeerNavigationCoordinator* _peerToPeerNavigationCoordinator;
	MNPaymentsThemeCoordinator* _themeCoordinator;
	MNVerticalSwipeDismissalModalInteractionController* _interactionController;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	BOOL _shouldCancelPan;
	BOOL _isInteracting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 themeCardDataModel:(id)arg2 peerToPeerNavigationCoordinator:(id)arg3 themeCoordinator:(id)arg4 ;
-(void)didUpdateTheme:(id)arg1 ;
-(void)themeCardView:(id)arg1 didBottomActionButtonTapped:(id)arg2 ;
-(void)didTapOnView:(id)arg1 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(void)_prepareThemeWithThemeCardDataModel:(id)arg1 ;
-(void)_updateWithTheme:(id)arg1 ;
-(void)setIsInteracting:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

