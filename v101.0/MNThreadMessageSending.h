/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadMessageSending <NSObject>
@property (assign,nonatomic,__weak) id<MNThreadMessageSendingDelegate> delegate; 
@required
-(id)sendMessageToNewThreadWithPickedContacts:(id)arg1 forwardContent:(id)arg2 sendConversionContext:(id)arg3;
-(void)setDelegate:(id)arg1;
-(id<MNThreadMessageSendingDelegate>)delegate;

@end

