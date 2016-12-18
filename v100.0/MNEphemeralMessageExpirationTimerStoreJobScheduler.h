/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNEphemeralMessageExpirationTimerStoreJobScheduling.h>

@protocol OS_dispatch_queue, FBCancelable, FBClock;
@class NSObject, NSString;

@interface MNEphemeralMessageExpirationTimerStoreJobScheduler : NSObject <MNEphemeralMessageExpirationTimerStoreJobScheduling> {

	NSObject*<OS_dispatch_queue> _queue;
	id<FBCancelable> _currentScheduledJob;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)_currentTimeInMilliseconds;
-(void)cancelAnyRunningJobsAndScheduleCallbackToFireAtTimestamp:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithQueue:(id)arg1 clock:(id)arg2 ;
@end
