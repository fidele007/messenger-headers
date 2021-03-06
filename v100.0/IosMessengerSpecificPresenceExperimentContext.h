/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMessengerSpecificPresenceExperimentContext : FBExperimentContext {

	BOOL _specific_presence_use_specific_presence;
	long long _specific_presence_contact_prefill_size;
	long long _specific_presence_active_participant_set_size;

}

@property (assign,nonatomic) BOOL specific_presence_use_specific_presence;                         //@synthesize specific_presence_use_specific_presence=_specific_presence_use_specific_presence - In the implementation block
@property (assign,nonatomic) long long specific_presence_contact_prefill_size;                     //@synthesize specific_presence_contact_prefill_size=_specific_presence_contact_prefill_size - In the implementation block
@property (assign,nonatomic) long long specific_presence_active_participant_set_size;              //@synthesize specific_presence_active_participant_set_size=_specific_presence_active_participant_set_size - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)specific_presence_active_participant_set_size;
-(long long)specific_presence_contact_prefill_size;
-(BOOL)specific_presence_use_specific_presence;
-(void)setSpecific_presence_use_specific_presence:(BOOL)arg1 ;
-(void)setSpecific_presence_contact_prefill_size:(long long)arg1 ;
-(void)setSpecific_presence_active_participant_set_size:(long long)arg1 ;
@end

