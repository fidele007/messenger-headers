/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNMessageSendStateStore, MNMessageSendQueueStore, NSObject;

@interface MNMQTTMessageBatchCreator : NSObject {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)mqttMessageBatchBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2 ;
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 queue:(id)arg3 ;
@end
