/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)initWithSession:(id)arg1 fetchController:(id)arg2 navigationService:(id)arg3 threadMessageSenderService:(id)arg4 contactsService:(id)arg5 transferStatusModelContainer:(id)arg6 requestStatusModelContainer:(id)arg7 messengerPaymentCoordinator:(id)arg8 peerToPeerRequestCoordinator:(id)arg9 profileImageDownloader:(id)arg10 riskStateMap:(id)arg11 riskFlowController:(id)arg12 configManager:(id)arg13 paymentMethodsCoordinator:(id)arg14 pinController:(id)arg15 touchIDController:(id)arg16 paymentsNavigationCoordinator:(id)arg17 ;
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

