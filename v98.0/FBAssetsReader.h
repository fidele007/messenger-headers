/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class FBTempAssetsManager, FBAssetThumbnailResourceManager, FBSerialOperationQueue, NSObject, PHCachingImageManager;

@interface FBAssetsReader : NSObject {

	FBTempAssetsManager* _tempAssetsManager;
	FBAssetThumbnailResourceManager* _resourceManager;
	FBSerialOperationQueue* _assetsLibraryQueue;
	NSObject*<OS_dispatch_queue> _assetsLibraryWorkQueue;
	PHCachingImageManager* _imageManager;

}
+(void)setFullscreenImageSizeForPHAssets:(double)arg1 ;
+(id)sharedInstance;
-(id)requestThumbnailForAsset:(id)arg1 option:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)requestImageDataAndUTIForAsset:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(id)thumbnailForAsset:(id)arg1 option:(unsigned long long)arg2 ;
-(void)fetchFullMetadataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)isValidAssetURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchFullResolutionImageDataForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)fetchLivePhotoForURL:(id)arg1 targetDimension:(long long)arg2 networkAccessAllowed:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(id)cachedThumbnailForAsset:(id)arg1 option:(unsigned long long)arg2 ;
-(void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 targetDimension:(long long)arg3 completionBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 targetDimension:(long long)arg3 networkAccessAllowed:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(id)fetchThumbnailSynchronouslyForAsset:(id)arg1 ;
-(id)fetchAspectRatioThumbnailSynchronouslyForAsset:(id)arg1 ;
-(void)fetchAndParseImageDataForPHAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)DEPRECATED_fetchAndParseImageDataForPHAssetSynchronously:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_imageWithICloudInfoForAsset:(id)arg1 mode:(unsigned long long)arg2 targetDimension:(long long)arg3 networkAccessAllowed:(BOOL)arg4 ;
-(void)fetchAssetForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)_imageWithICloudInfoForPHAsset:(id)arg1 targetSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 rotateToUpOrientation:(BOOL)arg4 ;
-(void)_DEPRECATED_fetchAndParseImageDataForPHAsset:(id)arg1 fetchSynchronously:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchAspectRatioThumbnailSynchronouslyForAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)fetchLivePhotoVideoForURL:(id)arg1 toURL:(id)arg2 networkAccessAllowed:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)fetchAssetFileURLForPHAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cachingImageManager;
-(id)initSharedInstance;
@end

