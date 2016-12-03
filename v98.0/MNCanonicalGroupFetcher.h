/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNThreadSummaryCacheReading;
@class FBMessagingStore, MNGroupThreadsFetchingAnalyticsLogger, NSString;

@interface MNCanonicalGroupFetcher : NSObject <MNServiceControllable, FBViewerContextClassProvidable> {

	id<MNThreadSummaryCacheReading> _threadSummaryCacheReader;
	FBMessagingStore* _messagingStore;
	MNGroupThreadsFetchingAnalyticsLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fetchCanonicalGroupForUserIds:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithThreadSummaryCacheReader:(id)arg1 messagingStore:(id)arg2 ;
-(void)_handleMessagingStoreCompletionWithUserIds:(id)arg1 threadSummariesFromDisk:(id)arg2 threadSummariesFromCache:(id)arg3 completionBlock:(/*^block*/id)arg4 error:(id)arg5 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
