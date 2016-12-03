/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBVideoTVCastingExperimentContext : FBExperimentContext {

	long long _live_full_screen_enabled;
	long long _enable_mpvolumeview_fix;
	BOOL _airplay_enabled;
	long long _tv_casting_3d_touch_enabled;
	long long _enable_hd_fix;
	long long _remember_audio_only_airplay_devices;
	BOOL _version_one_ui_enabled;
	long long _chromecast_enabled;
	long long _cast_when_tapping_new_video_if_casting;
	BOOL _video_tv_casting_allow_auto_play_during_pip;
	long long _vod_full_screen_enabled;
	long long _channel_feed_enabled;

}

@property (assign,nonatomic) long long live_full_screen_enabled;                            //@synthesize live_full_screen_enabled=_live_full_screen_enabled - In the implementation block
@property (assign,nonatomic) long long enable_mpvolumeview_fix;                             //@synthesize enable_mpvolumeview_fix=_enable_mpvolumeview_fix - In the implementation block
@property (assign,nonatomic) BOOL airplay_enabled;                                          //@synthesize airplay_enabled=_airplay_enabled - In the implementation block
@property (assign,nonatomic) long long tv_casting_3d_touch_enabled;                         //@synthesize tv_casting_3d_touch_enabled=_tv_casting_3d_touch_enabled - In the implementation block
@property (assign,nonatomic) long long enable_hd_fix;                                       //@synthesize enable_hd_fix=_enable_hd_fix - In the implementation block
@property (assign,nonatomic) long long remember_audio_only_airplay_devices;                 //@synthesize remember_audio_only_airplay_devices=_remember_audio_only_airplay_devices - In the implementation block
@property (assign,nonatomic) BOOL version_one_ui_enabled;                                   //@synthesize version_one_ui_enabled=_version_one_ui_enabled - In the implementation block
@property (assign,nonatomic) long long chromecast_enabled;                                  //@synthesize chromecast_enabled=_chromecast_enabled - In the implementation block
@property (assign,nonatomic) long long cast_when_tapping_new_video_if_casting;              //@synthesize cast_when_tapping_new_video_if_casting=_cast_when_tapping_new_video_if_casting - In the implementation block
@property (assign,nonatomic) BOOL video_tv_casting_allow_auto_play_during_pip;              //@synthesize video_tv_casting_allow_auto_play_during_pip=_video_tv_casting_allow_auto_play_during_pip - In the implementation block
@property (assign,nonatomic) long long vod_full_screen_enabled;                             //@synthesize vod_full_screen_enabled=_vod_full_screen_enabled - In the implementation block
@property (assign,nonatomic) long long channel_feed_enabled;                                //@synthesize channel_feed_enabled=_channel_feed_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)airplay_enabled;
-(long long)cast_when_tapping_new_video_if_casting;
-(long long)channel_feed_enabled;
-(long long)chromecast_enabled;
-(long long)enable_hd_fix;
-(long long)enable_mpvolumeview_fix;
-(long long)live_full_screen_enabled;
-(long long)remember_audio_only_airplay_devices;
-(long long)tv_casting_3d_touch_enabled;
-(BOOL)version_one_ui_enabled;
-(BOOL)video_tv_casting_allow_auto_play_during_pip;
-(long long)vod_full_screen_enabled;
-(void)setLive_full_screen_enabled:(long long)arg1 ;
-(void)setEnable_mpvolumeview_fix:(long long)arg1 ;
-(void)setAirplay_enabled:(BOOL)arg1 ;
-(void)setTv_casting_3d_touch_enabled:(long long)arg1 ;
-(void)setEnable_hd_fix:(long long)arg1 ;
-(void)setRemember_audio_only_airplay_devices:(long long)arg1 ;
-(void)setVersion_one_ui_enabled:(BOOL)arg1 ;
-(void)setChromecast_enabled:(long long)arg1 ;
-(void)setCast_when_tapping_new_video_if_casting:(long long)arg1 ;
-(void)setVideo_tv_casting_allow_auto_play_during_pip:(BOOL)arg1 ;
-(void)setVod_full_screen_enabled:(long long)arg1 ;
-(void)setChannel_feed_enabled:(long long)arg1 ;
@end

