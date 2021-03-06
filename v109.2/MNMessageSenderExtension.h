/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageSenderExtension <NSObject>
@required
-(void)startWithQueue:(id)arg1;
-(BOOL)needsExternalAttachmentPreparation;
-(BOOL)handlesAutoRetry;
-(long long)isErrorRetriable:(id)arg1;
-(BOOL)isSendingForTarget:(id)arg1;
-(void)handleMessage:(id)arg1 preparedAttachment:(id)arg2 delegate:(id)arg3;
-(BOOL)shouldHandleMessage:(id)arg1;
-(void)stop;

@end

