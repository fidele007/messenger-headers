/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessagesModelControllerMessagesLoaderDelegate <NSObject>
@required
-(void)messagesLoader:(id)arg1 didLoadMoreMessagesWithThreadViewModelLoadResult:(id)arg2;
-(void)messagesLoader:(id)arg1 didLoadUnreadMessagesWithThreadViewModelLoadResult:(id)arg2;
-(void)messagesLoader:(id)arg1 didBeginLoadingMoreMessages:(BOOL)arg2 withPreliminaryResult:(id)arg3;
-(void)messagesLoader:(id)arg1 didFailLoadingMoreMessagesWithError:(id)arg2;
-(void)messagesLoader:(id)arg1 didFailLoadingUnreadMessagesWithError:(id)arg2;

@end

