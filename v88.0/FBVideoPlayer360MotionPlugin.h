/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPluginView.h>

@class CMMotionManager, NSOperationQueue, FBVideoPlaybackController, NSString;

@interface FBVideoPlayer360MotionPlugin : UIView <FBVideoPluginView> {

	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;
	unsigned long long _state;
	GLKQuaternion _capturedDeviceAttitude;
	BOOL _shouldLogViewportRotated;
	BOOL _shouldCaptureRotation;
	BOOL _autoHorizonEnabled;
	FBVideoPlaybackController* videoController;
	CGRect videoFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect videoFrame; 
@property (assign,nonatomic,__weak) FBVideoPlaybackController * videoController; 
@property (nonatomic,readonly) unsigned long long visibilityOptions; 
-(void)videoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidCancelPlayback:(id)arg1 ;
-(void)videoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(unsigned long long)visibilityOptions;
-(void)videoPlaybackController:(id)arg1 didChangeVideoPlaybackItem:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withSession:(id)arg2 ;
-(void)_handleMotion:(id)arg1 error:(id)arg2 ;
-(void)_handleMotionWithDeviceAttitude:(_GLKQuaternion)arg1 ;
-(void)_maybeLogViewportRotated:(_GLKQuaternion)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(FBVideoPlaybackController *)videoController;
-(void)setVideoController:(FBVideoPlaybackController *)arg1 ;
@end

