/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBBatteryHourSummary : NSObject {

	NSMutableDictionary* _energyMap;
	NSMutableDictionary* _attributeMap;
	double _totalEnergy;
	double _onScreenTime;
	double _backgroundTime;

}

@property (nonatomic,readonly) double totalEnergy; 
@property (assign,nonatomic) double onScreenTime;                //@synthesize onScreenTime=_onScreenTime - In the implementation block
@property (assign,nonatomic) double backgroundTime;              //@synthesize backgroundTime=_backgroundTime - In the implementation block
-(double)onScreenTime;
-(double)backgroundTime;
-(void)setBackgroundTime:(double)arg1 ;
-(double)totalEnergy;
-(id)energyMap;
-(void)addEnergy:(double)arg1 forNode:(id)arg2 ;
-(void)setInteger:(long long)arg1 forAttribute:(id)arg2 ;
-(void)setDouble:(double)arg1 forAttribute:(id)arg2 ;
-(void)setOnScreenTime:(double)arg1 ;
-(id)init;
-(id)allProperties;
@end

