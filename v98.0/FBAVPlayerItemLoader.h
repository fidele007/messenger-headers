/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBVideoItemLoader.h>

@protocol OS_dispatch_queue, FNFAVPlayerItem, FNFAVAsset;
@class FBVideoNetworker, NSString, FBVideoPlayerItemExpirationHelper, FBUserSession, FNFExperimentContext, FBVideoPlaybackItem, FBScenePath, NSURL, NSSet, NSObject, NSError;

@interface FBAVPlayerItemLoader : NSObject <FBVideoItemLoader> {

	FBVideoNetworker* _videoNetworker;
	NSString* _trackerID;
	FBVideoPlayerItemExpirationHelper* _expirationHelper;
	unsigned long long _assetDeallocTimeout;
	FBUserSession* _session;
	BOOL _fnfEnabled;
	BOOL _liveDashEnabled;
	BOOL _vodDashEnabled;
	FNFExperimentContext* _fnfExperimentContext;
	double _loadRequestTime;
	FNFDashAssetPrefetchMetadata _assetPrefetchMetadata;
	BOOL _bypassVideoNetworker;
	FBVideoPlaybackItem* _videoPlaybackItem;
	FBScenePath* _scenePath;
	long long _playableVideoNetworkerDefinition;
	unsigned long long _state;
	NSURL* _proxyURL;
	NSURL* _playableURL;
	BOOL _HD;
	BOOL _isSpherical;
	NSSet* _analyticsTags;
	/*^block*/id _warningHandler;
	NSObject*<OS_dispatch_queue> _performer;
	id<FNFAVPlayerItem> _playerItem;
	NSError* _error;
	id<FNFAVAsset> _asset;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> performer;              //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) id<FNFAVPlayerItem> playerItem;                      //@synthesize playerItem=_playerItem - In the implementation block
@property (nonatomic,retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<FNFAVAsset> asset;                                //@synthesize asset=_asset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)videoPlaybackItem;
-(id)streamFormat;
-(id)assetDebugDetails;
-(id)bandwidthEstimatorInfo;
-(id)scenePath;
-(void)setPerformer:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)performer;
-(void)_loadNonExpiredVideoWithPlayerItemBuilder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_urlSupportsResourceLoader:(id)arg1 ;
-(void)_loadAssetValuesAsynchronouslyWithRetries:(unsigned long long)arg1 playerItemBuilder:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_itemDidWarn:(id)arg1 ;
-(unsigned)availableQualitiesCount;
-(BOOL)isAbrEnabled;
-(void)loadWithPlayerItemBuilder:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateOnQueue:(id)arg1 ;
-(double)loadingDuration;
-(id)loaderDebugStatus;
-(id)representationID;
-(FNFDashAssetPrefetchMetadata)assetPrefetchMetadata;
-(id)proxyURL;
-(id)playableURL;
-(BOOL)isHD;
-(id)initWithVideoPlaybackItem:(id)arg1 HD:(BOOL)arg2 fnfEnabled:(BOOL)arg3 videoNetworker:(id)arg4 scenePath:(id)arg5 performer:(id)arg6 trackerID:(id)arg7 bypassVideoNetworker:(BOOL)arg8 session:(id)arg9 analyticsTags:(id)arg10 warningHandler:(/*^block*/id)arg11 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id<FNFAVAsset>)asset;
-(void)setAsset:(id<FNFAVAsset>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id<FNFAVPlayerItem>)playerItem;
-(void)setPlayerItem:(id<FNFAVPlayerItem>)arg1 ;
@end

