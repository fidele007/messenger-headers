/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>
#import <Messenger/FBCLLocationUpdateListener.h>

@protocol OS_dispatch_queue;
@class FBUserSession, FBCLEventChannel, FBMotionActivityManager, FBCLLocationUpdateListenerAnnouncer, NSObject, FBMotionActivity, FBTimer, NSDate, NSString;

@interface FBCLMovementChangeEventSource : FBCLEventSource <FBCLLocationUpdateListener> {

	BOOL _isStarted;
	FBUserSession* _session;
	FBCLEventChannel* _channel;
	FBMotionActivityManager* _activityManager;
	FBCLLocationUpdateListenerAnnouncer* _locationUpdateAnnouncer;
	NSObject*<OS_dispatch_queue> _queue;
	FBMotionActivity* _lastMotionActivity;
	FBTimer* _rollingTimer;
	NSDate* _lastLocationSignalEmissionDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 eventChannel:(id)arg2 activityManager:(id)arg3 locationUpdateAnnouncer:(id)arg4 ;
-(void)locationUpdateDidFinishWithLocations:(id)arg1 ;
-(void)_notifyChannel;
-(void)stop;
-(void)start;
@end
