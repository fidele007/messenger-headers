/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadClientUpdateRunning.h>

@protocol MNSecureThreadSummaryUpdateRunning, MNThreadSummaryClientUpdateRunListening, MNThreadClientUpdateSkipRunDeciding, MNClientUpdateSkipRunDeciderOptimisiticStorageReading, MNAuthenticationManager, OS_dispatch_queue;
@class MNThreadMarkUpdateHandler, MNSimpleGraphRequestUpdateHandler, MNThreadCustomizationUpdateHandler, MNThreadGraphQLMutationRunner, NSObject, NSString;

@interface MNThreadClientUpdateRunner : NSObject <MNThreadClientUpdateRunning> {

	MNThreadMarkUpdateHandler* _threadMarkUpdateHandler;
	MNSimpleGraphRequestUpdateHandler* _simpleGraphRequestHandler;
	MNThreadCustomizationUpdateHandler* _threadCustomizationUpdateHandler;
	id<MNSecureThreadSummaryUpdateRunning> _secureThreadUpdateRunner;
	MNThreadGraphQLMutationRunner* _graphQLMutationRunner;
	id<MNThreadSummaryClientUpdateRunListening> _summaryUpdateRunListener;
	id<MNThreadClientUpdateSkipRunDeciding> _updateSkipDecider;
	id<MNClientUpdateSkipRunDeciderOptimisiticStorageReading> _optimisticStorageReader;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_filterOutInvalidUpdates:(id)arg1 jobListener:(id)arg2 ;
-(id)_filterOutAppliedUpdates:(id)arg1 jobListener:(id)arg2 ;
-(void)_performRun:(id)arg1 jobListener:(id)arg2 ;
-(void)runBatchClientUpdates:(id)arg1 jobListener:(id)arg2 ;
-(void)runClientUpdate:(id)arg1 jobListener:(id)arg2 ;
-(id)initWithThreadMarkHandler:(id)arg1 simpleGraphRequestHandler:(id)arg2 threadCustomizationUpdateHandler:(id)arg3 secureThreadUpdateRunner:(id)arg4 graphQLMutationRunner:(id)arg5 updateRunListener:(id)arg6 updateSkipDecider:(id)arg7 optimisticStorageReader:(id)arg8 authManager:(id)arg9 queue:(id)arg10 ;
@end

