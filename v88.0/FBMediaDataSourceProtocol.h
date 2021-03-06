/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol FBMediaDataSourceProtocol <NSObject>
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
@property (nonatomic,copy,readonly) NSString * dataSourceDescription; 
@property (nonatomic,copy,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) UIImage * displayIcon; 
@property (nonatomic,readonly) long long numDataSourceAssets; 
@required
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1;
-(NSString *)dataSourceDescription;
-(id)assetIDForDataSourceIndex:(unsigned long long)arg1;
-(unsigned long long)assetTypeForIndex:(unsigned long long)arg1;
-(BOOL)DEPRECATED_assetIsAnimatedGIFForIndex:(unsigned long long)arg1;
-(BOOL)assetIsLikely360PhotoForIndex:(unsigned long long)arg1;
-(BOOL)assetIsLivePhotoForIndex:(unsigned long long)arg1;
-(id)assetDurationForIndex:(unsigned long long)arg1 calculateAccurateDurationForPHAsset:(BOOL)arg2;
-(id)assetDateForIndex:(unsigned long long)arg1;
-(id)requestImageDataForAssetAtIndex:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2;
-(void)datasourceDidBecomeInactive;
-(long long)numDataSourceAssets;
-(id)assetURLForDataSourceIndex:(unsigned long long)arg1;
-(CGSize*)assetResolutionForIndex:(unsigned long long)arg1;
-(id)thumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2;
-(id)cachedThumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2;
-(id)requestThumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3;
-(unsigned long long)shareIndexForDataSourceIndex:(unsigned long long)arg1 inSelectedItems:(id)arg2;
-(id)getExistingAssetForDataSourceIndex:(unsigned long long)arg1;
-(void)removeAssetFromDataSource:(id)arg1;
-(id)newMediaShareItemForIndex:(unsigned long long)arg1 quality:(unsigned long long)arg2;
-(id)DEPRECATED_sphericalParametersForIndex:(unsigned long long)arg1;
-(NSString *)displayTitle;
-(NSString *)dataSourceID;
-(UIImage *)displayIcon;

@end

