/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface TODOFBPublicEventsPhotoPromptExperimentContext : FBExperimentContext {

	BOOL _hidePrompt;
	BOOL _locationFilteringEnabled;
	BOOL _enabled;
	double _distanceFromLocationThreshold;
	long long _numberOfAssetsToReturn;

}

@property (assign,nonatomic) BOOL hidePrompt;                                   //@synthesize hidePrompt=_hidePrompt - In the implementation block
@property (assign,nonatomic) BOOL locationFilteringEnabled;                     //@synthesize locationFilteringEnabled=_locationFilteringEnabled - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double distanceFromLocationThreshold;              //@synthesize distanceFromLocationThreshold=_distanceFromLocationThreshold - In the implementation block
@property (assign,nonatomic) long long numberOfAssetsToReturn;                  //@synthesize numberOfAssetsToReturn=_numberOfAssetsToReturn - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)distanceFromLocationThreshold;
-(BOOL)hidePrompt;
-(BOOL)locationFilteringEnabled;
-(long long)numberOfAssetsToReturn;
-(void)setNumberOfAssetsToReturn:(long long)arg1 ;
-(void)setHidePrompt:(BOOL)arg1 ;
-(void)setDistanceFromLocationThreshold:(double)arg1 ;
-(void)setLocationFilteringEnabled:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end

