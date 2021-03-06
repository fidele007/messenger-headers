/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsCardViewControllerDelegate.h>
#import <Messenger/FBPaymentsSelectPaymentMethodsExistingPaymentMethodSelectAction.h>

@protocol FBPaymentsPaymentMethodsDataMutator, FBPaymentsNavigationDelegate;
@class FBUserSession, NSString;

@interface FBPaymentsSelectPaymentMethodsViewCardAction : NSObject <FBPaymentsCardViewControllerDelegate, FBPaymentsSelectPaymentMethodsExistingPaymentMethodSelectAction> {

	FBUserSession* _session;
	id<FBPaymentsPaymentMethodsDataMutator> _cardMutator;
	NSString* _productItemType;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)paymentsCardViewController:(id)arg1 didFinishCardAction:(id)arg2 withNewCardModel:(id)arg3 ;
-(void)paymentsCardViewControllerDidTapCancel:(id)arg1 ;
-(id)initWithSession:(id)arg1 cardMutator:(id)arg2 productItemType:(id)arg3 ;
-(void)_exitCardViewController;
-(void)handleSelectActionForExistingPaymentMethod:(id)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

