/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosTigonPiggybackExperimentContext : FBExperimentContext {

	long long _tigon_piggy_back_max_hold_time_sec;
	long long _tigon_piggy_back_max_buffers_to_hold;
	BOOL _tigon_piggy_back_enabled;

}

@property (assign,nonatomic) long long tigon_piggy_back_max_hold_time_sec;                //@synthesize tigon_piggy_back_max_hold_time_sec=_tigon_piggy_back_max_hold_time_sec - In the implementation block
@property (assign,nonatomic) long long tigon_piggy_back_max_buffers_to_hold;              //@synthesize tigon_piggy_back_max_buffers_to_hold=_tigon_piggy_back_max_buffers_to_hold - In the implementation block
@property (assign,nonatomic) BOOL tigon_piggy_back_enabled;                               //@synthesize tigon_piggy_back_enabled=_tigon_piggy_back_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)tigon_piggy_back_enabled;
-(long long)tigon_piggy_back_max_buffers_to_hold;
-(long long)tigon_piggy_back_max_hold_time_sec;
-(void)setTigon_piggy_back_max_hold_time_sec:(long long)arg1 ;
-(void)setTigon_piggy_back_max_buffers_to_hold:(long long)arg1 ;
-(void)setTigon_piggy_back_enabled:(BOOL)arg1 ;
@end
