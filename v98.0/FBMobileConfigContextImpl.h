/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMobileConfigContext.h>

@class NSString;

@interface FBMobileConfigContextImpl : NSObject <FBMobileConfigContext> {

	shared_ptr<mobileconfig::FBMobileConfigMmapHandle>* _config;
	weak_ptr<mobileconfig::IFBMobileConfigManager>* _manager;
	shared_ptr<mobileconfig::FBRateLimiter<unsigned long long> >* _shadowRateLimiter;
	shared_ptr<mobileconfig::FBMobileConfigOverridesTable>* _overrides;
	BOOL _loggingExposureEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDebugDescriptionForParameter:(unsigned long long)arg1 ;
+(id)config:(unsigned)arg1 ;
-(void)shadowBool:(unsigned long long)arg1 withValue:(BOOL)arg2 ;
-(BOOL)getBool:(unsigned long long)arg1 ;
-(void)logExposureForConfigParameter:(unsigned long long)arg1 ;
-(void)shadowInt64:(unsigned long long)arg1 withValue:(long long)arg2 ;
-(long long)getInt64:(unsigned long long)arg1 ;
-(void)shadowString:(unsigned long long)arg1 withValue:(id)arg2 ;
-(void)shadowDouble:(unsigned long long)arg1 withValue:(double)arg2 ;
-(double)getDouble:(unsigned long long)arg1 ;
-(BOOL)getBool:(unsigned long long)arg1 withDefault:(BOOL)arg2 ;
-(long long)getInt64:(unsigned long long)arg1 withDefault:(long long)arg2 ;
-(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)getConfig;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getConfigLoggingJSON;
-(void)logExposureForConfigParameter:(unsigned long long)arg1 withExposureType:(id)arg2 ;
-(BOOL)getBool:(unsigned long long)arg1 fromConfig:(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)arg2 withDefault:(BOOL)arg3 ;
-(void)checkAutoExposureLoggingForConfigParameter:(unsigned long long)arg1 ;
-(BOOL)hasBoolOverrideForParam:(unsigned long long)arg1 ;
-(long long)getInt64:(unsigned long long)arg1 fromConfig:(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)arg2 withDefault:(long long)arg3 ;
-(BOOL)hasIntOverrideForParam:(unsigned long long)arg1 ;
-(id)getString:(unsigned long long)arg1 fromConfig:(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)arg2 withDefault:(id)arg3 ;
-(BOOL)hasStringOverrideForParam:(unsigned long long)arg1 ;
-(double)getDouble:(unsigned long long)arg1 fromConfig:(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)arg2 withDefault:(double)arg3 ;
-(BOOL)hasDoubleOverrideForParam:(unsigned long long)arg1 ;
-(id)getString:(unsigned long long)arg1 withDefault:(id)arg2 ;
-(double)getDouble:(unsigned long long)arg1 withDefault:(double)arg2 ;
-(void)logConfigsIfNeeded;
-(id)initWithHandle:(shared_ptr<mobileconfig::FBMobileConfigMmapHandle>*)arg1 withConfigManager:(weak_ptr<mobileconfig::IFBMobileConfigManager>*)arg2 shadowRateLimiter:(shared_ptr<mobileconfig::FBRateLimiter<unsigned long long> >*)arg3 overrides:(shared_ptr<mobileconfig::FBMobileConfigOverridesTable>*)arg4 ;
-(void)disableExposureLogging;
-(void)logShadowResults:(unsigned long long)arg1 cachedResult:(BOOL)arg2 liveResult:(BOOL)arg3 debugString:(id)arg4 liveValueFromFlatbuffer:(BOOL)arg5 cachedValueFromFlatbuffer:(BOOL)arg6 ;
-(BOOL)willServeDefaultValue:(unsigned long long)arg1 ;
-(id)getString:(unsigned long long)arg1 ;
@end

