/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPaymentMethodsDataControlling <FBPaymentsDataLoadingControlling>
@required
-(void)registerParser:(id)arg1 forPaymentMethodType:(id)arg2;
-(id)billingCountry;
-(id)existingPaymentMethods;
-(id)supportedPaymentMethodsOptions;
-(void)loadWithPaymentType:(id)arg1 receiverID:(id)arg2 selectedCountry:(id)arg3 extraData:(id)arg4;
-(void)loadWithProductItemType:(id)arg1 selectedCountry:(id)arg2;
-(void)loadWithNMOROrderType:(id)arg1 selectedCountry:(id)arg2 extraData:(id)arg3;

@end
