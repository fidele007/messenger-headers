/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

