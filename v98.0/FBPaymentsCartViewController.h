/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsCheckoutCartItemCollectionViewControllerDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsCartSearchDataRetrieving, FBPaymentsCheckoutConfigurationProviding, FBPaymentsCartInfoProviding, FBPaymentsNavigationDelegate, FBPaymentsCartViewControllerDelegate, FBPaymentsLoggingService;
@class FBUserSession, FBPaymentsCartInfo, NSArray, UISearchController, FBPaymentsCheckoutCartItemCollectionViewController, FBPaymentsPriceListViewController, FBPaymentsCartView, FBPaymentsCheckoutActionButtonView, NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsCartViewController : UIViewController <FBPaymentsNavigationDelegate, FBPaymentsCheckoutCartItemCollectionViewControllerDelegate, FBModalWebFlowDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	FBPaymentsCartInfo* _cartInfo;
	NSArray* _purchaseInfoDescriptors;
	NSArray* _priceList;
	UISearchController* _searchController;
	FBPaymentsCheckoutCartItemCollectionViewController* _cartItemCollectionViewController;
	FBPaymentsPriceListViewController* _invoiceSummaryViewController;
	FBPaymentsCartView* _cartView;
	FBPaymentsCheckoutActionButtonView* _actionButtonView;
	id<FBPaymentsCartSearchDataRetrieving> _searchDataRetriever;
	id<FBPaymentsCheckoutConfigurationProviding> _checkoutConfigurationProvider;
	id<FBPaymentsCartInfoProviding> _cartInfoProvider;
	NSString* _cartTitle;
	NSString* _actionButtonTitle;
	NSString* _searchBarPlaceholderText;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsCartViewControllerDelegate> _delegate;
	id<FBPaymentsLoggingService> _loggingService;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCartViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsLoggingService> loggingService;                             //@synthesize loggingService=_loggingService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(id)newNavigationController;
-(void)_onCancel;
-(void)_applyCartConfiguartion:(id)arg1 ;
-(void)_loadCartInfo;
-(void)_configureActionButtonView;
-(void)_updateInvoiceSummary;
-(void)_updateActionButtonTitle;
-(void)_updateActionButtonStatus;
-(void)_handleCartInfoLoadError:(id)arg1 ;
-(void)_handleFallbackURL:(id)arg1 ;
-(void)_updateWithCartInfo:(id)arg1 purchaseInfoDescriptors:(id)arg2 priceList:(id)arg3 ;
-(void)_applyCartInfo;
-(void)_onActionButton;
-(void)setLoggingService:(id<FBPaymentsLoggingService>)arg1 ;
-(void)cartItemCollectionViewControllerDidUpdate:(id)arg1 ;
-(id)initWithSession:(id)arg1 cartConfiguration:(id)arg2 ;
-(id<FBPaymentsLoggingService>)loggingService;
-(void)setDelegate:(id<FBPaymentsCartViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCartViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)_updateNavigationBar;
-(void)_setLoadingStatus:(BOOL)arg1 ;
-(void)_configureNavigationBar;
-(id)viewControllerForPresenting;
@end
