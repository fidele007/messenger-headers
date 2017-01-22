/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoUpdaterAutomaticRestartBehavior.h>

@class FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer, NSTimer;

@interface FBAutoUpdaterTimeDelayRestartBehavior : NSObject <FBAutoUpdaterAutomaticRestartBehavior> {

	double _delay;
	FBAutoUpdaterAutomaticRestartBehaviorListeningAnnouncer* _announcer;
	BOOL _timerHasFired;
	NSTimer* _timer;

}
-(BOOL)autoUpdaterShouldAutomaticallyRestart;
-(void)addRestartBehaviorListener:(id)arg1 ;
-(void)removeRestartBehaviorListener:(id)arg1 ;
-(id)initWithDelay:(double)arg1 ;
-(void)_onTimerFire;
-(void)dealloc;
-(id)init;
-(void)signal;
@end
