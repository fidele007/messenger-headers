/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessageSendQuerying.h>

@class MNMessageSendStateStore, MNMessageSendQueueStore, NSString;

@interface MNMessageSendQuerier : NSObject <MNMessageSendQuerying> {

	MNMessageSendStateStore* _sendStateStore;
	MNMessageSendQueueStore* _sendQueueStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)outgoingMessagesWithSendStatesForThreadWithKey:(id)arg1 ;
-(id)sendStateInfoForMessageWithOfflineThreadingId:(id)arg1 ;
-(id)outgoingMessageWithOfflineThreadingId:(id)arg1 ;
-(BOOL)isMessageWithOfflineThreadingIdInSendQueue:(id)arg1 ;
-(unsigned long long)sizeOfSendQueueForThread:(id)arg1 ;
-(id)initWithSendStateStore:(id)arg1 sendQueueStore:(id)arg2 ;
@end

