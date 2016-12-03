/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPhotosDataRequesting <NSObject>
@required
-(id)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 shouldHandleGIF:(BOOL)arg5 completionBlock:(/*^block*/id)arg6;
-(id)requestFullImageForAsset:(id)arg1 maxDimensions:(double)arg2 completionBlock:(/*^block*/id)arg3;
-(id)requestFullImageForAssetWithAssetId:(id)arg1 maxDimensions:(double)arg2 completionBlock:(/*^block*/id)arg3;
-(id)requestEditingPhotoImageForAsset:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)requestVideoForAsset:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)cachePhotoEditInfo:(id)arg1 forKey:(id)arg2;
-(void)removeAllCachedPhotoEditInfo;
-(id)photoEditInfoForKey:(id)arg1;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2;
-(void)stopCachingImagesForAllAssets;
-(void)setAllowsCachingHighQualityImages:(BOOL)arg1;

@end

