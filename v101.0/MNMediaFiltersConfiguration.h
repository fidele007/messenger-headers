/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMobileConfigContextManager, NSNumber, NSString;

@interface MNMediaFiltersConfiguration : NSObject <FBViewerContextClassProvidable> {

	FBMobileConfigContextManager* _configManager;
	NSNumber* _msqrdFaceRecognitionPreloadMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)isStyleTransfers720PEnabled;
-(long long)msqrdFaceRecognitionPreloadModeShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areFiltersEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areMSQRDMaskEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areFiltersEnabled;
-(BOOL)areMSQRDMaskEffectsEnabled;
-(BOOL)areShaderEffectsEnabled;
-(BOOL)areStyleTransferEffectsEnabled;
-(BOOL)areParticleEffectsEnabled;
-(BOOL)_boolValueForParam:(unsigned long long)arg1 shouldLogExposure:(BOOL)arg2 ;
-(BOOL)areStyleTransferEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areShaderEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(BOOL)areParticleEffectsEnabledShouldLogExposure:(BOOL)arg1 ;
-(long long)msqrdFaceRecognitionPreloadMode;
@end
