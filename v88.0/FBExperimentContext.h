/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBExperimentManager, FBMobileConfigContextImpl;

@interface FBExperimentContext : NSObject {

	FBExperimentManager* _experimentManager;
	FBMobileConfigContextImpl* _mobileConfigContext;

}

@property (assign,nonatomic,__weak) FBExperimentManager * experimentManager;                 //@synthesize experimentManager=_experimentManager - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextImpl * mobileConfigContext;              //@synthesize mobileConfigContext=_mobileConfigContext - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(id)contextInSession:(id)arg1 ;
+(id)autoExposedContextWithExperimentManager:(id)arg1 ;
+(id)autoExposedContextInSession:(id)arg1 ;
+(id)contextWithExperimentManager:(id)arg1 ;
+(BOOL)experimentOverridesEnforcedByBackingGatekeeper;
+(BOOL)invalidateSessionOnChange;
+(BOOL)clearCacheOnChange;
+(id)loggingModule;
+(BOOL)useExtendedTimeout;
+(id)tunneledContextInSession:(id)arg1 ;
+(id)configurationName;
-(FBMobileConfigContextImpl *)mobileConfigContext;
-(void)logExposure;
-(FBExperimentManager *)experimentManager;
-(void)logEventWithType:(id)arg1 identifier:(id)arg2 extraData:(id)arg3 ;
-(void)setExperimentManager:(FBExperimentManager *)arg1 ;
-(void)logEventWithType:(id)arg1 ;
-(id)initWithMobileConfig:(id)arg1 ;
-(void)logConversion;
@end

