/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol FBClock;
@class FBProviderMapData, FBLocaleMap, MNDeprecationPhaseNagImpressionStore, MNDeprecationInterstitialBehaviorLogger, NSString;

@interface MNDeprecationInterstitialDefaultBehaviorInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	id<FBClock> _clock;
	FBLocaleMap* _localeMap;
	MNDeprecationPhaseNagImpressionStore* _deprecationNagImpressionStore;
	MNDeprecationInterstitialBehaviorLogger* _logger;

}

@property (nonatomic,readonly) id<FBClock> clock;                                                                 //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) FBLocaleMap * localeMap;                                                           //@synthesize localeMap=_localeMap - In the implementation block
@property (nonatomic,readonly) MNDeprecationPhaseNagImpressionStore * deprecationNagImpressionStore;              //@synthesize deprecationNagImpressionStore=_deprecationNagImpressionStore - In the implementation block
@property (nonatomic,readonly) MNDeprecationInterstitialBehaviorLogger * logger;                                  //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNDeprecationPhaseNagImpressionStore *)deprecationNagImpressionStore;
-(FBLocaleMap *)localeMap;
-(id<FBClock>)clock;
-(MNDeprecationInterstitialBehaviorLogger *)logger;
@end

