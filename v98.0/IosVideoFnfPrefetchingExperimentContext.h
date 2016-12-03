/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosVideoFnfPrefetchingExperimentContext : FBExperimentContext {

	long long _dash_live_segments_to_prefetch;
	BOOL _dash_live_prefetch_layered_cache;
	BOOL _dash_live_prefetch_enabled;
	BOOL _dash_live_prefetch_only_once;
	long long _dash_live_prefetch_delay_before_dealloc;

}

@property (assign,nonatomic) long long dash_live_segments_to_prefetch;                       //@synthesize dash_live_segments_to_prefetch=_dash_live_segments_to_prefetch - In the implementation block
@property (assign,nonatomic) BOOL dash_live_prefetch_layered_cache;                          //@synthesize dash_live_prefetch_layered_cache=_dash_live_prefetch_layered_cache - In the implementation block
@property (assign,nonatomic) BOOL dash_live_prefetch_enabled;                                //@synthesize dash_live_prefetch_enabled=_dash_live_prefetch_enabled - In the implementation block
@property (assign,nonatomic) BOOL dash_live_prefetch_only_once;                              //@synthesize dash_live_prefetch_only_once=_dash_live_prefetch_only_once - In the implementation block
@property (assign,nonatomic) long long dash_live_prefetch_delay_before_dealloc;              //@synthesize dash_live_prefetch_delay_before_dealloc=_dash_live_prefetch_delay_before_dealloc - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)dash_live_prefetch_delay_before_dealloc;
-(BOOL)dash_live_prefetch_enabled;
-(BOOL)dash_live_prefetch_layered_cache;
-(BOOL)dash_live_prefetch_only_once;
-(long long)dash_live_segments_to_prefetch;
-(void)setDash_live_segments_to_prefetch:(long long)arg1 ;
-(void)setDash_live_prefetch_layered_cache:(BOOL)arg1 ;
-(void)setDash_live_prefetch_enabled:(BOOL)arg1 ;
-(void)setDash_live_prefetch_only_once:(BOOL)arg1 ;
-(void)setDash_live_prefetch_delay_before_dealloc:(long long)arg1 ;
@end

