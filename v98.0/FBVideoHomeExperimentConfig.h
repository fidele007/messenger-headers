/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSearchInVideoHomeExperimentProtocol.h>
#import <Messenger/FBVideoHomeExperimentProtocol.h>

@protocol FBVideoHomeExperimentProtocol;
@class NSString, FBVideoHomeExperimentDefaults;

@interface FBVideoHomeExperimentConfig : NSObject <FBSearchInVideoHomeExperimentProtocol, FBVideoHomeExperimentProtocol> {

	BOOL _gkOn;
	id<FBVideoHomeExperimentProtocol> _vhExperimentContext;
	FBVideoHomeExperimentDefaults* _defaults;
	unsigned long long _leftRightSwipingBehavior;

}

@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL experimentActivated; 
@property (nonatomic,readonly) BOOL nullstateShowRecentSearches; 
@property (nonatomic,readonly) BOOL videoSerpShowChannelsTab; 
@property (nonatomic,copy,readonly) NSString * nullstateSuggestionSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL useDarkStyle; 
@property (nonatomic,readonly) unsigned long long leftRightSwipingBehavior;                                 //@synthesize leftRightSwipingBehavior=_leftRightSwipingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL enableBadging; 
@property (nonatomic,readonly) BOOL showMessengerInNavigationBarForVideosTab; 
@property (nonatomic,readonly) BOOL enableHybridDenseListWithFeed; 
@property (nonatomic,readonly) long long inVideoHomeExperiment; 
@property (nonatomic,readonly) BOOL showVideoHomeTab; 
@property (nonatomic,readonly) BOOL showMessengerInNavigationBar; 
@property (nonatomic,readonly) BOOL enableGoLiveHeader; 
@property (nonatomic,readonly) BOOL enablePublisherChannelHeader; 
@property (nonatomic,readonly) BOOL enableSoundToggle; 
@property (nonatomic,readonly) BOOL defaultSoundOn; 
@property (nonatomic,readonly) BOOL useExactThumbnailSize; 
@property (nonatomic,readonly) BOOL enableVideoHomeNotifications; 
@property (nonatomic,readonly) BOOL enableVideoPrefetching; 
@property (nonatomic,readonly) BOOL enableVideoPrefetchingInVideoHome; 
@property (nonatomic,readonly) unsigned long long estimatedAveragePrefetchLength; 
@property (nonatomic,readonly) unsigned long long maxConcurrentPrefetchInVideoHome; 
@property (nonatomic,readonly) unsigned long long maxDepthPrefetchInVideoHome; 
@property (nonatomic,readonly) unsigned long long minimumBandwithRequiredForPrefetching; 
@property (nonatomic,readonly) long long maxVideoPrefetchingDepthForPrefetchedDataInVideoHome; 
@property (nonatomic,readonly) BOOL includeCreatorsUnit; 
@property (nonatomic,readonly) BOOL enableCreatorChannelFeed; 
@property (nonatomic,readonly) long long searchInVideoHomeStatus; 
@property (nonatomic,readonly) BOOL enableHybridDenseListFeed; 
+(id)configWithContextInSession:(id)arg1 ;
+(id)configWithAutoexposedContextInSession:(id)arg1 ;
-(void)logExposure;
-(BOOL)enableBadging;
-(BOOL)experimentActivated;
-(BOOL)nullstateShowRecentSearches;
-(BOOL)useDarkStyle;
-(NSString *)nullstateSuggestionSource;
-(BOOL)videoSerpShowChannelsTab;
-(void)searchInVideoHomeLogExposureIfNeeded;
-(id)initWithGkOn:(BOOL)arg1 experimentContext:(id)arg2 defaults:(id)arg3 ;
-(BOOL)gkOn;
-(id)vhExperimentContext;
-(BOOL)enableHybridDenseListWithFeed;
-(BOOL)showMessengerInNavigationBarForVideosTab;
-(unsigned long long)leftRightSwipingBehavior;
-(BOOL)enabled;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

