/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBRtcLangtechVadExperimentContext : FBExperimentContext {

	BOOL _useLangtech;
	BOOL _enableComparison;
	long long _V;

}

@property (assign,nonatomic) BOOL useLangtech;                   //@synthesize useLangtech=_useLangtech - In the implementation block
@property (assign,nonatomic) BOOL enableComparison;              //@synthesize enableComparison=_enableComparison - In the implementation block
@property (assign,V,nonatomic) long long V;                      //@synthesize V=_V - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)V;
-(void)setV:(long long)arg1 ;
-(BOOL)enableComparison;
-(BOOL)useLangtech;
-(void)setUseLangtech:(BOOL)arg1 ;
-(void)setEnableComparison:(BOOL)arg1 ;
@end

