/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAssetsLibraryListener.h>

@protocol FBVideoWriterDelegate;
@class AVAssetExportSession, FBCameraRollWriter, FBAssetsLibrary, FBVideoTranscoderConfig, FBVideoSegmentedTranscoder, FBUserSession, AVAsset, FBVideoAsset, NSURL, FBVideoProcessorFilterConfig, FBProfileVideoLogger, NSString;

@interface FBVideoWriter : NSObject <FBAssetsLibraryListener> {

	AVAssetExportSession* _exportSession;
	FBCameraRollWriter* _cameraRollWriter;
	FBAssetsLibrary* _assetsLibrary;
	BOOL _needToAddLatestVideo;
	FBVideoTranscoderConfig* _config;
	FBVideoSegmentedTranscoder* _transcoder;
	FBUserSession* _session;
	AVAsset* _asset;
	FBVideoAsset* _videoAsset;
	NSURL* _videoOutputURL;
	NSURL* _overlayImageURL;
	FBVideoProcessorFilterConfig* _filterConfig;
	FBProfileVideoLogger* _profileVideoLogger;
	id<FBVideoWriterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBVideoWriterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetsLibraryDidLoadAssets;
-(void)_toggleFirstVideoIfNeeded;
-(void)_saveVideoToCameraRoll:(id)arg1 useNewTranscoder:(BOOL)arg2 ;
-(void)encodeUsingTranscoder;
-(void)_exportTrimmedVideo:(id)arg1 withAudio:(BOOL)arg2 ;
-(id)initWithFilterConfig:(id)arg1 profileVideoLogger:(id)arg2 ;
-(void)saveWithModifiedAsset:(id)arg1 videoAsset:(id)arg2 session:(id)arg3 videoURL:(id)arg4 overlayImageURL:(id)arg5 filterConfig:(id)arg6 ;
-(void)setDelegate:(id<FBVideoWriterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoWriterDelegate>)delegate;
@end

