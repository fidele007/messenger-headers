/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCKCommentsStore, NSMutableDictionary;

@interface FBCKCommentsStoreManagerCacheObject : NSObject {

	FBCKCommentsStore* _topLevelCommentsStore;
	NSMutableDictionary* _replyCommentsStores;

}

@property (nonatomic,readonly) FBCKCommentsStore * topLevelCommentsStore;              //@synthesize topLevelCommentsStore=_topLevelCommentsStore - In the implementation block
-(id)initWithTopLevelCommentsStore:(id)arg1 ;
-(id)replyCommentsStoreForFeedbackID:(id)arg1 focusedCommentID:(id)arg2 ;
-(void)setReplyCommentsStore:(id)arg1 forFeedbackID:(id)arg2 focusedCommentID:(id)arg3 ;
-(FBCKCommentsStore *)topLevelCommentsStore;
-(id)init;
@end

