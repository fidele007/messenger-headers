/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPaymentsNavigationDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBPaymentsPayPalBillingAgreementViewControllerDelegate.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>
#import <Messenger/FBPaymentsTableViewSection.h>

@protocol FBPaymentsNavigationDelegate, FBPaymentsTableViewSectionDelegate, FBPaymentsSelectPaymentMethodsListSectionActionDelegate, FBPaymentsPaymentMethod;
@class FBUserSession, FBPaymentsPaymentMethodsCoordinator, FBPaymentsSelectPaymentMethodsActionProvider, FBPaymentsEventListenerAnnouncer, NSArray, NSDictionary, NSString;

@interface FBPaymentsSelectPaymentMethodsListSection : NSObject <FBPaymentsNavigationDelegate, FBPaymentsEventListener, FBPaymentsUpdateListener, FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate, FBModalWebFlowDelegate, FBPaymentsPayPalBillingAgreementViewControllerDelegate, FBPaymentsEventAnnouncing, FBPaymentsTableViewSection> {

	FBUserSession* _session;
	FBPaymentsPaymentMethodsCoordinator* _paymentMethodsCoordinator;
	FBPaymentsSelectPaymentMethodsActionProvider* _actionProvider;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	NSArray* _existingPaymentMethods;
	NSArray* _eligiblePaymentMethodOptions;
	long long _existingPaymentMethodsDataLoadingStatus;
	long long _eligiblePaymentMethodOptionsDataLoadingStatus;
	NSDictionary* _defaultViewActions;
	NSDictionary* _defaultAddActions;
	BOOL _shouldShowSectionHeader;
	BOOL _shouldShowSectionFooter;
	BOOL _shouldEnableSelection;
	BOOL _shouldEnableDetailTextForPaymentMethod;
	BOOL _shouldShowPaymentMethodOptionIcons;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsTableViewSectionDelegate> _sectionDelegate;
	NSString* _productItemType;
	id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate> _actionDelegate;
	unsigned long long _contentMask;
	NSArray* _acceptedPaymentMethodOptions;
	long long _paymentMethodCellStyle;
	id<FBPaymentsPaymentMethod> _selectedPaymentMethod;
	NSDictionary* _paymentMethodCellControllers;
	NSDictionary* _paymentMethodOptionCellControllers;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSString * productItemType;                                                                       //@synthesize productItemType=_productItemType - In the implementation block
@property (nonatomic,readonly) FBPaymentsSelectPaymentMethodsActionProvider * actionProvider;                                //@synthesize actionProvider=_actionProvider - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long contentMask;                                                                 //@synthesize contentMask=_contentMask - In the implementation block
@property (nonatomic,copy) NSArray * acceptedPaymentMethodOptions;                                                           //@synthesize acceptedPaymentMethodOptions=_acceptedPaymentMethodOptions - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSectionHeader;                                                                   //@synthesize shouldShowSectionHeader=_shouldShowSectionHeader - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSectionFooter;                                                                   //@synthesize shouldShowSectionFooter=_shouldShowSectionFooter - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableSelection;                                                                     //@synthesize shouldEnableSelection=_shouldEnableSelection - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableDetailTextForPaymentMethod;                                                    //@synthesize shouldEnableDetailTextForPaymentMethod=_shouldEnableDetailTextForPaymentMethod - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPaymentMethodOptionIcons;                                                        //@synthesize shouldShowPaymentMethodOptionIcons=_shouldShowPaymentMethodOptionIcons - In the implementation block
@property (assign,nonatomic) long long paymentMethodCellStyle;                                                               //@synthesize paymentMethodCellStyle=_paymentMethodCellStyle - In the implementation block
@property (nonatomic,copy) id<FBPaymentsPaymentMethod> selectedPaymentMethod;                                                //@synthesize selectedPaymentMethod=_selectedPaymentMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * paymentMethodCellControllers;                                                      //@synthesize paymentMethodCellControllers=_paymentMethodCellControllers - In the implementation block
@property (nonatomic,copy) NSDictionary * paymentMethodOptionCellControllers;                                                //@synthesize paymentMethodOptionCellControllers=_paymentMethodOptionCellControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                                                        //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsTableViewSectionDelegate> sectionDelegate;                                  //@synthesize sectionDelegate=_sectionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                     //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(BOOL)shouldHighlightCellForRowAtIndex:(unsigned long long)arg1 ;
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(id)newNavigationController;
-(void)paymentMethodOptionSelectAction:(id)arg1 didAddPaymentMethod:(id)arg2 ;
-(void)handleSelectActionForRowAtIndex:(unsigned long long)arg1 ;
-(id)sectionHeaderViewModel;
-(id)cellForSectionRowAtIndex:(unsigned long long)arg1 ;
-(double)heightForSectionRowAtIndex:(unsigned long long)arg1 ;
-(id)sectionFooterView;
-(double)heightForSectionFooterViewWithWidth:(double)arg1 ;
-(NSString *)productItemType;
-(void)setShouldEnableSelection:(BOOL)arg1 ;
-(void)_presentViewControllerInNavigationController:(id)arg1 ;
-(void)_dismissViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSelectedPaymentMethod:(id<FBPaymentsPaymentMethod>)arg1 ;
-(void)payPalBillingAgreementViewControllerDidTapCancel:(id)arg1 ;
-(void)payPalBillingAgreementViewController:(id)arg1 didConvertBillingAgreementOfPayPalAccount:(id)arg2 ;
-(void)_didTapActionButtonWithURL:(id)arg1 ;
-(void)_syncExistingPaymentMethodsDataLoadingStatus;
-(void)_syncPaymentMethodOptionsProviderDataLoadingStatus;
-(void)_reloadExistingPaymentMethods;
-(void)_reloadEligiblePaymentMethodOptions;
-(BOOL)_isLoadingData;
-(id)_cellIdentifierForRowIndex:(unsigned long long)arg1 ;
-(id)_paymentMethodCellViewModelForRowIndex:(unsigned long long)arg1 ;
-(id)_paymentMethodOptionCellViewModelForRowIndex:(unsigned long long)arg1 ;
-(id)_paymentMethodForRowIndex:(unsigned long long)arg1 ;
-(void)_updateSelectedPaymentMethod:(id)arg1 ;
-(id)_paymentMethodOptionForRowIndex:(unsigned long long)arg1 ;
-(NSArray *)acceptedPaymentMethodOptions;
-(id)initWithSession:(id)arg1 paymentMethodsCoordinator:(id)arg2 ;
-(void)useDefaultAddPaymentMethodActions:(BOOL)arg1 withPresentingStyle:(long long)arg2 shouldReturnToListIfSucceeded:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)useDefaultViewPaymentMethodActions:(BOOL)arg1 ;
-(void)setContentMask:(unsigned long long)arg1 ;
-(void)setAcceptedPaymentMethodOptions:(NSArray *)arg1 ;
-(void)setPaymentMethodCellControllers:(NSDictionary *)arg1 ;
-(void)setPaymentMethodOptionCellControllers:(NSDictionary *)arg1 ;
-(void)setProductItemType:(NSString *)arg1 ;
-(FBPaymentsSelectPaymentMethodsActionProvider *)actionProvider;
-(unsigned long long)contentMask;
-(BOOL)shouldShowSectionHeader;
-(void)setShouldShowSectionHeader:(BOOL)arg1 ;
-(BOOL)shouldShowSectionFooter;
-(void)setShouldShowSectionFooter:(BOOL)arg1 ;
-(BOOL)shouldEnableSelection;
-(BOOL)shouldEnableDetailTextForPaymentMethod;
-(void)setShouldEnableDetailTextForPaymentMethod:(BOOL)arg1 ;
-(BOOL)shouldShowPaymentMethodOptionIcons;
-(void)setShouldShowPaymentMethodOptionIcons:(BOOL)arg1 ;
-(long long)paymentMethodCellStyle;
-(void)setPaymentMethodCellStyle:(long long)arg1 ;
-(id<FBPaymentsPaymentMethod>)selectedPaymentMethod;
-(NSDictionary *)paymentMethodCellControllers;
-(NSDictionary *)paymentMethodOptionCellControllers;
-(void)dealloc;
-(UIEdgeInsets)edgeInsets;
-(unsigned long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate>)arg1 ;
-(id<FBPaymentsSelectPaymentMethodsListSectionActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)setSectionDelegate:(id<FBPaymentsTableViewSectionDelegate>)arg1 ;
-(id<FBPaymentsTableViewSectionDelegate>)sectionDelegate;
-(id)viewControllerForPresenting;
@end

