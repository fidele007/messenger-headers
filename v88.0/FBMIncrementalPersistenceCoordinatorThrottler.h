/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNIncrementalPersistenceCoordinating.h>
#import <Messenger/FBMLongBackgroundJobStarting.h>

@protocol MNIncrementalPersistenceCoordinating, OS_dispatch_queue;
@class NSNotificationCenter, FBTimeThrottler, NSObject, NSArray, NSString;

@interface FBMIncrementalPersistenceCoordinatorThrottler : NSObject <MNIncrementalPersistenceCoordinating, FBMLongBackgroundJobStarting> {

	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	NSNotificationCenter* _notificationCenter;
	FBTimeThrottler* _timeThrottler;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _throttlerJobQueue;
	unsigned long long _backgroundTaskId;

}

@property (assign) unsigned long long backgroundTaskId;              //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runJobsFromSyncProtocol:(id)arg1 withSequenceId:(long long)arg2 ;
-(void)runJobs:(id)arg1 ;
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 numberOfSecondsToThrottle:(double)arg2 queue:(id)arg3 ;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)_flushThrottlerJobQueue;
-(void)_addThrottlerJob:(id)arg1 executeJobsImmediately:(BOOL)arg2 ;
-(unsigned long long)backgroundTaskId;
-(void)beginLongBackgroundJob;
-(id)initWithIncrementalPersistenceCoordinator:(id)arg1 queue:(id)arg2 ;
-(void)_endBackgroundTask;
@end

