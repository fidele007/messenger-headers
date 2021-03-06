/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSMutableDictionary, NSObject, FBTimer, NSString, FBAnalytics;

@interface FBAnalyticsPrefetcherLogger : NSObject {

	mutex _inFlightPrefetchesLock;
	NSMutableDictionary* _inFlightPrefetches;
	NSMutableDictionary* _pendingEvents;
	NSObject*<OS_dispatch_queue> _eventQueue;
	FBTimer* _flushTimer;
	NSString* _scenario;
	NSString* _queryName;
	NSString* _moduleName;
	FBAnalytics* _analytics;
	NSString* _analyticsUUID;

}
-(id)initWithScenario:(id)arg1 queryName:(id)arg2 moduleName:(id)arg3 analytics:(id)arg4 analyticsUUID:(id)arg5 ;
-(void)_flushPendingEvents;
-(void)_queueEvent:(id)arg1 cacheKey:(id)arg2 ;
-(BOOL)isPrefetchInFlight:(id)arg1 ;
-(unsigned)_prefetchBatchId;
-(void)_prefetchSucceeded:(id)arg1 batchId:(unsigned)arg2 ;
-(NSRange)_finishPrefetch:(id)arg1 ;
-(void)_queueEvent:(id)arg1 cacheKey:(id)arg2 withTimeInterval:(NSRange)arg3 withBytesCount:(id)arg4 failureReason:(id)arg5 prefetchBatchId:(id)arg6 ;
-(void)prefetchFailed:(id)arg1 withReason:(id)arg2 ;
-(void)prefetchBatchFailed:(id)arg1 withReason:(id)arg2 ;
-(void)_queueEvent:(id)arg1 cacheKey:(id)arg2 eventParams:(id)arg3 ;
-(id)initWithScenario:(id)arg1 queryName:(id)arg2 moduleName:(id)arg3 analytics:(id)arg4 ;
-(void)cacheHit:(id)arg1 ;
-(void)cacheMiss:(id)arg1 ;
-(void)cacheStaleHit:(id)arg1 ;
-(void)couldPrefetch:(id)arg1 ;
-(void)prefetchStarted:(id)arg1 ;
-(void)prefetchBatchSucceeded:(id)arg1 ;
-(void)prefetchSucceeded:(id)arg1 ;
-(void)prefetchSucceeded:(id)arg1 bytesCount:(unsigned long long)arg2 ;
-(void)prefetchCanceled:(id)arg1 ;
-(void)prefetchBatchCanceled:(id)arg1 ;
-(void)prefetchFailed:(id)arg1 ;
-(void)prefetchFailed:(id)arg1 withError:(id)arg2 ;
-(void)prefetchBatchFailed:(id)arg1 withError:(id)arg2 ;
-(void)prefetchBatchFailed:(id)arg1 ;
@end

