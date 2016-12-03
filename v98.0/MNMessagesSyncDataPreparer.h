/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncDataPreparing.h>
#import <Messenger/MNMessagesSyncDataPreparerErrorHandlingListening.h>

@protocol MNMessagesSyncThreadPreparationJobPreprocessing, MNMessagesSyncThreadPrepareJobExecuting, MNMessagesSyncDeltaWithMetadataStoring, MNMessagesSyncDataPreparerErrorHandling, OS_dispatch_queue, MNMessagesSyncDataPreparingDelegate;
@class NSObject, NSString;

@interface MNMessagesSyncDataPreparer : NSObject <MNMessagesSyncDataPreparing, MNMessagesSyncDataPreparerErrorHandlingListening> {

	id<MNMessagesSyncThreadPreparationJobPreprocessing> _jobPreprocessor;
	id<MNMessagesSyncThreadPrepareJobExecuting> _jobExecutor;
	id<MNMessagesSyncDeltaWithMetadataStoring> _deltaMetadataStorer;
	id<MNMessagesSyncDataPreparerErrorHandling> _errorHandler;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNMessagesSyncDataPreparingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMessagesSyncDataPreparingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithJobExecutor:(id)arg1 jobPreprocessor:(id)arg2 deltaMetadataStorer:(id)arg3 errorHandler:(id)arg4 queue:(id)arg5 ;
-(void)prepareDataForDeltasWithMetadata:(id)arg1 ;
-(void)_handlePreprocessedJobs:(id)arg1 ;
-(void)_handleCompletedJobs:(id)arg1 ;
-(void)_handleCompletedJobs:(id)arg1 failedJobs:(id)arg2 ;
-(void)_handleFailedJobs:(id)arg1 ;
-(void)errorHandlerDidSuccessfullyPrepareDataForJobs:(id)arg1 ;
-(void)setDelegate:(id<MNMessagesSyncDataPreparingDelegate>)arg1 ;
-(id<MNMessagesSyncDataPreparingDelegate>)delegate;
@end
