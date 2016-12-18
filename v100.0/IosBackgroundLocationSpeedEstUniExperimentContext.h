/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosBackgroundLocationSpeedEstUniExperimentContext : FBExperimentContext {

	double _change_ratio;
	BOOL _speed_estimation_enabled;
	double _current_speed_bottom_threshold_ms;

}

@property (assign,nonatomic) double change_ratio;                                   //@synthesize change_ratio=_change_ratio - In the implementation block
@property (assign,nonatomic) BOOL speed_estimation_enabled;                         //@synthesize speed_estimation_enabled=_speed_estimation_enabled - In the implementation block
@property (assign,nonatomic) double current_speed_bottom_threshold_ms;              //@synthesize current_speed_bottom_threshold_ms=_current_speed_bottom_threshold_ms - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)change_ratio;
-(double)current_speed_bottom_threshold_ms;
-(BOOL)speed_estimation_enabled;
-(void)setChange_ratio:(double)arg1 ;
-(void)setSpeed_estimation_enabled:(BOOL)arg1 ;
-(void)setCurrent_speed_bottom_threshold_ms:(double)arg1 ;
@end
