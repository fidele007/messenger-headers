/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingSessionCryptoStateStoring, OS_dispatch_queue;
@class MNSecureMessagingStore, MNSecureMessagingMessagingCollectionAddress, MNSecureThreadUpdater, MNBouncedMessageTracker, MNSecureMessageSendRetrier, MNSecureMessagingErrorAnalyticsLogger, NSObject;

@interface MNSecureMessagingStatusPacketProcessor : NSObject {

	MNSecureMessagingStore* _store;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	MNSecureThreadUpdater* _threadUpdater;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	id<MNSecureMessagingSessionCryptoStateStoring> _cryptoStateStore;
	MNSecureMessageSendRetrier* _sendRetrier;
	MNSecureMessagingErrorAnalyticsLogger* _analyticsLogger;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithStore:(id)arg1 localAddress:(id)arg2 threadUpdater:(id)arg3 bouncedMessageTracker:(id)arg4 cryptoStateStore:(id)arg5 sendRetrier:(id)arg6 analyticsLogger:(id)arg7 queue:(id)arg8 ;
-(BOOL)processStatusPacket:(id)arg1 ;
@end

