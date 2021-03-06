/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSendStateMachineSendRequester <NSObject>
@required
-(void)sendMessageViaMQTT:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageViaExtension:(id)arg1 preparedAttachment:(id)arg2;
-(void)sendMessageBatchViaMQTTBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned long long)arg2;
-(void)sendMessageViaGraph:(id)arg1 preparedAttachment:(id)arg2;
-(void)retryMessage:(id)arg1;
-(void)prepareAttachment:(id)arg1 forMessage:(id)arg2;
-(void)cancelMessage:(id)arg1;

@end

