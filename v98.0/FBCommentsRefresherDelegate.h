/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

