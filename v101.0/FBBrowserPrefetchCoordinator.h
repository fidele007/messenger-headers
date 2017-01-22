/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableDictionary, NSObject, NSOperationQueue, FBBrowserPrefetchExperimentContext, NSMutableArray;

@interface FBBrowserPrefetchCoordinator : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _prefetchTasksInProgress;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSOperationQueue* _downloadQueue;
	FBBrowserPrefetchExperimentContext* _experimentContext;
	NSMutableArray* _urlsNotPrefetchable;
	NSMutableDictionary* _prefetchTokens;

}
+(BOOL)isPrefetchingAvailable;
+(void)addAcceptHeader:(id)arg1 ;
+(id)acceptHeaderValueForHtmlAndDefault;
-(id)_diskCache;
-(void)prefetchAndStoreDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 delay:(long long)arg3 ;
-(void)cancelPrefetchForURL:(id)arg1 ;
-(void)getPrefetchedDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prefetchMainFrameForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getCachedPrefetchDataForMainFrameWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addAcceptHeaderIfSupport:(id)arg1 ;
-(id)_cacheKeyForURL:(id)arg1 ;
-(unsigned long long)_cacheValidDurationForCacheHeader:(id)arg1 ;
-(void)_downloadResponseForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prefetchAndCacheDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_getPrefetchDataFromCache:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_decodedURLForURL:(id)arg1 ;
-(void)_prefetchDataIfRequiredForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
