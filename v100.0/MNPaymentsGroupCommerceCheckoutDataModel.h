/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBPaymentsPayableDataModel.h>
#import <Messenger/MNPaymentsUserPayableDataModel.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBPaymentsCurrencyQuantity, MNPaymentsPeerToPeerCheckoutDataModel, FBMemPeerToPeerPlatformContext;

@interface MNPaymentsGroupCommerceCheckoutDataModel : FBValueObject <FBPaymentsPayableDataModel, MNPaymentsUserPayableDataModel, NSCopying> {

	MNPaymentsPeerToPeerCheckoutDataModel* _peerToPeerCheckoutDataModel;
	FBMemPeerToPeerPlatformContext* _platformContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * styleIdentifier; 
@property (nonatomic,readonly) unsigned long long paymentPurpose; 
@property (nonatomic,readonly) FBPaymentsCurrencyQuantity * payableAmount; 
@property (nonatomic,copy,readonly) NSString * payableThemeId; 
@property (nonatomic,copy,readonly) NSString * checkoutInitiator; 
@property (nonatomic,copy,readonly) NSString * paymentRecipientFBID; 
@property (nonatomic,copy,readonly) NSString * entryPoint; 
@property (nonatomic,copy,readonly) MNPaymentsPeerToPeerCheckoutDataModel * peerToPeerCheckoutDataModel;              //@synthesize peerToPeerCheckoutDataModel=_peerToPeerCheckoutDataModel - In the implementation block
@property (nonatomic,copy,readonly) FBMemPeerToPeerPlatformContext * platformContext;                                 //@synthesize platformContext=_platformContext - In the implementation block
-(NSString *)styleIdentifier;
-(NSString *)paymentRecipientFBID;
-(unsigned long long)paymentPurpose;
-(FBPaymentsCurrencyQuantity *)payableAmount;
-(NSString *)payableThemeId;
-(NSString *)checkoutInitiator;
-(MNPaymentsPeerToPeerCheckoutDataModel *)peerToPeerCheckoutDataModel;
-(id)initWithPeerToPeerCheckoutDataModel:(id)arg1 platformContext:(id)arg2 ;
-(NSString *)entryPoint;
-(FBMemPeerToPeerPlatformContext *)platformContext;
@end

