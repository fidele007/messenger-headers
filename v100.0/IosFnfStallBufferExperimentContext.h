/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosFnfStallBufferExperimentContext : FBExperimentContext {

	double _dash_live_unstall_buffer_size_moderate;
	double _dash_live_unstall_buffer_size_unknown;
	double _live_expected_play_time_after_stall;
	double _dash_live_unstall_buffer_size_good;
	double _dash_vod_fetch_buffer_multiplier;
	double _dash_live_unstall_buffer_size_poor;
	double _dash_fetch_buffer_vod;
	double _dash_live_unstall_buffer_size_excellent;
	BOOL _enable_dynamic_dash_live_unstall_buffer_size;
	BOOL _live_dynamic_unstall_buffer;

}

@property (assign,nonatomic) double dash_live_unstall_buffer_size_moderate;                  //@synthesize dash_live_unstall_buffer_size_moderate=_dash_live_unstall_buffer_size_moderate - In the implementation block
@property (assign,nonatomic) double dash_live_unstall_buffer_size_unknown;                   //@synthesize dash_live_unstall_buffer_size_unknown=_dash_live_unstall_buffer_size_unknown - In the implementation block
@property (assign,nonatomic) double live_expected_play_time_after_stall;                     //@synthesize live_expected_play_time_after_stall=_live_expected_play_time_after_stall - In the implementation block
@property (assign,nonatomic) double dash_live_unstall_buffer_size_good;                      //@synthesize dash_live_unstall_buffer_size_good=_dash_live_unstall_buffer_size_good - In the implementation block
@property (assign,nonatomic) double dash_vod_fetch_buffer_multiplier;                        //@synthesize dash_vod_fetch_buffer_multiplier=_dash_vod_fetch_buffer_multiplier - In the implementation block
@property (assign,nonatomic) double dash_live_unstall_buffer_size_poor;                      //@synthesize dash_live_unstall_buffer_size_poor=_dash_live_unstall_buffer_size_poor - In the implementation block
@property (assign,nonatomic) double dash_fetch_buffer_vod;                                   //@synthesize dash_fetch_buffer_vod=_dash_fetch_buffer_vod - In the implementation block
@property (assign,nonatomic) double dash_live_unstall_buffer_size_excellent;                 //@synthesize dash_live_unstall_buffer_size_excellent=_dash_live_unstall_buffer_size_excellent - In the implementation block
@property (assign,nonatomic) BOOL enable_dynamic_dash_live_unstall_buffer_size;              //@synthesize enable_dynamic_dash_live_unstall_buffer_size=_enable_dynamic_dash_live_unstall_buffer_size - In the implementation block
@property (assign,nonatomic) BOOL live_dynamic_unstall_buffer;                               //@synthesize live_dynamic_unstall_buffer=_live_dynamic_unstall_buffer - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)dash_fetch_buffer_vod;
-(double)dash_live_unstall_buffer_size_excellent;
-(double)dash_live_unstall_buffer_size_good;
-(double)dash_live_unstall_buffer_size_moderate;
-(double)dash_live_unstall_buffer_size_poor;
-(double)dash_live_unstall_buffer_size_unknown;
-(double)dash_vod_fetch_buffer_multiplier;
-(BOOL)enable_dynamic_dash_live_unstall_buffer_size;
-(BOOL)live_dynamic_unstall_buffer;
-(double)live_expected_play_time_after_stall;
-(void)setDash_live_unstall_buffer_size_moderate:(double)arg1 ;
-(void)setDash_live_unstall_buffer_size_unknown:(double)arg1 ;
-(void)setLive_expected_play_time_after_stall:(double)arg1 ;
-(void)setDash_live_unstall_buffer_size_good:(double)arg1 ;
-(void)setDash_vod_fetch_buffer_multiplier:(double)arg1 ;
-(void)setDash_live_unstall_buffer_size_poor:(double)arg1 ;
-(void)setDash_fetch_buffer_vod:(double)arg1 ;
-(void)setDash_live_unstall_buffer_size_excellent:(double)arg1 ;
-(void)setEnable_dynamic_dash_live_unstall_buffer_size:(BOOL)arg1 ;
-(void)setLive_dynamic_unstall_buffer:(BOOL)arg1 ;
@end

