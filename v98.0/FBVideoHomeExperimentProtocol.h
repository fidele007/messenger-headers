/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoHomeExperimentProtocol <NSObject>
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
@required
-(void)logExposure;
-(BOOL)defaultSoundOn;
-(BOOL)enableCreatorChannelFeed;
-(BOOL)enableGoLiveHeader;
-(BOOL)enableHybridDenseListFeed;
-(BOOL)enablePublisherChannelHeader;
-(BOOL)enableSoundToggle;
-(BOOL)enableVideoHomeNotifications;
-(BOOL)enableVideoPrefetching;
-(BOOL)enableVideoPrefetchingInVideoHome;
-(unsigned long long)estimatedAveragePrefetchLength;
-(long long)inVideoHomeExperiment;
-(BOOL)includeCreatorsUnit;
-(unsigned long long)maxConcurrentPrefetchInVideoHome;
-(unsigned long long)maxDepthPrefetchInVideoHome;
-(long long)maxVideoPrefetchingDepthForPrefetchedDataInVideoHome;
-(unsigned long long)minimumBandwithRequiredForPrefetching;
-(long long)searchInVideoHomeStatus;
-(BOOL)showMessengerInNavigationBar;
-(BOOL)showVideoHomeTab;
-(BOOL)useExactThumbnailSize;

@end

