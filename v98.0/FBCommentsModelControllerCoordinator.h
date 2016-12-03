/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCKCommentsStoreDelegate.h>
#import <Messenger/FBStreamListener.h>
#import <Messenger/FBCommentPublisherDelegate.h>
#import <Messenger/FBCommentEditorDelegate.h>
#import <Messenger/FBCommentDeleterDelegate.h>
#import <Messenger/FBCommentHiderDelegate.h>
#import <Messenger/FBCommentUnhiderDelegate.h>
#import <Messenger/FBCommentsRefresherDelegate.h>
#import <Messenger/FBCKStreamResponseHandlerProcessingDelegate.h>

@protocol FBAvatarProtocol, FBGraphQLSubscriptionHandle, FBCommentsModelControllerCoordinatorLifecycleManaging;
@class FBCommentsModelControllerCoordinatorListenerAnnouncer, FBCommentsModelControllerCoordinatorAnalyticsListenerAnnouncer, FBMemModelObject, FBCommentAuthorFetchController, FBCKStreamLoadResult, FBCKCommentsStore, FBCKStream, FBCommentPublisher, FBCommentEditor, FBCommentDeleter, FBCommentHider, FBCommentUnhider, FBCommentsRefresher, FBScenePath, FBCommentsModelControllerConfiguration, FBUserSession, NSArray, NSString;

@interface FBCommentsModelControllerCoordinator : NSObject <FBCKCommentsStoreDelegate, FBStreamListener, FBCommentPublisherDelegate, FBCommentEditorDelegate, FBCommentDeleterDelegate, FBCommentHiderDelegate, FBCommentUnhiderDelegate, FBCommentsRefresherDelegate, FBCKStreamResponseHandlerProcessingDelegate> {

	FBCommentsModelControllerCoordinatorListenerAnnouncer* _announcer;
	FBCommentsModelControllerCoordinatorAnalyticsListenerAnnouncer* _analyticsAnnouncer;
	FBMemModelObject*<FBAvatarProtocol> _commentAuthor;
	FBCommentAuthorFetchController* _authorFetcher;
	id<FBGraphQLSubscriptionHandle> _graphqlCommentCreateSubscriptionHandle;
	FBCommentsModelControllerCoordinatorListenerAnnouncer* _liveCommentsAnnouncer;
	long long _liveCommentsListenerCount;
	unsigned long long _pendingOperations;
	FBCKStreamLoadResult* _preloadLoadResult;
	long long _commentsCurrentlyPublishingCount;
	FBCKCommentsStore* _lazy_store;
	FBCKStream* _lazy_stream;
	FBCommentPublisher* _lazy_publisher;
	FBCommentEditor* _lazy_editor;
	FBCommentDeleter* _lazy_deleter;
	FBCommentHider* _lazy_hider;
	FBCommentUnhider* _lazy_unhider;
	FBCommentsRefresher* _lazy_refresher;
	id<FBCommentsModelControllerCoordinatorLifecycleManaging> _lifecycleManager;
	FBScenePath* _scenePath;
	FBCommentsModelControllerConfiguration* _configuration;
	FBUserSession* _session;
	SCD_Struct_FB93 _requiredFetchLimit;

}

@property (nonatomic,readonly) FBCommentPublisher * publisher;                                                               //@synthesize lazy_publisher=_lazy_publisher - In the implementation block
@property (nonatomic,readonly) FBCommentsModelControllerConfiguration * configuration;                                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB93 requiredFetchLimit;                                                           //@synthesize requiredFetchLimit=_requiredFetchLimit - In the implementation block
@property (nonatomic,retain) FBCommentsRefresher * refresher;                                                                //@synthesize lazy_refresher=_lazy_refresher - In the implementation block
@property (nonatomic,retain) FBCommentEditor * editor;                                                                       //@synthesize lazy_editor=_lazy_editor - In the implementation block
@property (nonatomic,retain) FBCommentDeleter * deleter;                                                                     //@synthesize lazy_deleter=_lazy_deleter - In the implementation block
@property (nonatomic,retain) FBCommentHider * hider;                                                                         //@synthesize lazy_hider=_lazy_hider - In the implementation block
@property (nonatomic,retain) FBCommentUnhider * unhider;                                                                     //@synthesize lazy_unhider=_lazy_unhider - In the implementation block
@property (nonatomic,retain) FBCKCommentsStore * store;                                                                      //@synthesize lazy_store=_lazy_store - In the implementation block
@property (nonatomic,retain) FBCKStream * stream;                                                                            //@synthesize lazy_stream=_lazy_stream - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentsModelControllerCoordinatorLifecycleManaging> lifecycleManager;              //@synthesize lifecycleManager=_lifecycleManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * comments; 
@property (nonatomic,readonly) BOOL hasHeadComments; 
@property (nonatomic,readonly) BOOL hasTailComments; 
@property (assign,nonatomic) FBScenePath * scenePath;                                                                        //@synthesize scenePath=_scenePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 ;
-(FBScenePath *)scenePath;
-(void)addLiveCommentsListener:(id)arg1 ;
-(void)removeLiveCommentsListener:(id)arg1 ;
-(void)preloadCommentsConnection:(id)arg1 ;
-(void)addAnalyticsListener:(id)arg1 ;
-(BOOL)hasHeadComments;
-(void)loadHeadComments;
-(BOOL)hasTailComments;
-(void)loadTailComments;
-(void)loadNeckComments;
-(void)publishCommentComposition:(id)arg1 analyticsBlock:(/*^block*/id)arg2 mediaProcessingBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)editComment:(id)arg1 withCommentComposition:(id)arg2 ;
-(void)hideComment:(id)arg1 ;
-(void)unhideComment:(id)arg1 ;
-(void)editDistrictVisibilityOfComment:(id)arg1 ;
-(void)removeAnalyticsListener:(id)arg1 ;
-(void)_prefetchCommentAuthor;
-(void)unsubscribeFromGraphQLCommentCreate;
-(void)subscribeToGraphQLCommentCreate;
-(BOOL)_isInlineReplyExpansionQEEnabled;
-(void)refreshAllComments;
-(BOOL)_shouldStartStreaming;
-(void)_startStreaming;
-(void)performPendingOperations;
-(void)_preloadWithLoadResult:(id)arg1 ;
-(unsigned long long)effectiveFetchLimitForStreamLoadType:(unsigned long long)arg1 ;
-(id)replyPreviewConfiguration;
-(void)configureStream:(id)arg1 ;
-(void)_seedReplyCommentsStores:(id)arg1 ;
-(id)_refreshTopLevelCommentParameters;
-(void)_startedPulishingComment;
-(void)_checkCommentVideoStatusWithComment:(id)arg1 ;
-(void)_finishedPublishingComment:(id)arg1 ;
-(void)_incrementCommentCount;
-(void)refreshCommentUsingLegacyID:(id)arg1 ;
-(FBCommentsRefresher *)refresher;
-(void)didRetrieveCommentCountIncrementedFeedback:(id)arg1 handle:(id)arg2 ;
-(void)_decrementCommentCount;
-(void)didRetrieveCommentCountDecrementedFeedback:(id)arg1 handle:(id)arg2 ;
-(FBCommentDeleter *)deleter;
-(FBCommentHider *)hider;
-(FBCommentUnhider *)unhider;
-(void)refreshComments:(id)arg1 ;
-(id)_replyPreviewConfigurationForRefresh;
-(void)commentsStore:(id)arg1 didInsertHeadComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)commentsStore:(id)arg1 didInsertTailComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)commentsStore:(id)arg1 didInsertSubscriptionComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)commentsStore:(id)arg1 didUpdateComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)commentsStore:(id)arg1 didRemoveComments:(id)arg2 atIndexes:(id)arg3 ;
-(void)commentsStore:(id)arg1 didChangeRestoreState:(long long)arg2 ;
-(void)commentsStoreWillHandleGap:(id)arg1 ;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3 ;
-(void)commentPublisher:(id)arg1 didCreateOptimisticComment:(id)arg2 ;
-(void)commentPublisher:(id)arg1 didUpdateOptimisticComment:(id)arg2 ;
-(void)commentPublisher:(id)arg1 didFinishPostingOptimisticComment:(id)arg2 ;
-(void)commentEditor:(id)arg1 didEditComment:(id)arg2 ;
-(void)commentEditor:(id)arg1 didFailToEditComment:(id)arg2 error:(id)arg3 ;
-(void)commentDeleter:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)commentDeleter:(id)arg1 didFailToDeleteComment:(id)arg2 error:(id)arg3 ;
-(void)commentHider:(id)arg1 didHideComment:(id)arg2 ;
-(void)commentHider:(id)arg1 didFailToHideComment:(id)arg2 error:(id)arg3 ;
-(void)commentUnhider:(id)arg1 didUnhideComment:(id)arg2 ;
-(void)commentUnhider:(id)arg1 didFailToUnhideComment:(id)arg2 error:(id)arg3 ;
-(void)commentsRefresher:(id)arg1 didRefreshComments:(id)arg2 updatedComments:(id)arg3 deletedComments:(id)arg4 ;
-(void)commentsRefresher:(id)arg1 didFailToRefreshComments:(id)arg2 error:(id)arg3 ;
-(void)commentsRefresher:(id)arg1 didRefreshComment:(id)arg2 usingLegacyID:(id)arg3 ;
-(void)commentsRefresher:(id)arg1 didFailToRefreshCommentUsingLegacyID:(id)arg2 error:(id)arg3 ;
-(void)commentsRefresher:(id)arg1 didRefreshCommentVideoAttachments:(id)arg2 forComment:(id)arg3 ;
-(void)commentsRefresher:(id)arg1 didFailToRefreshCommentVideoAttachmentsForComment:(id)arg2 error:(id)arg3 ;
-(void)streamResponseHandler:(id)arg1 willProcessGraphQLRequest:(id)arg2 downloadRequest:(id)arg3 loadType:(unsigned long long)arg4 streamAnalytics:(id)arg5 status:(id)arg6 ;
-(void)streamResponseHandler:(id)arg1 didProcessGraphQLRequest:(id)arg2 loadResult:(id)arg3 ;
-(void)registerRequiredFetchLimit:(SCD_Struct_FB93)arg1 ;
-(void)setDeleter:(FBCommentDeleter *)arg1 ;
-(void)setHider:(FBCommentHider *)arg1 ;
-(void)setUnhider:(FBCommentUnhider *)arg1 ;
-(void)setRefresher:(FBCommentsRefresher *)arg1 ;
-(id<FBCommentsModelControllerCoordinatorLifecycleManaging>)lifecycleManager;
-(void)setLifecycleManager:(id<FBCommentsModelControllerCoordinatorLifecycleManaging>)arg1 ;
-(SCD_Struct_FB93)requiredFetchLimit;
-(FBCKCommentsStore *)store;
-(void)setStore:(FBCKCommentsStore *)arg1 ;
-(void)dealloc;
-(id)init;
-(FBCommentsModelControllerConfiguration *)configuration;
-(void)setStream:(FBCKStream *)arg1 ;
-(NSArray *)comments;
-(void)deleteComment:(id)arg1 ;
-(FBCommentEditor *)editor;
-(void)setEditor:(FBCommentEditor *)arg1 ;
-(FBUserSession *)session;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(FBCommentPublisher *)publisher;
-(FBCKStream *)stream;
@end

