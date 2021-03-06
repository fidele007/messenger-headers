/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsTransferReceiptDataFetcherExtension.h>

@protocol MNPaymentsTransferReceiptDataFetcherExtensionDelegate;
@class FBPaymentsPeerToPeerFetchController, NSString;

@interface MNPaymentsGroupCommerceTransferReceiptDataFetcherExtension : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsTransferReceiptDataFetcherExtension> {

	FBPaymentsPeerToPeerFetchController* _fetchController;
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

