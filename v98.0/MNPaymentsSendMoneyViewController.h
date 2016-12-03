/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtensionControllerDelegate.h>
#import <Messenger/FBPaymentsPriceListControllingDelegate.h>
#import <Messenger/FBPaymentsCheckoutOtherButtonHandlingDelegate.h>
#import <Messenger/MNPaymentsThemeViewControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutExplanationInfoViewDelegate.h>
#import <Messenger/MNPaymentsTwoActionTabViewDelegate.h>
#import <Messenger/FBPaymentsExpandableItem.h>
#import <Messenger/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>

@protocol FBPaymentsViewModelConfigurable, MNPaymentsUserPayableDataModel, FBPaymentsConnectionStatusProviding, MNSoundPluginService, FBPaymentsCheckoutHeaderViewFactory, FBPaymentsCheckoutFlowOtherButtonActionHandler, FBPaymentsCheckoutFlowOverlayViewFactory, MNPaymentsPeerToPeerPaymentsConfiguration, FBPaymentsCheckoutFlowLogger, FBPaymentsCheckoutHeaderViewModelCreator, FBPaymentsExpandableViewControllerExpandingDelegate, MNPaymentsSendMoneyViewControllerDelegate, FBPaymentsNavigationDelegate;
@class MNPaymentsPeerToPeerPaymentRecipientDataSource, NSString, UIView, FBPaymentsCheckoutExplanationInfoView, MNPaymentsPayActionFooterView, FBKeyboardObserver, FBUserSession, FBPaymentsPaymentMethodsCoordinator, MNPaymentsThemeCoordinator, FBPaymentsPeerToPeerCardFlowController, FBPaymentsPeerToPeerNavigationCoordinator, FBPaymentsPINController, FBPaymentsTouchIDController, MNPaymentsExtensibleFlowMap, FBPaymentsPeerToPeerFetchController, NSArray, FBPaymentsCheckoutViewConfiguration, FBPaymentsCheckoutExtensionManager, FBPaymentsPurchaseInfoExtensionController, MNPaymentsPeerToPeerPaymentMethodViewController, FBPaymentsCheckoutAmountViewController, MNPaymentsComposerViewController, MNPaymentsThemeViewController, UITapGestureRecognizer, UIResponder, MNPaymentsPayRequestRedesignExperimentContext, UISegmentedControl, FBPaymentsNavigationTitleView, MNPaymentsTwoActionTabView, FBPaymentsPurchaseInfoExtensionProvider, UIColor;

@interface MNPaymentsSendMoneyViewController : UIViewController <FBModalWebFlowDelegate, FBKeyboardObserverDelegate, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsNavigationDelegate, FBPaymentsUpdateListener, FBPaymentsPurchaseInfoExtensionControllerDelegate, FBPaymentsPriceListControllingDelegate, FBPaymentsCheckoutOtherButtonHandlingDelegate, MNPaymentsThemeViewControllerDelegate, FBPaymentsCheckoutExplanationInfoViewDelegate, MNPaymentsTwoActionTabViewDelegate, FBPaymentsExpandableItem, FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate> {

	MNPaymentsPeerToPeerPaymentRecipientDataSource* _paymentRecipientDataSource;
	NSString* _flowId;
	UIView*<FBPaymentsViewModelConfigurable> _headerView;
	FBPaymentsCheckoutExplanationInfoView* _explanationInfoView;
	MNPaymentsPayActionFooterView* _payActionFooterView;
	id<MNPaymentsUserPayableDataModel> _payableDataModel;
	FBKeyboardObserver* _keyboardObserver;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	id<MNSoundPluginService> _soundService;
	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	MNPaymentsThemeCoordinator* _paymentsThemeCoordinator;
	FBPaymentsPeerToPeerCardFlowController* _cardFlowController;
	FBPaymentsPeerToPeerNavigationCoordinator* _navigationCoordinator;
	FBPaymentsPINController* _paymentPinController;
	FBPaymentsTouchIDController* _touchIDController;
	MNPaymentsExtensibleFlowMap* _extensibleFlowMap;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	NSArray* _checkoutFlowConfigurations;
	FBPaymentsCheckoutViewConfiguration* _currentCheckoutFlowConfiguration;
	long long _currentSelectedConfigurationIndex;
	FBPaymentsCheckoutExtensionManager* _checkoutExtensionManager;
	BOOL _isFirstWillLayoutSubviewsAfterWillAppear;
	BOOL _isLoading;
	BOOL _hasUserPressedPayButton;
	id<FBPaymentsCheckoutHeaderViewFactory> _headerViewFactory;
	id<FBPaymentsCheckoutFlowOtherButtonActionHandler> _otherButtonActionHandler;
	unsigned long long _loadingCondition;
	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtensionManager;
	MNPaymentsPeerToPeerPaymentMethodViewController* _paymentMethodViewController;
	FBPaymentsCheckoutAmountViewController* _checkoutAmountViewController;
	MNPaymentsComposerViewController* _composerViewController;
	MNPaymentsThemeViewController* _themeViewController;
	id<FBPaymentsCheckoutFlowOverlayViewFactory> _overlayViewFactory;
	unsigned long long _appearanceState;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIResponder* _lastActiveResponder;
	id<MNPaymentsPeerToPeerPaymentsConfiguration> _checkoutConfiguration;
	id<FBPaymentsCheckoutFlowLogger> _checkoutFlowLogger;
	MNPaymentsPayRequestRedesignExperimentContext* _redesignExperimentContext;
	NSArray* _rightBarButtons;
	UISegmentedControl* _segmentedControl;
	FBPaymentsNavigationTitleView* _titleView;
	MNPaymentsTwoActionTabView* _payRequestView;
	id<FBPaymentsCheckoutHeaderViewModelCreator> _headerViewModelCreator;
	FBPaymentsPurchaseInfoExtensionProvider* _purchaseInfoExtensionProvider;
	BOOL _hasPassedEligibilityCheck;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	UIColor* _tintColor;
	id<MNPaymentsSendMoneyViewControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic) BOOL hasPassedEligibilityCheck;                                                                //@synthesize hasPassedEligibilityCheck=_hasPassedEligibilityCheck - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                           //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic,__weak) id<MNPaymentsSendMoneyViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)newNavigationController;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)_setNavigationBar;
-(void)_segmentedControlTapped;
-(void)_onCancel;
-(void)themeViewController:(id)arg1 didPreSelectThemeAtIndex:(unsigned long long)arg2 ;
-(void)_updateHeaderView;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFinishHandlingActionWithObjectFBID:(id)arg2 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 didFailHandlingActionWithObjectFBID:(id)arg2 ;
-(void)paymentsCheckoutOtherButtonActionHandler:(id)arg1 willHandleActionWithObjectFBID:(id)arg2 ;
-(id)initWithSession:(id)arg1 flowId:(id)arg2 checkoutConfiguration:(id)arg3 fetchController:(id)arg4 payableDataModel:(id)arg5 navigationCoordinator:(id)arg6 paymentMethodsCoordinator:(id)arg7 paymentsThemeCoordinator:(id)arg8 connectionStatusProvider:(id)arg9 soundService:(id)arg10 paymentPinController:(id)arg11 passcodeWorkflowController:(id)arg12 touchIDController:(id)arg13 cardFlowController:(id)arg14 checkoutFlowConfigurations:(id)arg15 extensibleFlowMap:(id)arg16 checkoutFlowLogger:(id)arg17 otherButtonActionHandler:(id)arg18 paymentRecipientDataSource:(id)arg19 ;
-(void)setHasPassedEligibilityCheck:(BOOL)arg1 ;
-(void)resetForCancelingOngoingPayment;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)_setCurrentConfiguration;
-(void)_initPurchaseInfoExtensionManager;
-(void)_initCheckoutExtensionManager;
-(void)_initPurchaseInfoViewController;
-(void)_initOrderSummaryViewControllerWithEditMode:(long long)arg1 ;
-(void)_initComposerViewController;
-(void)_initThemeViewController;
-(void)_initRightBarButtons;
-(void)_initSendMoneyView;
-(void)_onPay;
-(void)_didTapOtherActionButton;
-(void)_updateColorPolicy;
-(void)_updateTwoActionTabView;
-(void)_initKeyboardObserverIfNeeded;
-(void)_initTapGestureRecognizerIfNeeded;
-(BOOL)_shouldShowPayActionButton;
-(void)_updateRightBarButtonTitle;
-(void)_refreshActionButtonStatus;
-(void)_updateFirstResponder:(id)arg1 ;
-(void)_updateExplanationInfo;
-(void)_updateViewTintColor;
-(void)_resignCurrentFirstResponder;
-(id)_currentCollectedData;
-(void)_resetSendMoneyStatus;
-(BOOL)_isPayRequestTabEnabled;
-(BOOL)_shouldShowRightBarButton;
-(void)_setNavigationBarWithPayRequestView;
-(void)_updateNavigationTitleView;
-(void)_updateActivatedExtensions;
-(BOOL)_isComposerEnabled;
-(BOOL)_isThemeEnabled;
-(BOOL)_isKeyboardRequired;
-(BOOL)_isTapGestureRecognizerRequired;
-(void)didCaptureTap:(id)arg1 ;
-(BOOL)_isPaymentEditable;
-(void)_checkRecipientEligibilityIfNeeded;
-(void)_processPayment;
-(void)_setLoadingStatus:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)_playPayPressSound;
-(void)_dispatchPaymentRequest;
-(void)_setLoadingStatus:(BOOL)arg1 withReason:(unsigned long long)arg2 succeeded:(BOOL)arg3 ;
-(void)_updateLoadingStatusUIWithReason:(unsigned long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_updatePayLoadingUIWithSucceeded:(BOOL)arg1 ;
-(void)_setSegmentedControlEnabled:(BOOL)arg1 ;
-(void)_setPayActionButtonPayingStatusWithSucceeded:(BOOL)arg1 ;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(void)_updateUIForHeaderViewModelUpdate;
-(void)_updateCurrentConfigurationWithIndex:(unsigned long long)arg1 ;
-(void)_dispatchFinishCheckout;
-(void)_presentWebViewForURL:(id)arg1 ;
-(void)_updateUIForCurrentConfiguration;
-(id)_selectedPaymentMethodFromPurchaseInfo;
-(id)_shouldConfirmArrayFromConfigurations:(id)arg1 ;
-(id)_currentFirstResponder;
-(void)_logConfigurationSwitchEvent;
-(void)_updateComposerPlaceholderText;
-(void)_updatePurchaseInfoViewBasedOnActivatedExtension;
-(void)_animateLayout;
-(void)purchaseInfoExtensionControllerExtensionsDidFinishInitialLoading:(id)arg1 ;
-(void)purchaseInfoViewControllerDidUpdate:(id)arg1 isUserAction:(BOOL)arg2 ;
-(void)purchaseInfoViewControllerDidCancelFollowUpAdding:(id)arg1 ;
-(void)purchaseInfoViewControllerWillBeginProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerDidEndProcessing:(id)arg1 ;
-(void)priceListControllingDidUpdate:(id)arg1 ;
-(void)didTapActionButtonWithURL:(id)arg1 ;
-(void)twoActionTabView:(id)arg1 didTapActionWithIndex:(unsigned long long)arg2 ;
-(void)twoActionTabView:(id)arg1 didConfirmActionWithIndex:(unsigned long long)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(void)_handlePinError:(id)arg1 ;
-(BOOL)hasPassedEligibilityCheck;
-(void)setDelegate:(id<MNPaymentsSendMoneyViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsSendMoneyViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

