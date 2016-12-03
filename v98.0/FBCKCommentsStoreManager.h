/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBCache;

@interface FBCKCommentsStoreManager : NSObject {

	FBUserSession* _session;
	FBCache* _commentsStoreCache;

}

@property (nonatomic,readonly) FBCache * commentsStoreCache;              //@synthesize commentsStoreCache=_commentsStoreCache - In the implementation block
-(id)commentsStoreWithModelControllerConfiguration:(id)arg1 ;
-(void)createCommentsStoreForModelControllerWithConfiguration:(id)arg1 parentConfiguration:(id)arg2 seedLoadResult:(id)arg3 ;
-(FBCache *)commentsStoreCache;
-(id)_connectionWithFeedbackID:(id)arg1 focusedCommentID:(id)arg2 parentFocusedCommentID:(id)arg3 viewerActsAsPageID:(id)arg4 commentOrder:(unsigned long long)arg5 ;
-(id)initWithSession:(id)arg1 ;
@end

