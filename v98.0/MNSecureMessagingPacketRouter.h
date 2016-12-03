/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureMessagingPacketReceiverDelegate.h>

@protocol MNSecureMessagingDeliveryReceiptSending;
@class MNSecureMessagingIncomingMessageProcessor, MNSecureMessagingReceiptReceiver, MNSecureMessagingStatusPacketProcessor, MNSecureMessagingPreKeyTopUpPacketProcessor, MNSecureMessagingRegisteredDeviceStatusUpdateHandler, MNSecureMessagingWrongVersionPacketProcessor, NSString;

@interface MNSecureMessagingPacketRouter : NSObject <MNSecureMessagingPacketReceiverDelegate> {

	MNSecureMessagingIncomingMessageProcessor* _messageProcessor;
	MNSecureMessagingReceiptReceiver* _receiptReceiver;
	MNSecureMessagingStatusPacketProcessor* _statusPacketProcessor;
	id<MNSecureMessagingDeliveryReceiptSending> _deliveryReceiptSender;
	MNSecureMessagingPreKeyTopUpPacketProcessor* _preKeysTopUpProcessor;
	MNSecureMessagingRegisteredDeviceStatusUpdateHandler* _deviceStatusUpdateCoordinator;
	MNSecureMessagingWrongVersionPacketProcessor* _wrongVersionPacketProcessor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFinishProcessingPacketBatchWithIsReplay:(BOOL)arg1 ;
-(void)didReceiveSecureMessage:(id)arg1 isReplay:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithMessageProcessor:(id)arg1 receiptReceiver:(id)arg2 deliveryReceiptSender:(id)arg3 preKeysTopUpProcessor:(id)arg4 deviceStatusUpdateCoordinator:(id)arg5 statusPacketProcessor:(id)arg6 wrongVersionPacketProcessor:(id)arg7 ;
@end
