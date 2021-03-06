/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBStreamAnalytics;

@interface FBFeedbackAnalyticsUIMetricsData : NSObject {

	BOOL _hasPreviousPage;
	BOOL _hasNextPage;
	BOOL _isRanked;
	double _viewControllerInitializationTimestamp;
	double _viewControllerDidFinishPresentationAnimationTimestamp;
	double _feedbackDidFinishLoadingTimestamp;
	double _commentsUserInitiatedLoadStartTimestamp;
	double _commentsLoadedFromCacheTimestamp;
	double _commentsRequestAddTimestamp;
	double _commentsRequestStartTimestamp;
	double _commentsResponseStartProcessingTimestamp;
	double _commentsResponseFinishProcessingTimestamp;
	double _viewControllerAppearTimestamp;
	double _commentsAppearTimestamp;
	NSString* _startCursor;
	NSString* _endCursor;
	NSString* _viewControllerClassName;
	FBStreamAnalytics* _streamAnalytics;

}

@property (assign,nonatomic) double viewControllerInitializationTimestamp;                              //@synthesize viewControllerInitializationTimestamp=_viewControllerInitializationTimestamp - In the implementation block
@property (assign,nonatomic) double viewControllerDidFinishPresentationAnimationTimestamp;              //@synthesize viewControllerDidFinishPresentationAnimationTimestamp=_viewControllerDidFinishPresentationAnimationTimestamp - In the implementation block
@property (assign,nonatomic) double feedbackDidFinishLoadingTimestamp;                                  //@synthesize feedbackDidFinishLoadingTimestamp=_feedbackDidFinishLoadingTimestamp - In the implementation block
@property (assign,nonatomic) double commentsUserInitiatedLoadStartTimestamp;                            //@synthesize commentsUserInitiatedLoadStartTimestamp=_commentsUserInitiatedLoadStartTimestamp - In the implementation block
@property (assign,nonatomic) double commentsLoadedFromCacheTimestamp;                                   //@synthesize commentsLoadedFromCacheTimestamp=_commentsLoadedFromCacheTimestamp - In the implementation block
@property (assign,nonatomic) double commentsRequestAddTimestamp;                                        //@synthesize commentsRequestAddTimestamp=_commentsRequestAddTimestamp - In the implementation block
@property (assign,nonatomic) double commentsRequestStartTimestamp;                                      //@synthesize commentsRequestStartTimestamp=_commentsRequestStartTimestamp - In the implementation block
@property (assign,nonatomic) double commentsResponseStartProcessingTimestamp;                           //@synthesize commentsResponseStartProcessingTimestamp=_commentsResponseStartProcessingTimestamp - In the implementation block
@property (assign,nonatomic) double commentsResponseFinishProcessingTimestamp;                          //@synthesize commentsResponseFinishProcessingTimestamp=_commentsResponseFinishProcessingTimestamp - In the implementation block
@property (assign,nonatomic) double viewControllerAppearTimestamp;                                      //@synthesize viewControllerAppearTimestamp=_viewControllerAppearTimestamp - In the implementation block
@property (assign,nonatomic) double commentsAppearTimestamp;                                            //@synthesize commentsAppearTimestamp=_commentsAppearTimestamp - In the implementation block
@property (nonatomic,copy) NSString * startCursor;                                                      //@synthesize startCursor=_startCursor - In the implementation block
@property (nonatomic,copy) NSString * endCursor;                                                        //@synthesize endCursor=_endCursor - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousPage;                                                      //@synthesize hasPreviousPage=_hasPreviousPage - In the implementation block
@property (assign,nonatomic) BOOL hasNextPage;                                                          //@synthesize hasNextPage=_hasNextPage - In the implementation block
@property (assign,nonatomic) BOOL isRanked;                                                             //@synthesize isRanked=_isRanked - In the implementation block
@property (nonatomic,copy) NSString * viewControllerClassName;                                          //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,retain) FBStreamAnalytics * streamAnalytics;                                       //@synthesize streamAnalytics=_streamAnalytics - In the implementation block
-(NSString *)endCursor;
-(FBStreamAnalytics *)streamAnalytics;
-(double)viewControllerDidFinishPresentationAnimationTimestamp;
-(double)commentsAppearTimestamp;
-(void)reportToAnalyticsUsingModule:(id)arg1 ;
-(void)setViewControllerInitializationTimestamp:(double)arg1 ;
-(void)setViewControllerClassName:(NSString *)arg1 ;
-(void)setViewControllerDidFinishPresentationAnimationTimestamp:(double)arg1 ;
-(void)setFeedbackDidFinishLoadingTimestamp:(double)arg1 ;
-(void)setCommentsLoadedFromCacheTimestamp:(double)arg1 ;
-(void)setViewControllerAppearTimestamp:(double)arg1 ;
-(void)setCommentsAppearTimestamp:(double)arg1 ;
-(void)setCommentsUserInitiatedLoadStartTimestamp:(double)arg1 ;
-(void)setEndCursor:(NSString *)arg1 ;
-(void)setHasPreviousPage:(BOOL)arg1 ;
-(void)setIsRanked:(BOOL)arg1 ;
-(void)setStreamAnalytics:(FBStreamAnalytics *)arg1 ;
-(void)setCommentsResponseStartProcessingTimestamp:(double)arg1 ;
-(void)setCommentsResponseFinishProcessingTimestamp:(double)arg1 ;
-(void)setCommentsRequestAddTimestamp:(double)arg1 ;
-(void)setCommentsRequestStartTimestamp:(double)arg1 ;
-(BOOL)hasIncompleteNetworkerData;
-(BOOL)hasDataInCache;
-(double)feedbackDidFinishLoadingTimestamp;
-(double)viewControllerInitializationTimestamp;
-(double)commentsUserInitiatedLoadStartTimestamp;
-(double)commentsRequestAddTimestamp;
-(double)commentsLoadedFromCacheTimestamp;
-(double)commentsResponseFinishProcessingTimestamp;
-(double)viewControllerAppearTimestamp;
-(double)commentsRequestStartTimestamp;
-(double)commentsResponseStartProcessingTimestamp;
-(BOOL)isRanked;
-(NSString *)viewControllerClassName;
-(void)reset;
-(BOOL)hasNextPage;
-(BOOL)hasPreviousPage;
-(void)setHasNextPage:(BOOL)arg1 ;
-(NSString *)startCursor;
-(void)setStartCursor:(NSString *)arg1 ;
@end

