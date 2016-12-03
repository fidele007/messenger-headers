/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, MNImageCache, MNImageUploadCandidateStore, MNAdaptiveImageDownloader, FBAnalytics, MNCDNPhotoDownloader;

@interface MNImageRequester : NSObject {

	FBUserSession* _userSession;
	MNImageCache* _imageCache;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	FBAnalytics* _analytics;
	MNCDNPhotoDownloader* _cdnPhotoDownloader;

}
-(id)fetchImageFromPlainPhotoSource:(id)arg1 size:(int)arg2 imageFlags:(unsigned long long)arg3 analyticsTags:(id)arg4 queue:(id)arg5 success:(/*^block*/id)arg6 failure:(/*^block*/id)arg7 ;
-(id)initWithUserSession:(id)arg1 imageCache:(id)arg2 imageUploadCandidateStore:(id)arg3 adaptiveImageDownloader:(id)arg4 analytics:(id)arg5 cdnPhotoDownloader:(id)arg6 ;
-(void)_cancelImageDownloadWithImageRequest:(id)arg1 ;
-(BOOL)_performImageCacheWithRequest:(id)arg1 photoSource:(id)arg2 callbackQueue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(BOOL)_tryLoadImageFromUploadCandidateStoreWithPlainPhotoSource:(id)arg1 size:(int)arg2 queue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 fallback:(/*^block*/id)arg6 ;
-(id)_downloadImageFromCDNDownloaderWithImageRequest:(id)arg1 photoId:(id)arg2 photoSource:(id)arg3 queue:(id)arg4 success:(/*^block*/id)arg5 failure:(/*^block*/id)arg6 ;
-(id)_downloadImageWithImageRequest:(id)arg1 photoSource:(id)arg2 queue:(id)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)cancelRequest:(id)arg1 ;
@end

