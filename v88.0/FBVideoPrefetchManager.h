/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPrefetchVideoDownloaderDelegate.h>

@protocol OS_dispatch_queue;
@class FBOrderedDictionary, NSMutableDictionary, FBExperimentManager, NSObject, FBUserSession, FBLayeredCache, NSString;

@interface FBVideoPrefetchManager : NSObject <FBPrefetchVideoDownloaderDelegate> {

	FBOrderedDictionary* _queuedPrefetchRequests;
	NSMutableDictionary* _prefetchTimes;
	unsigned long long _prefetchRequestsInProgress;
	unsigned long long _maxPrefetchRequestsInProgress;
	FBExperimentManager* _experimentManager;
	NSObject*<OS_dispatch_queue> _scheduleQueue;
	FBUserSession* _session;
	FBLayeredCache* _prefetchCache;
	BOOL _enabledCacheStatusQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prefetchDownloader:(id)arg1 didReceiveData:(id)arg2 ;
-(void)prefetchDownloader:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)prefetchDownloaderDidCancelOrFail:(id)arg1 ;
-(id)initWithSession:(id)arg1 scheduleQueue:(id)arg2 ;
-(id)videoPrefetchedDataIfPresentInPrefetchCacheWithDataKey:(id)arg1 ;
-(id)createPrefetchCache:(id)arg1 ;
-(BOOL)_isPrefetchNeededVideoURL:(id)arg1 videoID:(id)arg2 dataKey:(id)arg3 definition:(long long)arg4 bytesToPrefetch:(unsigned long long)arg5 ;
-(void)_dispatchPrefetchIfPossible;
-(void)_addPrefetchWithVideoURL:(id)arg1 videoID:(id)arg2 definition:(long long)arg3 scenePath:(id)arg4 bytesToPrefetch:(unsigned long long)arg5 useQueue:(BOOL)arg6 ;
-(void)addPrefetchWithVideoURL:(id)arg1 videoID:(id)arg2 definition:(long long)arg3 scenePath:(id)arg4 bytesToPrefetch:(unsigned long long)arg5 useQueue:(BOOL)arg6 ;
-(id)getPrefetcherIfPossibleWithDataKey:(id)arg1 ;
-(void)clearCache;
@end

