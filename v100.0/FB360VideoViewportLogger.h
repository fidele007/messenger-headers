/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSDate;

@interface FB360VideoViewportLogger : NSObject {

	double _loggingInterval;
	double _viewportThreshold;
	NSDate* _nextLogTime;
	double _previousYaw;
	double _previousPitch;
	BOOL _viewportAlreadyChanged;
	BOOL _fixViewportLoggingEnabled;

}
-(BOOL)_didChangeSignificantlyWithYaw:(double)arg1 pitch:(double)arg2 ;
-(void)_logViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(void)maybeLogViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(id)initWithLoggingInterval:(double)arg1 viewportThreshold:(double)arg2 fixViewportLoggingEnabled:(BOOL)arg3 ;
-(void)reset;
@end
