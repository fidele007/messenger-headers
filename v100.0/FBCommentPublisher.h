/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentPublisherDelegate;
@class FBUserSession, FBCKQueryTopLevelCommentParametersInput, FBCommentAuthorFetchController, FBCommentPublisherQueue;

@interface FBCommentPublisher : NSObject {

	FBUserSession* _session;
	FBCKQueryTopLevelCommentParametersInput* _topLevelCommentParametersForRefresh;
	FBCommentAuthorFetchController* _authorFetcher;
	FBCommentPublisherQueue* _requestQueue;
	unsigned long long _state;
	id<FBCommentPublisherDelegate> _delegate;

}

@property (nonatomic,retain) FBCommentAuthorFetchController * authorFetcher;              //@synthesize authorFetcher=_authorFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentPublisherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 topLevelCommentParametersForRefresh:(id)arg2 ;
-(void)publishWithComposition:(id)arg1 commentAuthor:(id)arg2 analyticsBlock:(/*^block*/id)arg3 mediaProcessingBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_optimisticCommentWithComposition:(id)arg1 commentAuthor:(id)arg2 updateBlock:(/*^block*/id)arg3 ;
-(void)_publishWithComposition:(id)arg1 commentAuthor:(id)arg2 analyticsBlock:(/*^block*/id)arg3 optimisticCommentBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleSuccessfulPostRequestWithOptimisticComment:(id)arg1 postedComment:(id)arg2 legacyAPIPostID:(id)arg3 ;
-(void)_handleFailedPostRequestWithOptimisticComment:(id)arg1 error:(id)arg2 ;
-(void)_enqueuePublishRequest:(id)arg1 ;
-(void)_publishRequest:(id)arg1 ;
-(FBCommentAuthorFetchController *)authorFetcher;
-(void)setAuthorFetcher:(FBCommentAuthorFetchController *)arg1 ;
-(void)setDelegate:(id<FBCommentPublisherDelegate>)arg1 ;
-(id<FBCommentPublisherDelegate>)delegate;
-(void)_processQueue;
@end

