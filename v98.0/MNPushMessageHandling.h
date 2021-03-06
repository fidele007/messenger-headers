/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPushMessageHandling <NSObject>
@required
-(void)handleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 source:(long long)arg4 fetchCompletionHandler:(/*^block*/id)arg5;
-(void)handleSyncMessage:(id)arg1 withDependentUpdateInstructions:(id)arg2;
-(BOOL)isAPNSMessageAlreadyHandled:(id)arg1;

@end

