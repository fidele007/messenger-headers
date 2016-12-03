/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncPersistenceJobHandling.h>

@protocol MNIncrementalPersistenceJobBuilding, MNIncrementalPersistenceCoordinating, OS_dispatch_queue;
@class MNMessagesSyncPersistenceDuplicateSequenceIdDelayer, MNMessagesSyncPersistenceContinuousSequenceIdDelayer, NSObject, NSString;

@interface MNMessagesSyncPersistenceJobHandler : NSObject <MNMessagesSyncPersistenceJobHandling> {

	id<MNIncrementalPersistenceJobBuilding> _persistenceJobBuilder;
	id<MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
	MNMessagesSyncPersistenceDuplicateSequenceIdDelayer* _duplicateSequenceIDDelayer;
	MNMessagesSyncPersistenceContinuousSequenceIdDelayer* _continuousSequenceIDDelayer;
	BOOL _shouldFilterIPJobsBeforeRunning;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPersistenceJobBuilder:(id)arg1 persistenceCoordinator:(id)arg2 duplicateSequenceIDDelayer:(id)arg3 continuousSequenceIDDelayer:(id)arg4 queue:(id)arg5 ;
-(void)handlePersistenceJobsWithSequenceIds:(id)arg1 ;
-(void)_runJobDescriptionsWithSequenceIds:(id)arg1 ;
-(void)_passJobsToCoordinator:(id)arg1 withSequenceId:(long long)arg2 ;
@end

