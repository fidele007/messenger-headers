/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosSearchPilltersInitialUniverseExperimentContext : FBExperimentContext {

	BOOL _ios_search_pillters_initial_experiment_enabled;
	BOOL _user_filters_enabled;

}

@property (assign,nonatomic) BOOL ios_search_pillters_initial_experiment_enabled;              //@synthesize ios_search_pillters_initial_experiment_enabled=_ios_search_pillters_initial_experiment_enabled - In the implementation block
@property (assign,nonatomic) BOOL user_filters_enabled;                                        //@synthesize user_filters_enabled=_user_filters_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)ios_search_pillters_initial_experiment_enabled;
-(BOOL)user_filters_enabled;
-(void)setIos_search_pillters_initial_experiment_enabled:(BOOL)arg1 ;
-(void)setUser_filters_enabled:(BOOL)arg1 ;
@end

