/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBVideoChannelFeedExperimentContext : FBExperimentContext {

	BOOL _feedEntryPointEnabled;
	BOOL _pageTimelineEntryPointEnabled;
	BOOL _userTimelineEntryPointEnabled;
	BOOL _groupTimelineEntryPointEnabled;
	BOOL _permalinkEntryPointEnabled;
	BOOL _appChannelFeedEnabled;
	BOOL _socialContextEnabled;
	BOOL _useContextTitle;
	BOOL _showWnsNux;
	BOOL _showSharedStory;
	BOOL _swipeableFullScreenEnabled;
	BOOL _dismissIntoWNSEnabled;
	BOOL _useOnScreenController;
	BOOL _centeredScrollingEnabled;
	BOOL _dimmedOnInitialEntryEnabled;
	BOOL _scrollBlockEnabled;
	BOOL _adImpressionOnFocus;
	BOOL _prefetchEnabled;
	BOOL _useQueueEnabled;
	BOOL _attachmentTappable;
	NSString* _feedAdEntryPointStyle;
	double _pauseTimeBetweenVideos;
	unsigned long long _pageSize;
	long long _maxVideos;
	double _maxAspectRatio;
	NSString* _dismissIntoWNSGlyph;
	double _adsSkipInterval;
	NSString* _scrollBlockIndicatorStyle;
	long long _adImpressionPercentage;
	unsigned long long _maxConcurrentPrefetches;
	double _pipStallWaitSeconds;
	NSString* _feedVideoEndCTA;

}

@property (nonatomic,copy,readonly) NSString * feedAdEntryPointStyle;                   //@synthesize feedAdEntryPointStyle=_feedAdEntryPointStyle - In the implementation block
@property (nonatomic,readonly) BOOL feedEntryPointEnabled;                              //@synthesize feedEntryPointEnabled=_feedEntryPointEnabled - In the implementation block
@property (nonatomic,readonly) BOOL pageTimelineEntryPointEnabled;                      //@synthesize pageTimelineEntryPointEnabled=_pageTimelineEntryPointEnabled - In the implementation block
@property (nonatomic,readonly) BOOL userTimelineEntryPointEnabled;                      //@synthesize userTimelineEntryPointEnabled=_userTimelineEntryPointEnabled - In the implementation block
@property (nonatomic,readonly) BOOL groupTimelineEntryPointEnabled;                     //@synthesize groupTimelineEntryPointEnabled=_groupTimelineEntryPointEnabled - In the implementation block
@property (nonatomic,readonly) BOOL permalinkEntryPointEnabled;                         //@synthesize permalinkEntryPointEnabled=_permalinkEntryPointEnabled - In the implementation block
@property (nonatomic,readonly) double pauseTimeBetweenVideos;                           //@synthesize pauseTimeBetweenVideos=_pauseTimeBetweenVideos - In the implementation block
@property (nonatomic,readonly) unsigned long long pageSize;                             //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) long long maxVideos;                                     //@synthesize maxVideos=_maxVideos - In the implementation block
@property (nonatomic,readonly) BOOL appChannelFeedEnabled;                              //@synthesize appChannelFeedEnabled=_appChannelFeedEnabled - In the implementation block
@property (nonatomic,readonly) BOOL socialContextEnabled;                               //@synthesize socialContextEnabled=_socialContextEnabled - In the implementation block
@property (nonatomic,readonly) BOOL useContextTitle;                                    //@synthesize useContextTitle=_useContextTitle - In the implementation block
@property (nonatomic,readonly) BOOL showWnsNux;                                         //@synthesize showWnsNux=_showWnsNux - In the implementation block
@property (nonatomic,readonly) BOOL showSharedStory;                                    //@synthesize showSharedStory=_showSharedStory - In the implementation block
@property (nonatomic,readonly) BOOL swipeableFullScreenEnabled;                         //@synthesize swipeableFullScreenEnabled=_swipeableFullScreenEnabled - In the implementation block
@property (nonatomic,readonly) double maxAspectRatio;                                   //@synthesize maxAspectRatio=_maxAspectRatio - In the implementation block
@property (nonatomic,readonly) BOOL dismissIntoWNSEnabled;                              //@synthesize dismissIntoWNSEnabled=_dismissIntoWNSEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * dismissIntoWNSGlyph;                     //@synthesize dismissIntoWNSGlyph=_dismissIntoWNSGlyph - In the implementation block
@property (nonatomic,readonly) BOOL useOnScreenController;                              //@synthesize useOnScreenController=_useOnScreenController - In the implementation block
@property (nonatomic,readonly) BOOL centeredScrollingEnabled;                           //@synthesize centeredScrollingEnabled=_centeredScrollingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL dimmedOnInitialEntryEnabled;                        //@synthesize dimmedOnInitialEntryEnabled=_dimmedOnInitialEntryEnabled - In the implementation block
@property (nonatomic,readonly) double adsSkipInterval;                                  //@synthesize adsSkipInterval=_adsSkipInterval - In the implementation block
@property (nonatomic,readonly) BOOL scrollBlockEnabled;                                 //@synthesize scrollBlockEnabled=_scrollBlockEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * scrollBlockIndicatorStyle;               //@synthesize scrollBlockIndicatorStyle=_scrollBlockIndicatorStyle - In the implementation block
@property (nonatomic,readonly) BOOL adImpressionOnFocus;                                //@synthesize adImpressionOnFocus=_adImpressionOnFocus - In the implementation block
@property (nonatomic,readonly) long long adImpressionPercentage;                        //@synthesize adImpressionPercentage=_adImpressionPercentage - In the implementation block
@property (nonatomic,readonly) BOOL prefetchEnabled;                                    //@synthesize prefetchEnabled=_prefetchEnabled - In the implementation block
@property (nonatomic,readonly) BOOL useQueueEnabled;                                    //@synthesize useQueueEnabled=_useQueueEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long maxConcurrentPrefetches;              //@synthesize maxConcurrentPrefetches=_maxConcurrentPrefetches - In the implementation block
@property (assign,nonatomic) double pipStallWaitSeconds;                                //@synthesize pipStallWaitSeconds=_pipStallWaitSeconds - In the implementation block
@property (nonatomic,readonly) BOOL attachmentTappable;                                 //@synthesize attachmentTappable=_attachmentTappable - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedVideoEndCTA;                         //@synthesize feedVideoEndCTA=_feedVideoEndCTA - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(unsigned long long)maxConcurrentPrefetches;
-(BOOL)logAdImpressionOnAppearance;
-(NSString *)feedAdEntryPointStyle;
-(BOOL)feedEntryPointEnabled;
-(BOOL)pageTimelineEntryPointEnabled;
-(BOOL)userTimelineEntryPointEnabled;
-(BOOL)groupTimelineEntryPointEnabled;
-(BOOL)permalinkEntryPointEnabled;
-(double)pauseTimeBetweenVideos;
-(long long)maxVideos;
-(BOOL)appChannelFeedEnabled;
-(BOOL)socialContextEnabled;
-(BOOL)useContextTitle;
-(BOOL)showWnsNux;
-(BOOL)showSharedStory;
-(BOOL)swipeableFullScreenEnabled;
-(BOOL)dismissIntoWNSEnabled;
-(NSString *)dismissIntoWNSGlyph;
-(BOOL)useOnScreenController;
-(BOOL)centeredScrollingEnabled;
-(BOOL)dimmedOnInitialEntryEnabled;
-(double)adsSkipInterval;
-(BOOL)scrollBlockEnabled;
-(NSString *)scrollBlockIndicatorStyle;
-(BOOL)adImpressionOnFocus;
-(long long)adImpressionPercentage;
-(BOOL)prefetchEnabled;
-(BOOL)useQueueEnabled;
-(double)pipStallWaitSeconds;
-(void)setPipStallWaitSeconds:(double)arg1 ;
-(BOOL)attachmentTappable;
-(NSString *)feedVideoEndCTA;
-(double)maxAspectRatio;
-(unsigned long long)pageSize;
@end

