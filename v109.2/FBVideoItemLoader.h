/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoItemLoader <NSObject>
@required
-(id)videoPlaybackItem;
-(BOOL)isHD;
-(id)proxyURL;
-(id)representationID;
-(unsigned)availableQualitiesCount;
-(BOOL)isAbrEnabled;
-(void)invalidateOnQueue:(id)arg1;
-(id)streamFormat;
-(id)playableURL;
-(BOOL)supportsDashHD;
-(id)assetDebugDetails;
-(id)bandwidthEstimatorInfo;
-(double)loadingDuration;
-(id)loaderDebugStatus;
-(FNFDashAssetPrefetchMetadata*)assetPrefetchMetadata;
-(id)scenePath;
-(unsigned long long)state;
-(void)loadWithCompletion:(/*^block*/id)arg1;

@end

