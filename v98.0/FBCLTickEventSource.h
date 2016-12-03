/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>

@class FBTimer, FBUserSession;

@interface FBCLTickEventSource : FBCLEventSource {

	FBTimer* _timerSource;
	unsigned long long _backgroundTask;
	BOOL _started;
	double _lastWakeup;
	double _lastSystemWakeup;
	double _lastIncreaseTickFrequency;
	double _tickInterval;
	double _minimumEventInterval;
	FBUserSession* _session;

}
-(void)_applicationDidEnterForeground;
-(id)initWithEventChannel:(id)arg1 userSession:(id)arg2 ;
-(void)increaseTickFrequency;
-(id)initWithEventChannel:(id)arg1 ;
-(void)_stopTickTimer;
-(void)_spawnNewTickTimer;
-(void)_applicationDidEnterInBackground;
-(void)_doTimer;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)_endBackgroundTask;
@end
