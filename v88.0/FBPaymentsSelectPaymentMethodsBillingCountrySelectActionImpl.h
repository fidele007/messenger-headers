/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhoneCountryCodesPickerViewControllerDelegate.h>
#import <Messenger/FBPaymentsSelectPaymentMethodsBillingCountrySelectAction.h>

@protocol FBPaymentsSelectPaymentMethodsBillingCountrySelectActionDelegate, FBPaymentsNavigationDelegate;
@class NSString;

@interface FBPaymentsSelectPaymentMethodsBillingCountrySelectActionImpl : NSObject <FBPhoneCountryCodesPickerViewControllerDelegate, FBPaymentsSelectPaymentMethodsBillingCountrySelectAction> {

	id<FBPaymentsSelectPaymentMethodsBillingCountrySelectActionDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsSelectPaymentMethodsBillingCountrySelectActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                                        //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)handleBillingCountrySelectionWithCountryCode:(id)arg1 ;
-(void)countryPicker:(id)arg1 didSelectCountryWithCountryCode:(id)arg2 ;
-(void)dismissCountryPicker:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsSelectPaymentMethodsBillingCountrySelectActionDelegate>)arg1 ;
-(id<FBPaymentsSelectPaymentMethodsBillingCountrySelectActionDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

