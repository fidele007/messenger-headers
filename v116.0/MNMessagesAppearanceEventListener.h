/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagesAppearanceEventListener <NSObject>
@required
-(void)messagesViewWillBindToThreadViewModel:(id)arg1 isReusingViewController:(BOOL)arg2;
-(void)messagesViewWillAppearWithThreadViewModel:(id)arg1;
-(void)messagesViewReadyToAppearWithThreadViewModel:(id)arg1 composerState:(id)arg2;
-(void)messagesViewDidAppearWithThreadViewModel:(id)arg1;
-(void)messagesViewDidOpenThreadViewModel:(id)arg1;
-(void)messagesViewWillUnbindFromThreadViewModel:(id)arg1;
-(void)messagesViewDidDisappear;
-(void)messagesViewDidLoseFocus;

@end

