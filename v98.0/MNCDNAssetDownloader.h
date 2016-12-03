/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNCDNAssetDownloading.h>
#import <Messenger/MNCDNAssetDownloadRunnerRetrying.h>

@protocol OS_dispatch_queue;
@class NSObject, MNCDNAssetURLResolver, MNCDNAssetURLCache, MNCDNAssetDownloadTracker, FBAnalytics, NSString;

@interface MNCDNAssetDownloader : NSObject <MNCDNAssetDownloading, MNCDNAssetDownloadRunnerRetrying> {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNAssetURLResolver* _urlResolver;
	MNCDNAssetURLCache* _urlCache;
	MNCDNAssetDownloadTracker* _downloadTracker;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadAssetWithIdentifier:(id)arg1 withDownloadRunner:(id)arg2 fulfillmentPolicy:(unsigned long long)arg3 downloadId:(unsigned long long)arg4 ;
-(void)cancelDownloadForAssetDownloadId:(unsigned long long)arg1 ;
-(id)initWithURLResolver:(id)arg1 URLCache:(id)arg2 assetDownloadTracker:(id)arg3 queue:(id)arg4 analytics:(id)arg5 ;
-(void)assetDownloadRunner:(id)arg1 didFailWithError:(id)arg2 whileDownloadingAssetWithDownloadId:(unsigned long long)arg3 withFailedUrl:(id)arg4 retryBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)assetDownloadRunner:(id)arg1 didDownloadAssetWithDownloadId:(unsigned long long)arg2 fromUrl:(id)arg3 ;
-(void)_assetDownloadRunner:(id)arg1 downloadAssetAtURL:(id)arg2 withDownloadId:(unsigned long long)arg3 ;
-(void)_failedToInitiallyResolveURLForDownloadId:(unsigned long long)arg1 withError:(id)arg2 ;
-(BOOL)_shouldAssetDownloadRunnerRetryAfterError:(id)arg1 forDownloadId:(unsigned long long)arg2 ;
-(void)_handleShouldAssetDownloadRunnerRetryForDownloadId:(unsigned long long)arg1 shouldRetry:(BOOL)arg2 forError:(id)arg3 withFailedUrl:(id)arg4 retryBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)_retryAssetDownloadForDownloadId:(unsigned long long)arg1 retryBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)_assetDownloadFailedForDownloadId:(unsigned long long)arg1 withFailureBlock:(/*^block*/id)arg2 error:(id)arg3 ;
@end
