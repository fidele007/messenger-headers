/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsExpandableViewControllerExpandingDelegate.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtensionControllerDelegate.h>
#import <Messenger/FBPaymentsOrderSummaryControllingDelegate.h>
#import <Messenger/FBPaymentsCheckoutExplanationInfoViewDelegate.h>
#import <Messenger/FBPaymentsCheckoutConfirmationViewControllerDelegate.h>
#import <Messenger/FBPaymentsCheckoutActionButtonViewDelegate.h>
#import <Messenger/FBPaymentsCheckoutOrderStatusControllingDelegate.h>
#import <Messenger/FBPaymentsCheckoutPaymentProcessControllingDelegate.h>
#import <Messenger/FBPaymentsCheckoutLoggingServiceDataSource.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>
#import <Messenger/FBPaymentsExpandableItem.h>

@protocol FBPaymentsViewModelConfigurable, FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutHeaderViewModelCreator, FBPaymentsCheckoutHeaderViewFactory, FBPaymentsCheckoutConfirmationConfigurationProviding, FBPaymentsCheckoutOrderStatusControlling, FBPaymentsCheckoutPaymentProcessLoadingStyleProviding, FBPaymentsConnectionStatusProviding, FBPaymentsCheckoutPayActionContentProviding, FBPaymentsCheckoutPaymentProcessControlling, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsCheckoutViewControllerDelegate, FBPaymentsNavigationDelegate;
@class NSString, UIView, FBPaymentsCheckoutActionButtonView, FBPaymentsCheckoutExplanationInfoView, FBPaymentsCheckoutPaymentInfo, NSArray, FBUserSession, FBPaymentsPurchaseInfoExtensionProvider, FBPaymentsPurchaseInfoExtensionController, FBPaymentsPurchaseInfoTableViewController, FBPaymentsOrderSummaryViewController, FBPaymentsPINController, FBPaymentsTouchIDController, FBPaymentsEventListenerAnnouncer, FBPaymentsCheckoutLoggingService;

@interface FBPaymentsCheckoutViewController : UIViewController <FBModalWebFlowDelegate, FBPaymentsExpandableViewControllerExpandingDelegate, FBPaymentsNavigationDelegate, FBPaymentsEventListener, FBPaymentsUpdateListener, FBPaymentsPurchaseInfoExtensionControllerDelegate, FBPaymentsOrderSummaryControllingDelegate, FBPaymentsCheckoutExplanationInfoViewDelegate, FBPaymentsCheckoutConfirmationViewControllerDelegate, FBPaymentsCheckoutActionButtonViewDelegate, FBPaymentsCheckoutOrderStatusControllingDelegate, FBPaymentsCheckoutPaymentProcessControllingDelegate, FBPaymentsCheckoutLoggingServiceDataSource, FBPaymentsEventAnnouncing, FBPaymentsExpandableItem> {

	NSString* _flowId;
	NSString* _viewContextID;
	UIView*<FBPaymentsViewModelConfigurable> _headerView;
	FBPaymentsCheckoutActionButtonView* _actionButtonView;
	FBPaymentsCheckoutExplanationInfoView* _explanationInfoView;
	NSString* _explanationInformation;
	NSString* _checkoutViewTitle;
	FBPaymentsCheckoutPaymentInfo* _paymentInfo;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsCheckoutHeaderViewModelCreator> _headerViewModelCreator;
	id<FBPaymentsCheckoutHeaderViewFactory> _headerViewFactory;
	id<FBPaymentsCheckoutConfirmationConfigurationProviding> _confirmationConfigurationProvider;
	id<FBPaymentsCheckoutOrderStatusControlling> _orderStatusController;
	id<FBPaymentsCheckoutPaymentProcessLoadingStyleProviding> _paymentProcessLoadingStyleProvider;
	long long _checkoutLogoStyle;
	NSArray* _basePriceList;
	id<FBPaymentsConnectionStatusProviding> _connectionStatusProvider;
	FBUserSession* _session;
	BOOL _hasUserPressedPayButton;
	unsigned long long _loadingCondition;
	FBPaymentsPurchaseInfoExtensionProvider* _purchaseInfoExtensionProvider;
	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtensionManager;
	FBPaymentsPurchaseInfoTableViewController* _purchaseInfoViewController;
	FBPaymentsOrderSummaryViewController* _orderSummaryViewController;
	FBPaymentsOrderSummaryViewController* _itemizedSubtotalViewController;
	id<FBPaymentsCheckoutPayActionContentProviding> _payActionTitleProvider;
	id<FBPaymentsCheckoutPaymentProcessControlling> _paymentProcessController;
	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBPaymentsCheckoutLoggingService* _loggingService;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<FBPaymentsCheckoutViewControllerDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                    //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsConnectionStatusProviding> connectionStatusProvider;                              //@synthesize connectionStatusProvider=_connectionStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id<FBPaymentsConnectionStatusProviding>)connectionStatusProvider;
-(id)initWithSession:(id)arg1 flowId:(id)arg2 checkoutConfiguration:(id)arg3 paymentsPINController:(id)arg4 touchIDController:(id)arg5 ;
-(id)newNavigationController;
-(void)_onCancel;
-(void)setConnectionStatusProvider:(id<FBPaymentsConnectionStatusProviding>)arg1 ;
-(void)_updateHeaderView;
-(void)_initPurchaseInfoExtensionManager;
-(void)_initPurchaseInfoViewController;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)_refreshActionButtonStatus;
-(void)_setNavigationBar;
-(void)_updateExplanationInfo;
-(id)_currentCollectedData;
-(void)_resetSendMoneyStatus;
-(void)_processPayment;
-(void)_setLoadingStatus:(BOOL)arg1 withReason:(unsigned long long)arg2 ;
-(void)_dispatchPaymentRequest;
-(void)_setLoadingStatus:(BOOL)arg1 withReason:(unsigned long long)arg2 succeeded:(BOOL)arg3 ;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(void)expandableItemDidUpdatePreferredHeight:(id)arg1 ;
-(void)_presentWebViewForURL:(id)arg1 ;
-(void)_updatePurchaseInfoViewBasedOnActivatedExtension;
-(void)purchaseInfoExtensionControllerExtensionsDidFinishInitialLoading:(id)arg1 ;
-(void)purchaseInfoViewControllerDidUpdate:(id)arg1 isUserAction:(BOOL)arg2 ;
-(void)purchaseInfoViewControllerDidCancelFollowUpAdding:(id)arg1 ;
-(void)purchaseInfoViewControllerWillBeginProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerDidEndProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerDidTapActionButton:(id)arg1 ;
-(void)didTapActionButtonWithURL:(id)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)orderSummaryControllingDidUpdate:(id)arg1 ;
-(id)checkoutFlowCollectedDataForCheckoutLoggingService:(id)arg1 ;
-(id)checkoutFlowCollectedDataForOrderStatusController:(id)arg1 ;
-(void)orderStatusController:(id)arg1 didEncounterError:(id)arg2 isFatal:(BOOL)arg3 ;
-(void)checkoutPaymentProcessController:(id)arg1 didFailWithError:(id)arg2 wasCancelled:(BOOL)arg3 ;
-(void)checkoutPaymentProcessControllerDidFinishPayment:(id)arg1 ;
-(void)confirmationViewControllerDidFinish:(id)arg1 ;
-(void)_initOrderSummaryViewController;
-(void)_initComponentsWithCheckoutConfiguration:(id)arg1 ;
-(void)_initLoggingService;
-(void)_initCheckoutView;
-(void)_onPay:(id)arg1 ;
-(void)_applyContentConfiguration:(id)arg1 ;
-(void)_updateOrderSummary;
-(void)_updateLoadingWithNewLoadingCondition:(unsigned long long)arg1 succeeded:(BOOL)arg2 ;
-(void)_updateOrderStatus;
-(void)checkoutActionButtonView:(id)arg1 didTapLinkWithURL:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsCheckoutViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPaymentsCheckoutViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

