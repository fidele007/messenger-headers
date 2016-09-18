/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSenderExtension.h>

@protocol OS_dispatch_queue;
@class FBUserSession, FBMessengerPaymentsPlugin, NSMutableDictionary, NSObject, NSString;

@interface FBPaymentsMessageSenderExtension : NSObject <MNMessageSenderExtension> {

	FBUserSession* _session;
	FBMessengerPaymentsPlugin* _paymentsPlugin;
	NSMutableDictionary* _targetToThreadMoneySenderMap;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithQueue:(id)arg1 ;
-(BOOL)shouldHandleMessage:(id)arg1 ;
-(BOOL)needsExternalAttachmentPreparation;
-(BOOL)handlesAutoRetry;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3 ;
-(BOOL)isSendingForTarget:(id)arg1 ;
-(long long)isErrorRetriable:(id)arg1 ;
-(id)initWithSession:(id)arg1 paymentsPlugin:(id)arg2 ;
-(id)_preparePaymentAttachment:(id)arg1 withRecipientId:(id)arg2 ;
-(void)_handleMessageSentSuccessWithRecipientId:(id)arg1 paymentId:(id)arg2 message:(id)arg3 delegate:(id)arg4 ;
-(void)_handleMessageSendFailureWithRecipientId:(id)arg1 message:(id)arg2 analyticsUUID:(id)arg3 error:(id)arg4 delegate:(id)arg5 ;
-(void)stop;
@end
