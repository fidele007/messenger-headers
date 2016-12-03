/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RTCVideoFilterHandler.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <Messenger/FBRtcExpressionToolsModelLoaderDelegate.h>

@protocol FBWebRTCVideoFilterControllerDelegate;
@class FBUserSession, NSArray, FBFilterAssetDownloader, NSMutableDictionary, FBWebRTCVideoExpressionExperimentContext, FBVideoProcessor, FBMediaCreativeToolsModel, FBRtcExpressionToolsModelLoader, NSIndexPath, NSString;

@interface FBWebRTCVideoFilterController : NSObject <RTCVideoFilterHandler, UICollectionViewDataSource, FBRtcExpressionToolsModelLoaderDelegate> {

	FBUserSession* _userSession;
	NSArray* _masks;
	NSArray* _cellModels;
	FBFilterAssetDownloader* _assetDownloader;
	NSMutableDictionary* _assetPacks;
	FBWebRTCVideoExpressionExperimentContext* _videoExpressionExperimentContext;
	FBVideoProcessor* _videoProcessor;
	FBMediaCreativeToolsModel* _creativeToolsModel;
	FBRtcExpressionToolsModelLoader* _expressionToolsModelLoader;
	BOOL _msqrdEnabled;
	NSIndexPath* _currentFilterIndexPath;
	BOOL _canUseFilters;
	unsigned long long _predownloadType;
	unsigned long long _lastDownloadUpdateTimestamp;
	BOOL _useMsqrdGraphicsEngine;
	unsigned long long _filterStartedTimeStamp;
	NSString* _lastlyUsedFilterId;
	NSString* _lastlyUsedFilterName;
	double _filteredDuration;
	id<FBWebRTCVideoFilterControllerDelegate> _delegate;

}

@property (nonatomic,readonly) double filteredDuration; 
@property (assign,nonatomic,__weak) id<FBWebRTCVideoFilterControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canUseFilters;                                                   //@synthesize canUseFilters=_canUseFilters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureCollectionViewForDataSource:(id)arg1 ;
-(double)filteredDuration;
-(void)mediaCreativeToolsModelLoader:(id)arg1 successfullyLoadedModel:(id)arg2 ;
-(void)_setCurrentFilter:(id)arg1 ;
-(id)_assetPackForIndexPath:(id)arg1 ;
-(BOOL)_unzipFileAtPath:(id)arg1 ;
-(id)_ensureUnzippedFolderPathForMaskPackagedFileAsset:(id)arg1 ;
-(void)setCanUseFilters:(BOOL)arg1 ;
-(id)_indexPathForAssetPack:(id)arg1 ;
-(void)_filterDidUpdateDownloadProgress:(double)arg1 forFilterAtIndexPath:(id)arg2 ;
-(void)_filterDidBecomeUsableAtIndexPath:(id)arg1 ;
-(BOOL)_isAllAssetsDownloaded;
-(void)_reloadCurrentSelection;
-(void)cameraCaptureConfigurationChangedForCaptureSession:(id)arg1 ;
-(opaqueCMSampleBufferRef)applyFilterToVideo:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithSession:(id)arg1 withExperimentContext:(id)arg2 withNetworkAvailability:(id)arg3 withScenePath:(id)arg4 withDelegate:(id)arg5 ;
-(BOOL)isFilterUsableAtIndex:(id)arg1 ;
-(id)uniqueIdentifierAtIndex:(id)arg1 ;
-(void)makeFilterUsableAtIndex:(id)arg1 ;
-(id)getCurrentIndexPath;
-(BOOL)canUseFilters;
-(void)setDelegate:(id<FBWebRTCVideoFilterControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCVideoFilterControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)didSelectItemAtIndex:(id)arg1 ;
-(BOOL)isFilterEnabled;
@end

