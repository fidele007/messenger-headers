/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, FBFeedbackAnalyticsUIMetricsData, FBAnalyticsSpinnerLogger;

@interface FBFeedbackAnalytics : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _forceAllOperationsToBeSynchronous;
	NSString* _analyticsModule;
	NSString* _analyticsUUID;
	NSString* _viewControllerClassName;
	FBFeedbackAnalyticsUIMetricsData* _UIMetricsData;
	FBAnalyticsSpinnerLogger* _initialSpinnerLogger;
	FBAnalyticsSpinnerLogger* _neckSpinnerLogger;
	FBAnalyticsSpinnerLogger* _tailSpinnerLogger;
	FBAnalyticsSpinnerLogger* _deleteCommentSpinnerLogger;
	FBAnalyticsSpinnerLogger* _banUserSpinnerLogger;
	FBAnalyticsSpinnerLogger* _updateCommentSpinnerLogger;
	unsigned long long _composerActivationTime;

}

@property (nonatomic,copy) NSString * analyticsModule;                                           //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy) NSString * analyticsUUID;                                             //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,copy) NSString * viewControllerClassName;                                   //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,retain) FBFeedbackAnalyticsUIMetricsData * UIMetricsData;                   //@synthesize UIMetricsData=_UIMetricsData - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * initialSpinnerLogger;                    //@synthesize initialSpinnerLogger=_initialSpinnerLogger - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * neckSpinnerLogger;                       //@synthesize neckSpinnerLogger=_neckSpinnerLogger - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * tailSpinnerLogger;                       //@synthesize tailSpinnerLogger=_tailSpinnerLogger - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * deleteCommentSpinnerLogger;              //@synthesize deleteCommentSpinnerLogger=_deleteCommentSpinnerLogger - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * banUserSpinnerLogger;                    //@synthesize banUserSpinnerLogger=_banUserSpinnerLogger - In the implementation block
@property (nonatomic,retain) FBAnalyticsSpinnerLogger * updateCommentSpinnerLogger;              //@synthesize updateCommentSpinnerLogger=_updateCommentSpinnerLogger - In the implementation block
@property (assign,nonatomic) unsigned long long composerActivationTime;                          //@synthesize composerActivationTime=_composerActivationTime - In the implementation block
@property (assign,nonatomic) BOOL forceAllOperationsToBeSynchronous;                             //@synthesize forceAllOperationsToBeSynchronous=_forceAllOperationsToBeSynchronous - In the implementation block
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(NSString *)analyticsUUID;
-(void)logCommentDeletionSpinnerStart;
-(void)logCommentDeletionSpinnerStop;
-(void)logCommentDeletionSpinnerCancelation;
-(void)logUserBanSpinnerStart;
-(void)logUserBanSpinnerStop;
-(void)logUserBanSpinnerCancelation;
-(void)logComposerActivatedWithComposerTapSource:(id)arg1 ;
-(void)logComposerDeactivated;
-(BOOL)forceAllOperationsToBeSynchronous;
-(id)extraAnalyticsData;
-(FBFeedbackAnalyticsUIMetricsData *)UIMetricsData;
-(void)setViewControllerClassName:(NSString *)arg1 ;
-(void)performAsyncBlock:(/*^block*/id)arg1 ;
-(void)reportAnalyticsIfCommentsPresentedAndAnimationFinished;
-(void)logStartForMarkerID:(int)arg1 ;
-(void)setInitialSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(/*^block*/id)extraAnalyticsDataBlock;
-(void)setNeckSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(void)setTailSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(void)setDeleteCommentSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(void)setBanUserSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(void)setUpdateCommentSpinnerLogger:(FBAnalyticsSpinnerLogger *)arg1 ;
-(id)extraAnalyticsDataByMergingSpecificData:(id)arg1 ;
-(void)setComposerActivationTime:(unsigned long long)arg1 ;
-(void)logStreamResponseProcessingWithAnalytics:(id)arg1 loadType:(id)arg2 analyticsUUID:(id)arg3 requestName:(id)arg4 loadResult:(id)arg5 status:(id)arg6 processingStartTime:(double)arg7 processingFinishTime:(double)arg8 ;
-(id)initWithAnalyticsModule:(id)arg1 analyticsUUID:(id)arg2 ;
-(void)logViewControllerInstantiationWithClassName:(id)arg1 ;
-(void)logViewControllerDidFinishPresentationAnimation;
-(void)logDidLoadFeedback;
-(void)logCommentsLoadFromCache;
-(void)logViewControllerAppearance;
-(void)logCommentsAppearance;
-(void)logCommentsNetworkLoadStart;
-(void)logInitialLoadSpinnerStart;
-(void)logInitialLoadSpinnerStop;
-(void)logInitialLoadSpinnerCancelation;
-(void)logNeckLoadSpinnerStart;
-(void)logNeckLoadSpinnerStop;
-(void)logNeckLoadSpinnerCancelation;
-(void)logTailLoadSpinnerStart;
-(void)logTailLoadSpinnerStop;
-(void)logTailLoadSpinnerCancelation;
-(void)logCommentDelete;
-(void)logCommentDeleteFailure;
-(void)logCommentUpdate;
-(void)logCommentUpdateFailure;
-(void)logCommentUpdateSpinnerStart;
-(void)logCommentUpdateSpinnerStop;
-(void)logCommentUpdateSpinnerCancelation;
-(void)logCommentsThreadAssignmentWithFeedbackID:(id)arg1 ;
-(void)logCommentCompositionWithFeedbackID:(id)arg1 censorIndex:(long long)arg2 initializationTimestamp:(double)arg3 ;
-(id)startLoggingStreamResponseProcessingWithAnalytics:(id)arg1 loadType:(id)arg2 downloadRequest:(id)arg3 graphQLRequest:(id)arg4 status:(id)arg5 ;
-(void)finishLoggingStreamResponseProcessingWithHandler:(id)arg1 loadResult:(id)arg2 ;
-(void)setAnalyticsUUID:(NSString *)arg1 ;
-(void)setUIMetricsData:(FBFeedbackAnalyticsUIMetricsData *)arg1 ;
-(FBAnalyticsSpinnerLogger *)initialSpinnerLogger;
-(FBAnalyticsSpinnerLogger *)neckSpinnerLogger;
-(FBAnalyticsSpinnerLogger *)tailSpinnerLogger;
-(FBAnalyticsSpinnerLogger *)deleteCommentSpinnerLogger;
-(FBAnalyticsSpinnerLogger *)banUserSpinnerLogger;
-(FBAnalyticsSpinnerLogger *)updateCommentSpinnerLogger;
-(unsigned long long)composerActivationTime;
-(void)setForceAllOperationsToBeSynchronous:(BOOL)arg1 ;
-(NSString *)viewControllerClassName;
-(void)performBlock:(/*^block*/id)arg1 ;
@end
