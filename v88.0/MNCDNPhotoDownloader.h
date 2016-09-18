/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNCDNPhotoDownloadRunnerListening.h>

@protocol MNCDNAssetDownloading;
@class MNAdaptiveImageDownloader, MNAsyncOperationTracker, NSString;

@interface MNCDNPhotoDownloader : NSObject <FBViewerContextClassProvidable, MNCDNPhotoDownloadRunnerListening> {

	id<MNCDNAssetDownloading> _assetDownloader;
	MNAdaptiveImageDownloader* _adaptiveImageDownloader;
	MNAsyncOperationTracker* _asynOperationTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)cancelDownloadForDownloadId:(id)arg1 ;
-(id)downloadPhotoForPhotoDownloadRequest:(id)arg1 ;
-(id)initWithAssetDownloader:(id)arg1 adaptiveImageDownloader:(id)arg2 ;
-(void)photoRunnerDidFinishWithPhoto:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(unsigned long long)arg3 isFinalResponse:(BOOL)arg4 ;
-(void)photoRunnerDidFailToDownloadPhotoWithError:(id)arg1 forPhotoDownloadRequest:(id)arg2 forDownloadId:(unsigned long long)arg3 ;
@end
