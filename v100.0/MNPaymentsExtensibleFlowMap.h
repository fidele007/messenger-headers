/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface MNPaymentsExtensibleFlowMap : NSObject {

	NSDictionary* _checkoutFlowConfigurationMap;
	NSDictionary* _checkoutValidatorFactoryMap;
	NSDictionary* _checkoutFlowOtherActionButtonHandlerMap;
	NSDictionary* _checkoutFlowErrorHandlerMap;
	NSDictionary* _paymentsListCellViewModelCreatorMap;
	NSDictionary* _transferReceiptExtraInfoViewFactoryMap;
	NSDictionary* _transferReceiptViewModelCreatorMap;
	NSDictionary* _paymentsActivityDetailsLoaderFactoryMap;
	NSDictionary* _checkoutConfigurationFactoryMap;

}

@property (nonatomic,copy,readonly) NSDictionary * checkoutFlowConfigurationMap;                         //@synthesize checkoutFlowConfigurationMap=_checkoutFlowConfigurationMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * checkoutValidatorFactoryMap;                          //@synthesize checkoutValidatorFactoryMap=_checkoutValidatorFactoryMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * checkoutFlowOtherActionButtonHandlerMap;              //@synthesize checkoutFlowOtherActionButtonHandlerMap=_checkoutFlowOtherActionButtonHandlerMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * checkoutFlowErrorHandlerMap;                          //@synthesize checkoutFlowErrorHandlerMap=_checkoutFlowErrorHandlerMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * paymentsListCellViewModelCreatorMap;                  //@synthesize paymentsListCellViewModelCreatorMap=_paymentsListCellViewModelCreatorMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transferReceiptExtraInfoViewFactoryMap;               //@synthesize transferReceiptExtraInfoViewFactoryMap=_transferReceiptExtraInfoViewFactoryMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * transferReceiptViewModelCreatorMap;                   //@synthesize transferReceiptViewModelCreatorMap=_transferReceiptViewModelCreatorMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * paymentsActivityDetailsLoaderFactoryMap;              //@synthesize paymentsActivityDetailsLoaderFactoryMap=_paymentsActivityDetailsLoaderFactoryMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * checkoutConfigurationFactoryMap;                      //@synthesize checkoutConfigurationFactoryMap=_checkoutConfigurationFactoryMap - In the implementation block
-(id)initWithSession:(id)arg1 fetchController:(id)arg2 navigationService:(id)arg3 threadMessageSenderService:(id)arg4 contactsService:(id)arg5 messengerPaymentCoordinator:(id)arg6 peerToPeerRequestCoordinator:(id)arg7 profileImageDownloader:(id)arg8 riskStateMap:(id)arg9 riskFlowController:(id)arg10 configManager:(id)arg11 paymentMethodsCoordinator:(id)arg12 pinController:(id)arg13 touchIDController:(id)arg14 paymentsNavigationCoordinator:(id)arg15 ;
-(NSDictionary *)checkoutFlowConfigurationMap;
-(NSDictionary *)checkoutValidatorFactoryMap;
-(NSDictionary *)checkoutFlowOtherActionButtonHandlerMap;
-(NSDictionary *)checkoutFlowErrorHandlerMap;
-(NSDictionary *)paymentsListCellViewModelCreatorMap;
-(NSDictionary *)transferReceiptExtraInfoViewFactoryMap;
-(NSDictionary *)transferReceiptViewModelCreatorMap;
-(NSDictionary *)paymentsActivityDetailsLoaderFactoryMap;
-(NSDictionary *)checkoutConfigurationFactoryMap;
@end

