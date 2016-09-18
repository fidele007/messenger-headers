/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBFilterAssetManager, NSMutableArray, NSMutableDictionary;

@interface FBFilterAssetPack : NSObject {

	NSArray* _assets;
	FBFilterAssetManager* _assetManager;
	NSMutableArray* _fetchHandles;
	unsigned long long _assetDownloadsInFlight;
	NSMutableDictionary* _assetDownloadProgress;
	double _downloadProgress;
	unsigned long long _downloadStatus;

}

@property (assign,nonatomic) double downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadStatus;              //@synthesize downloadStatus=_downloadStatus - In the implementation block
-(void)cancelFetch;
-(void)startFetch;
-(id)initWithAssets:(id)arg1 assetManager:(id)arg2 ;
-(void)_calculatePackDownloadStatus;
-(void)_onAssetDownloadComplete:(id)arg1 ;
-(void)_onAssetDownloadProgress:(id)arg1 progress:(double)arg2 ;
-(void)_calculatePackDownloadProgress;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(unsigned long long)downloadStatus;
@end
