/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoHomeExperimentProtocol.h>

@class NSString;

@interface FBVideoHomeExperimentDefaults : NSObject <FBVideoHomeExperimentProtocol> {

	BOOL _showVideoHomeTab;
	BOOL _showMessengerInNavigationBar;
	BOOL _enableGoLiveHeader;
	BOOL _enablePublisherChannelHeader;
	BOOL _enableSoundToggle;
	BOOL _defaultSoundOn;
	BOOL _enableVideoHomeNotifications;
	BOOL useExactThumbnailSize;
	BOOL _enableVideoPrefetching;
	BOOL _enableVideoPrefetchingInVideoHome;
	BOOL _includeCreatorsUnit;
	BOOL _enableCreatorChannelFeed;
	BOOL _enableHybridDenseListFeed;
	long long _inVideoHomeExperiment;
	unsigned long long _estimatedAveragePrefetchLength;
	unsigned long long _maxConcurrentPrefetchInVideoHome;
	unsigned long long _maxDepthPrefetchInVideoHome;
	unsigned long long _minimumBandwithRequiredForPrefetching;
	long long _maxVideoPrefetchingDepthForPrefetchedDataInVideoHome;
	long long _searchInVideoHomeStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long inVideoHomeExperiment;                                             //@synthesize inVideoHomeExperiment=_inVideoHomeExperiment - In the implementation block
@property (nonatomic,readonly) BOOL showVideoHomeTab;                                                       //@synthesize showVideoHomeTab=_showVideoHomeTab - In the implementation block
@property (nonatomic,readonly) BOOL showMessengerInNavigationBar;                                           //@synthesize showMessengerInNavigationBar=_showMessengerInNavigationBar - In the implementation block
@property (nonatomic,readonly) BOOL enableGoLiveHeader;                                                     //@synthesize enableGoLiveHeader=_enableGoLiveHeader - In the implementation block
@property (nonatomic,readonly) BOOL enablePublisherChannelHeader;                                           //@synthesize enablePublisherChannelHeader=_enablePublisherChannelHeader - In the implementation block
@property (nonatomic,readonly) BOOL enableSoundToggle;                                                      //@synthesize enableSoundToggle=_enableSoundToggle - In the implementation block
@property (nonatomic,readonly) BOOL defaultSoundOn;                                                         //@synthesize defaultSoundOn=_defaultSoundOn - In the implementation block
@property (nonatomic,readonly) BOOL useExactThumbnailSize; 
@property (nonatomic,readonly) BOOL enableVideoHomeNotifications;                                           //@synthesize enableVideoHomeNotifications=_enableVideoHomeNotifications - In the implementation block
@property (nonatomic,readonly) BOOL enableVideoPrefetching;                                                 //@synthesize enableVideoPrefetching=_enableVideoPrefetching - In the implementation block
@property (nonatomic,readonly) BOOL enableVideoPrefetchingInVideoHome;                                      //@synthesize enableVideoPrefetchingInVideoHome=_enableVideoPrefetchingInVideoHome - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedAveragePrefetchLength;                           //@synthesize estimatedAveragePrefetchLength=_estimatedAveragePrefetchLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maxConcurrentPrefetchInVideoHome;                         //@synthesize maxConcurrentPrefetchInVideoHome=_maxConcurrentPrefetchInVideoHome - In the implementation block
@property (nonatomic,readonly) unsigned long long maxDepthPrefetchInVideoHome;                              //@synthesize maxDepthPrefetchInVideoHome=_maxDepthPrefetchInVideoHome - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumBandwithRequiredForPrefetching;                    //@synthesize minimumBandwithRequiredForPrefetching=_minimumBandwithRequiredForPrefetching - In the implementation block
@property (nonatomic,readonly) long long maxVideoPrefetchingDepthForPrefetchedDataInVideoHome;              //@synthesize maxVideoPrefetchingDepthForPrefetchedDataInVideoHome=_maxVideoPrefetchingDepthForPrefetchedDataInVideoHome - In the implementation block
@property (nonatomic,readonly) BOOL includeCreatorsUnit;                                                    //@synthesize includeCreatorsUnit=_includeCreatorsUnit - In the implementation block
@property (nonatomic,readonly) BOOL enableCreatorChannelFeed;                                               //@synthesize enableCreatorChannelFeed=_enableCreatorChannelFeed - In the implementation block
@property (nonatomic,readonly) long long searchInVideoHomeStatus;                                           //@synthesize searchInVideoHomeStatus=_searchInVideoHomeStatus - In the implementation block
@property (nonatomic,readonly) BOOL enableHybridDenseListFeed;                                              //@synthesize enableHybridDenseListFeed=_enableHybridDenseListFeed - In the implementation block
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
-(id)init;
@end

