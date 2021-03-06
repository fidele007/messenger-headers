/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBCaptureEventListener.h>

@protocol FBCameraWaterfallLoggerProtocol;
@class FBCameraWaterfallStateManager, NSString;

@interface FBCCWaterfallLoggerAdapter : NSObject <FBCaptureEventListener> {

	id<FBCameraWaterfallLoggerProtocol> _internalLogger;
	FBCameraWaterfallStateManager* _waterfallStateManager;

}

@property (nonatomic,readonly) FBCameraWaterfallStateManager * waterfallStateManager;              //@synthesize waterfallStateManager=_waterfallStateManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)transitionStateForOrientation:(long long)arg1 ;
+(id)stringForSize:(CGSize)arg1 ;
+(unsigned long long)cameraStateForFlashMode:(long long)arg1 ;
+(unsigned long long)cameraStateForTorchMode:(long long)arg1 ;
+(unsigned long long)cameraStateForDevicePosition:(long long)arg1 ;
+(unsigned long long)transitionStateForLowLightDetected:(BOOL)arg1 ;
-(FBCameraWaterfallStateManager *)waterfallStateManager;
-(void)logWaterfallEvent:(unsigned long long)arg1 ;
-(void)logZoomFactorDidChange:(double)arg1 ;
-(void)captureDeviceDidChangeTo:(id)arg1 ;
-(id)initWithInternalLogger:(id)arg1 ;
-(void)syncDeviceOrientation:(long long)arg1 ;
-(void)syncPreviewSize:(CGSize)arg1 ;
-(void)logCameraSessionStateDidChangeTo:(unsigned long long)arg1 reason:(unsigned long long)arg2 error:(unsigned long long)arg3 ;
-(void)logDeviceOrientationDidChangeTo:(long long)arg1 ;
-(void)logCapturePhotoStateDidChangeTo:(unsigned long long)arg1 reason:(unsigned long long)arg2 size:(CGSize)arg3 error:(unsigned long long)arg4 ;
-(void)logRecordVideoStateDidChangeTo:(unsigned long long)arg1 reason:(unsigned long long)arg2 size:(CGSize)arg3 error:(unsigned long long)arg4 ;
-(void)logCameraAction:(id)arg1 ;
-(void)logEnabledEffectsDidChangeTo:(id)arg1 ;
@end

