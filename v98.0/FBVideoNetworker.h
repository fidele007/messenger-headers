/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoDownloaderDelegate.h>
#import <Messenger/FBPlaylistDownloaderDelegate.h>
#import <Messenger/FBInvalidating.h>
#import <libobjc.A.dylib/AVAssetResourceLoaderDelegate.h>
#import <Messenger/FNFAssetResourceLoaderDelegate.h>

@protocol OS_dispatch_queue, FBBlockDataCache, FBNetworkDispatch;
@class NSObject, NSMutableDictionary, NSMutableSet, FBLayeredCache, FBCache, FBExperimentManager, FBVideoInitializationTrackerContainer, FBMobileConfigContextManager, FBVideoNetworkerDataAnalytics, FBVideoPrefetchManager, FBVideoNetworkerLogger, NSString;

@interface FBVideoNetworker : NSObject <FBVideoDownloaderDelegate, FBPlaylistDownloaderDelegate, FBInvalidating, AVAssetResourceLoaderDelegate, FNFAssetResourceLoaderDelegate> {

	BOOL _enableCDNCacheStatusQuery;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _downloaderForDataKey;
	NSMutableDictionary* _downloaderForRequest;
	NSMutableDictionary* _listeners;
	NSMutableDictionary* _listenersForResourceLoaderConnections;
	NSMutableSet* _playingVideos;
	NSMutableDictionary* _playlistForURL;
	id<FBBlockDataCache> _blockDataCache;
	FBLayeredCache* _playlistCache;
	BOOL _invalidated;
	FBCache* _requestPriorityMemorization;
	FBExperimentManager* _experimentManager;
	FBVideoInitializationTrackerContainer* _videoInitializationTrackerContainer;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	BOOL _shouldMarkVideo;
	FBVideoNetworkerDataAnalytics* _dataAnalytics;
	FBVideoPrefetchManager* _prefetchManager;
	id<FBNetworkDispatch> _networkDispatcher;
	FBVideoNetworkerLogger* _logger;

}

@property (nonatomic,readonly) FBVideoNetworkerDataAnalytics * dataAnalytics;              //@synthesize dataAnalytics=_dataAnalytics - In the implementation block
@property (nonatomic,readonly) FBVideoPrefetchManager * prefetchManager;                   //@synthesize prefetchManager=_prefetchManager - In the implementation block
@property (nonatomic,readonly) id<FBNetworkDispatch> networkDispatcher;                    //@synthesize networkDispatcher=_networkDispatcher - In the implementation block
@property (nonatomic,readonly) FBVideoNetworkerLogger * logger;                            //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id<FBNetworkDispatch>)networkDispatcher;
-(void)resourceLoader:(id)arg1 loadRequest:(id)arg2 ;
-(id)prepareDownloaderAndGetProxyURLforURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(long long)arg4 scenePath:(id)arg5 playRequested:(BOOL)arg6 analyticsTags:(id)arg7 ;
-(id)playlistUsedForPrefetching:(id)arg1 ;
-(void)removeVideoInitializationTracker:(id)arg1 ;
-(id)videoInitializationTrackerWithVideoID:(id)arg1 ;
-(void)markVideo:(id)arg1 asRequestedPlaying:(BOOL)arg2 ;
-(FBVideoNetworkerDataAnalytics *)dataAnalytics;
-(void)resourceLoader:(id)arg1 cancelLoadingRequest:(id)arg2 ;
-(void)clearAllVideosCache:(/*^block*/id)arg1 ;
-(void)playlistDownloader:(id)arg1 didReceiveData:(id)arg2 ;
-(void)playlistDownloader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)playlistDownloader:(id)arg1 didFinishWithPlaylist:(id)arg2 cacheAllowed:(BOOL)arg3 ;
-(void)videoDownloaderDidRedirect:(id)arg1 ;
-(void)videoDownloaderDidFinish:(id)arg1 error:(id)arg2 ;
-(void)videoDownloader:(id)arg1 didReceiveData:(id)arg2 isPrefetching:(BOOL)arg3 isFetchingFirstChunk:(BOOL)arg4 ;
-(id)initWithSession:(id)arg1 blockDataCache:(id)arg2 playlistCache:(id)arg3 logger:(id)arg4 ;
-(void)_prepareForVideoDownloadWithUrl:(id)arg1 proxyURL:(id)arg2 scenePath:(id)arg3 playRequested:(BOOL)arg4 limitRequestLength:(BOOL)arg5 analyticsTags:(id)arg6 ;
-(void)_handlePlayerRequest:(id)arg1 analyticsTags:(id)arg2 ;
-(void)_handleCloseRequest:(id)arg1 shouldLog:(BOOL)arg2 error:(id)arg3 cancelImmediately:(BOOL)arg4 ;
-(id)_buildDownloaderWithDataKey:(id)arg1 url:(id)arg2 prefetchURL:(id)arg3 videoID:(id)arg4 scenePath:(id)arg5 priority:(long long)arg6 limitRequestLength:(BOOL)arg7 bypassCaching:(BOOL)arg8 enablePrefetchLookupWhenBypassCache:(BOOL)arg9 isAudio:(BOOL)arg10 analyticsTags:(id)arg11 ;
-(BOOL)resourceLoader:(id)arg1 hasPrefetchedDataForUrl:(id)arg2 ;
-(void)setScenePath:(id)arg1 andPriority:(long long)arg2 forVideoID:(id)arg3 ;
-(void)clearScenePathAndPriorityforVideoID:(id)arg1 ;
-(BOOL)hasDownloaderForDataKey:(id)arg1 ;
-(BOOL)hasNonPrefetchDataForDataKey:(id)arg1 url:(id)arg2 videoID:(id)arg3 definition:(long long)arg4 length:(unsigned long long)arg5 ;
-(BOOL)hasInitialDataForVideoID:(id)arg1 videoURL:(id)arg2 ;
-(id)requestPriorityAttributesForVideoId:(id)arg1 ;
-(BOOL)hasPlaylistCachedForVideoID:(id)arg1 ;
-(unsigned long long)currentDownloadCount;
-(void)cachePlaylist:(id)arg1 forVideoID:(id)arg2 ;
-(id)_extractDownloaderFromUrl:(id)arg1 ;
-(FBVideoPrefetchManager *)prefetchManager;
-(void)invalidate;
-(BOOL)isValid;
-(FBVideoNetworkerLogger *)logger;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2 ;
-(BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2 ;
-(void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)getDispatchQueue;
@end

