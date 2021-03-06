/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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

}
-(BOOL)_didChangeSignificantlyWithYaw:(double)arg1 pitch:(double)arg2 ;
-(void)_logViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(void)maybeLogViewportChangeWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3 fovY:(double)arg4 lastDragTime:(id)arg5 videoFrame:(CGRect)arg6 videoId:(id)arg7 videoTime:(double)arg8 loggingProvider:(id)arg9 ;
-(id)initWithLoggingInterval:(double)arg1 viewportThreshold:(double)arg2 ;
-(void)reset;
@end

