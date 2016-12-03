/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCardViewControllerDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsPurchaseInfoExtension.h>

@protocol FBPaymentsPurchaseInfoExtensionDelegate, FBPaymentsNavigationDelegate, FBPaymentsPurchaseInfoSecurityCodeProviding, FBPaymentsPaymentMethodsDataMutator;
@class FBUserSession, FBPaymentsPurchaseInfoPayWithExtension, NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsPurchaseInfoSecurityCodeVerificationExtension : NSObject <FBPaymentsCardViewControllerDelegate, FBPaymentsEventListener, FBPaymentsPurchaseInfoExtension> {

	FBUserSession* _session;
	FBPaymentsPurchaseInfoPayWithExtension* _payWithExtn;
	NSString* _productItemType;
	NSString* _securityCode;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsPurchaseInfoExtensionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	long long _presentationStrategy;
	id<FBPaymentsPurchaseInfoSecurityCodeProviding> _securityCodeProvider;
	id<FBPaymentsPaymentMethodsDataMutator> _paymentMethodDataMutator;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoSecurityCodeProviding> securityCodeProvider;              //@synthesize securityCodeProvider=_securityCodeProvider - In the implementation block
@property (nonatomic,retain) id<FBPaymentsPaymentMethodsDataMutator> paymentMethodDataMutator;                         //@synthesize paymentMethodDataMutator=_paymentMethodDataMutator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsPurchaseInfoExtensionDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                               //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) long long presentationStrategy;                                                           //@synthesize presentationStrategy=_presentationStrategy - In the implementation block
+(id)announcerIdentifier;
-(void)removeEventListener:(id)arg1 ;
-(void)addEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(long long)presentationStrategy;
-(void)setPresentationStrategy:(long long)arg1 ;
-(void)_loadPaymentMethodsCoordinatorIfNeeded;
-(void)setSecurityCodeProvider:(id<FBPaymentsPurchaseInfoSecurityCodeProviding>)arg1 ;
-(void)setPaymentMethodDataMutator:(id<FBPaymentsPaymentMethodsDataMutator>)arg1 ;
-(void)paymentsCardViewController:(id)arg1 didFinishCardAction:(id)arg2 withNewCardModel:(id)arg3 ;
-(void)paymentsCardViewControllerDidTapCancel:(id)arg1 ;
-(void)resetForCancelingOngoingPayment;
-(id)detailedText;
-(void)handleTapAction;
-(BOOL)hasMadeCriticalChanges;
-(void)handleFollowUpAction;
-(id)fieldCollectedData;
-(id)fieldTitle;
-(BOOL)needFollowUp;
-(id)initWithSession:(id)arg1 payWithExtn:(id)arg2 productItemType:(id)arg3 ;
-(id)_cardViewControllerForVerifyCSCCard:(id)arg1 ;
-(void)_collectData:(id)arg1 collectedData:(id)arg2 cardViewController:(id)arg3 ;
-(void)paymentsCardViewControllerDidTapDeclinePayment:(id)arg1 ;
-(id<FBPaymentsPurchaseInfoSecurityCodeProviding>)securityCodeProvider;
-(id<FBPaymentsPaymentMethodsDataMutator>)paymentMethodDataMutator;
-(id)extensionIdentifier;
-(void)setDelegate:(id<FBPaymentsPurchaseInfoExtensionDelegate>)arg1 ;
-(id<FBPaymentsPurchaseInfoExtensionDelegate>)delegate;
-(id)text;
-(id)image;
-(long long)status;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(BOOL)isHiddenExtension;
-(void)setUp;
@end

