/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDashDataLoaderDelegate, OS_dispatch_queue;
@class FNFAssetResourceLoader, FNFDataBlockDistributor, NSObject, NSString, FNFDashDownloadTracker, NSURL, FNFDashPlaylistData;

@interface FNFDashDataLoader : NSObject {

	id<FNFDashDataLoaderDelegate> _delegate;
	FNFAssetResourceLoader* _resourceLoader;
	FNFDataBlockDistributor* _dataBlockDistributor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _track;
	NSString* _representationId;
	FNFDashDownloadTracker* _downloadTracker;
	BOOL _fetchedInitURL;
	NSURL* _cachedSegmentURL;
	FNFDashPlaylistData* _playlistData;
	unsigned long long _fileSize;
	BOOL _prefetchFirstDataSegment;
	BOOL _enablePrefetchLookupWhenBypassCache;
	BOOL _async;

}
-(void)resetWithDataBlockDistributor:(id)arg1 ;
-(void)cancelDiskCache;
-(id)initWithPlaylistData:(id)arg1 downloadTracker:(id)arg2 resourceLoader:(id)arg3 dataBlockDistributor:(id)arg4 enablePrefetchLookupWhenBypassCache:(BOOL)arg5 track:(long long)arg6 representationId:(id)arg7 ;
-(void)_forTestingMakeSynchronous;
-(BOOL)fragmentedIsFullyDownloaded;
-(void)forceFetchIfNeeded;
-(float)approxDiskCachedSecondsBasedOnBitrate;
-(float)approxInMemoryFetchedSecondsBasedOnBitrate;
-(BOOL)diskCacheFetchInProgress;
-(float)diskCachePercentage;
-(unsigned long long)fetchedOffset;
-(void)diskCacheToOffset:(unsigned long long)arg1 ;
-(void)fetchToOffset:(unsigned long long)arg1 ;
-(void)fetchFirstRequestForSeconds:(unsigned)arg1 ;
-(void)seekForwardToOffset:(unsigned long long)arg1 ;
-(void)_fetchNextSegment;
-(void)_fetchNextFragmentedRangeAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 forDiskCache:(BOOL)arg3 ;
-(void)cancelRequest:(id)arg1 resourceLoader:(id)arg2 ;
-(void)_handleInlineInitSegment;
-(void)_fetchUrlRequest:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 firstSegment:(BOOL)arg4 forDiskCache:(BOOL)arg5 ;
-(void)_prefetchSegmentedUrlRequest:(id)arg1 ;
-(void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3 ;
-(void)_dataFinished:(id)arg1 dataRequest:(id)arg2 contentInfo:(id)arg3 loadingRequest:(id)arg4 ;
-(void)_dataCallbackHelper:(id)arg1 reqOffset:(unsigned long long)arg2 dataRequest:(id)arg3 forDiskCache:(BOOL)arg4 ;
-(void)_requestFinishCallbackHelper:(id)arg1 request:(id)arg2 forDiskCache:(BOOL)arg3 contentRequest:(id)arg4 dataRequest:(id)arg5 ;
-(void)_setUrlIndex:(int)arg1 ;
-(int)unfetchedSegmentCount;
-(id)segmentedInitUrl;
-(id)segmentedUrl;
-(int)segmentedCurrentRequestOffset;
-(int)indexToFetchTo;
-(void)_forTestingBypassPrefetch;
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)playlistData;
-(void)cancelRequests;
-(id)resourceLoader;
@end

