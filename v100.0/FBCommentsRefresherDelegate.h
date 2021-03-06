/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentsRefresherDelegate <NSObject>
@required
-(void)commentsRefresher:(id)arg1 didRefreshComments:(id)arg2 updatedComments:(id)arg3 deletedComments:(id)arg4;
-(void)commentsRefresher:(id)arg1 didFailToRefreshComments:(id)arg2 error:(id)arg3;
-(void)commentsRefresher:(id)arg1 didRefreshComment:(id)arg2 usingLegacyID:(id)arg3;
-(void)commentsRefresher:(id)arg1 didFailToRefreshCommentUsingLegacyID:(id)arg2 error:(id)arg3;
-(void)commentsRefresher:(id)arg1 didRefreshCommentVideoAttachments:(id)arg2 forComment:(id)arg3;
-(void)commentsRefresher:(id)arg1 didFailToRefreshCommentVideoAttachmentsForComment:(id)arg2 error:(id)arg3;

@end

