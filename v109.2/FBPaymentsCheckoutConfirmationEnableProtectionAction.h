/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsUpdateListener.h>
#import <Messenger/FBPaymentsCheckoutConfirmationAction.h>

@protocol FBPaymentsCheckoutConfirmationActionDelegate, FBPaymentsNavigationDelegate;
@class FBPaymentsPINController, FBPaymentsTouchIDController, FBPaymentsPasscodeWorkflowController, NSString;

@interface FBPaymentsCheckoutConfirmationEnableProtectionAction : NSObject <FBPaymentsUpdateListener, FBPaymentsCheckoutConfirmationAction> {

	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _touchIDController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	NSString* _lastDisplayedTitle;
	id<FBPaymentsCheckoutConfirmationActionDelegate> _actionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                          //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
-(void)didUpdateWithAnnouncerIdentifier:(id)arg1 ;
-(BOOL)isDisabledForCheckoutResponse:(id)arg1 ;
-(void)_handlePasscodeCreationResultWithError:(id)arg1 ;
-(void)_handleActivateTouchIDWithCredentialToken:(id)arg1 ;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2 ;
-(id)initWithPaymentsPINController:(id)arg1 touchIDController:(id)arg2 ;
-(id)actionTitle;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCheckoutConfirmationActionDelegate>)arg1 ;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

