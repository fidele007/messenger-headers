/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCrashCounter, FBExceptionHandler, FBAppDefaults;

@interface FBApplicationTerminationTracker : NSObject {

	double _minStartupDuration;
	FBCrashCounter* _crashCounter;
	FBExceptionHandler* _exceptionHandler;
	FBAppDefaults* _appDefaults;

}
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 appDefaults:(id)arg3 ;
-(void)_willTerminate;
-(id)initWithMinStartupDuration:(double)arg1 exceptionHandler:(id)arg2 ;
-(void)startupBegan;
-(void)startupCompleted;
-(void)dealloc;
-(void)_setApplicationState:(int)arg1 ;
@end

