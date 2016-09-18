/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingCryptoEngine, MNSecureMessagingPacketReceiverDelegate, MNSecureMessagingIncomingMessageListener, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingMessagingCollectionAddress, MNSecureThreadUpdater, MNSecureMessagingErrorHandler, MNSecureMessagingRemoteIdentityValidator, NSObject;

@interface MNSecureMessagingIncomingMessageProcessor : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	id<MNSecureMessagingCryptoEngine> _cryptoEngine;
	id<MNSecureMessagingPacketReceiverDelegate> _dispatchDelegateForSelf;
	id<MNSecureMessagingIncomingMessageListener> _listener;
	MNSecureMessagingErrorHandler* _errorHandler;
	MNSecureMessagingRemoteIdentityValidator* _identityValidator;
	NSObject*<OS_dispatch_queue> _queue;

}
-(BOOL)_didAlreadyReceivePacket:(id)arg1 ;
-(BOOL)_preprocessPreKeyMessagePacket:(id)arg1 threadWithKey:(id)arg2 ;
-(BOOL)_processMessagePacket:(id)arg1 cryptoEngine:(id)arg2 threadWithKey:(id)arg3 ;
-(BOOL)processMessagePacket:(id)arg1 isReplay:(BOOL)arg2 ;
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 threadUpdater:(id)arg3 cryptoEngine:(id)arg4 listener:(id)arg5 errorHandler:(id)arg6 identityValidator:(id)arg7 queue:(id)arg8 ;
@end
