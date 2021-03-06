/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMediaDataSourceProtocol.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSMutableDictionary, NSArray, FBAssetThumbnailResourceManager, NSObject, FBSerialOperationQueue, PHCachingImageManager, UIImage, NSString;

@interface FBAssetsRankedDataSource : NSObject <FBMediaDataSourceProtocol> {

	FBUserSession* _session;
	NSMutableDictionary* _assetsDataSource;
	NSArray* _rankedFBAssets;
	long long _dataSourceAssetCount;
	FBAssetThumbnailResourceManager* _resourceManager;
	NSObject*<OS_dispatch_queue> _rankedDatasourceyWorkQueue;
	FBSerialOperationQueue* _rankedDatasourceQueue;
	PHCachingImageManager* _imageManager;
	UIImage* _displayIcon;

}

@property (nonatomic,readonly) long long numDataSourceAssets; 
@property (nonatomic,readonly) long long dataSourceAssetCount; 
@property (nonatomic,copy,readonly) NSString * dataSourceDescription; 
@property (nonatomic,copy,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) UIImage * displayIcon;                              //@synthesize displayIcon=_displayIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dataSourceID; 
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1 ;
-(NSString *)dataSourceDescription;
-(long long)numDataSourceAssets;
-(void)removeAssetFromDataSource:(id)arg1 ;
-(unsigned long long)assetTypeForIndex:(unsigned long long)arg1 ;
-(BOOL)DEPRECATED_assetIsAnimatedGIFForIndex:(unsigned long long)arg1 ;
-(id)assetIDForDataSourceIndex:(unsigned long long)arg1 ;
-(BOOL)assetIsLikely360PhotoForIndex:(unsigned long long)arg1 ;
-(BOOL)assetIsLivePhotoForIndex:(unsigned long long)arg1 ;
-(id)assetDurationForIndex:(unsigned long long)arg1 calculateAccurateDurationForPHAsset:(BOOL)arg2 ;
-(id)assetDateForIndex:(unsigned long long)arg1 ;
-(id)assetForIndex:(long long)arg1 ;
-(id)requestImageDataForAssetAtIndex:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)datasourceDidBecomeInactive;
-(id)assetURLForDataSourceIndex:(unsigned long long)arg1 ;
-(CGSize)assetResolutionForIndex:(unsigned long long)arg1 ;
-(id)thumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 ;
-(id)cachedThumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 ;
-(id)requestThumbnailForAssetAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)shareIndexForDataSourceIndex:(unsigned long long)arg1 inSelectedItems:(id)arg2 ;
-(id)getExistingAssetForDataSourceIndex:(unsigned long long)arg1 ;
-(id)newMediaShareItemForIndex:(unsigned long long)arg1 quality:(unsigned long long)arg2 ;
-(id)DEPRECATED_sphericalParametersForIndex:(unsigned long long)arg1 ;
-(long long)dataSourceAssetCount;
-(id)cachedThumbnailAtIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 ;
-(id)initWithAssets:(id)arg1 session:(id)arg2 ;
-(void)sphericalParametersForIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)displayTitle;
-(void)clear;
-(NSString *)dataSourceID;
-(UIImage *)displayIcon;
@end

