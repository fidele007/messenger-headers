/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSPDeltaHandler.h>

@protocol MNPaymentsMessengerPaymentDataMutator, MNPaymentsMessengerPaymentDataFetcher, FBPaymentsPeerToPeerTransferOfflineDeltaHandler;
@class NSString;

@interface FBPaymentsPeerToPeerSPDeltaHandlerNewTransfer : NSObject <FBPaymentsPeerToPeerSPDeltaHandler> {

	id<MNPaymentsMessengerPaymentDataMutator> _paymentTransfersDataMutator;
	id<MNPaymentsMessengerPaymentDataFetcher> _paymentTransfersDataFetcher;
	id<FBPaymentsPeerToPeerTransferOfflineDeltaHandler> _transferOfflineDeltaHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
-(long long)_processDelta:(id)arg1 ;
-(long long)handleDelta:(id)arg1 withDeltaHandlerMap:(id)arg2 ;
-(id)initWithPaymentTransfersDataMutator:(id)arg1 paymentTransfersDataFetcher:(id)arg2 transferOfflineDeltaHandler:(id)arg3 ;
-(long long)type;
@end
