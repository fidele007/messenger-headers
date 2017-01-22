/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSenderExtension <NSObject>
@required
-(void)startWithQueue:(id)arg1;
-(BOOL)shouldHandleMessage:(id)arg1;
-(BOOL)needsExternalAttachmentPreparation;
-(BOOL)handlesAutoRetry;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3;
-(BOOL)isSendingForTarget:(id)arg1;
-(long long)isErrorRetriable:(id)arg1;
-(void)stop;

@end
