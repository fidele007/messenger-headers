/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureThreadSubscribing;
@class MNSecureMessagingStore, MNSecureMessagingSessionCryptoStateStore, MNBouncedMessageTracker;

@interface MNSecureMessagingContentBatchDeleter : NSObject {

	MNSecureMessagingStore* _secureMessagingStore;
	MNSecureMessagingSessionCryptoStateStore* _cryptoStateStore;
	MNBouncedMessageTracker* _bouncedMessageTracker;
	id<MNSecureThreadSubscribing> _secureThreadListener;

}
-(void)deleteAllMessagingContentWithCompletion:(/*^block*/id)arg1 ;
-(void)_didDeleteMessagingStoreContentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSecureMessagingStore:(id)arg1 cryptoStateStore:(id)arg2 bouncedMessageTracker:(id)arg3 secureThreadListener:(id)arg4 ;
@end

