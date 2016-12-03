/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface RtcVoicemailButtonActivatedExperimentContext : FBExperimentContext {

	long long _button_activated;
	BOOL _short_prompt;

}

@property (assign,nonatomic) long long button_activated;              //@synthesize button_activated=_button_activated - In the implementation block
@property (assign,nonatomic) BOOL short_prompt;                       //@synthesize short_prompt=_short_prompt - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)button_activated;
-(BOOL)short_prompt;
-(void)setButton_activated:(long long)arg1 ;
-(void)setShort_prompt:(BOOL)arg1 ;
@end
