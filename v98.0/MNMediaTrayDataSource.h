/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MNMediaTrayDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * loadedAssetIds; 
@property (assign,nonatomic,__weak) id<MNMediaTrayDataSourceDelegate> delegate; 
@required
-(void)requestPermissionAndLoadAssetsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2;
-(void)loadAssets;
-(BOOL)isVideoAssetAtIndex:(long long)arg1;
-(id)videoURLAtIndex:(long long)arg1;
-(void)loadAssetsAtIndexes:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)areAssetsLoaded;
-(BOOL)isPhotoAssetAtIndex:(long long)arg1;
-(NSArray *)loadedAssetIds;
-(id)videoDurationAtIndex:(long long)arg1;
-(id)assetDateAtIndex:(long long)arg1;
-(id)requestThumbnailAtIndex:(long long)arg1 thumbnailOption:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)requestEditImageAtIndex:(long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3;
-(CGSize*)assetResolutionAtIndex:(long long)arg1;
-(long long)attachmentSendingSource;
-(void)setDelegate:(id)arg1;
-(id<MNMediaTrayDataSourceDelegate>)delegate;
-(id)dataSourceIdentifier;
-(BOOL)needsReload;

@end
