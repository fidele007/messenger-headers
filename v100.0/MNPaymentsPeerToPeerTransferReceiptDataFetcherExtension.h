/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsTransferReceiptDataFetcherExtension.h>

@protocol FBQueriedMessengerPaymentFieldsProtocol, MNPaymentsTransferReceiptDataFetcherExtensionDelegate;
@class FBMemModelObject, FBPaymentsPeerToPeerFetchController, FBExponentialBackoffTimer, NSString;

@interface MNPaymentsPeerToPeerTransferReceiptDataFetcherExtension : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsTransferReceiptDataFetcherExtension> {

	FBMemModelObject*<FBQueriedMessengerPaymentFieldsProtocol> _messengerPayment;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBExponentialBackoffTimer* _failBackoffTimer;
	id _fetchToken;
	id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)initWithFetchController:(id)arg1 ;
-(void)fetchContentWithMessengerPayment:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 withError:(id)arg2 ;
-(void)setDelegate:(id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsTransferReceiptDataFetcherExtensionDelegate>)delegate;
@end

