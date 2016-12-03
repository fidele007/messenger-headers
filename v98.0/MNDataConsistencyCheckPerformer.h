/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNDataConsistencyCheckPerforming.h>

@protocol MNDataConsistencyCheckServerDataFetching, MNDataConsistencyComparisonExecuting, OS_dispatch_queue;
@class FBAnalytics, NSObject, NSString;

@interface MNDataConsistencyCheckPerformer : NSObject <MNDataConsistencyCheckPerforming> {

	id<MNDataConsistencyCheckServerDataFetching> _serverDataFectcher;
	id<MNDataConsistencyComparisonExecuting> _comparisonExecutor;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithServerDataFetcher:(id)arg1 comparisonExecutor:(id)arg2 analytics:(id)arg3 queue:(id)arg4 ;
-(void)performDataConsistencyCheckWithClientDataset:(id)arg1 ;
-(void)_handleServerDataFetched:(id)arg1 withClientData:(id)arg2 ;
-(void)_handleServerFetchFailureWithError:(id)arg1 ;
@end

