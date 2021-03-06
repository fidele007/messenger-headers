/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectAction.h>

@protocol FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate, FBPaymentsNavigationDelegate;
@class FBPaymentsManualTransferOption, UIImage, NSString, FBUserSession, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsSelectPaymentMethodsManualTransferOptionSelectAction : NSObject <FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectAction> {

	FBPaymentsManualTransferOption* _paymentOption;
	UIImage* _receiptImage;
	NSString* _receiptImageId;
	FBUserSession* _session;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                             //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)handleSelectActionForPaymentMethodOption:(id)arg1 withBillingCountryCode:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate>)arg1 ;
-(id<FBPaymentsSelectPaymentMethodsPaymentMethodOptionSelectActionDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

