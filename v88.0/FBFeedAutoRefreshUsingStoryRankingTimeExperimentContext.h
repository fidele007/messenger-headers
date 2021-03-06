/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBFeedAutoRefreshUsingStoryRankingTimeExperimentContext : FBExperimentContext {

	BOOL _enabled;
	double _delayAfterBackground;
	double _delayAfterHit;
	double _pollingTimer;
	double _pollingTimerLowerBound;

}

@property (nonatomic,readonly) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) double delayAfterBackground;                //@synthesize delayAfterBackground=_delayAfterBackground - In the implementation block
@property (nonatomic,readonly) double delayAfterHit;                       //@synthesize delayAfterHit=_delayAfterHit - In the implementation block
@property (nonatomic,readonly) double pollingTimer;                        //@synthesize pollingTimer=_pollingTimer - In the implementation block
@property (nonatomic,readonly) double pollingTimerLowerBound;              //@synthesize pollingTimerLowerBound=_pollingTimerLowerBound - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(double)pollingTimer;
-(double)delayAfterHit;
-(double)pollingTimerLowerBound;
-(double)delayAfterBackground;
-(BOOL)enabled;
@end

