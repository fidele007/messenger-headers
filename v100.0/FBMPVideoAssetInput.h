/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>
#import <Messenger/FBMPInput.h>

@protocol OS_dispatch_queue;
@class CADisplayLink, AVPlayerItem, AVPlayerItemVideoOutput, AVPlayer, AVAsset, UIImage, FBVideoProcessor, NSObject, FBMPBaseProducerPort, NSString;

@interface FBMPVideoAssetInput : NSObject <AVPlayerItemOutputPullDelegate, FBMPInput> {

	mutex _displayLinkLock;
	CADisplayLink* _displayLink;
	AVPlayerItem* _playerItem;
	mutex _videoOutputLock;
	AVPlayerItemVideoOutput* _videoOutput;
	AVPlayer* _videoPlayer;
	BOOL _muted;
	AVAsset* _asset;
	UIImage* _thumbnail;
	FBMPVideoAssetInputConfiguration _configuration;
	float _rotationFromVideo;
	FBVideoProcessor* _imageRotationProcessor;
	BOOL _sessionStarted;
	NSObject*<OS_dispatch_queue> _videoOutputQueue;
	FBMPBaseProducerPort* _videoPort;
	BOOL _videoPortConnected;
	unsigned long long _videoDataCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_videoOutput;
-(void)_displayLinkCallback:(id)arg1 ;
-(void)setDisplayFPS:(long long)arg1 ;
-(id)initWithAsset:(id)arg1 thumbnail:(id)arg2 configuration:(FBMPVideoAssetInputConfiguration)arg3 ;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(id)imageRotationProcessor;
-(void)_setDisplayLinkPaused:(BOOL)arg1 ;
-(void)_startSessionWithContext:(id)arg1 ;
-(void)_startProducingDataIfNeeded;
-(void)_cleanUpVideoConnections;
-(void)_startPlayingCurrentVideo;
-(void)_cleanUpVideoOutputFromPlayerItem;
-(void)_ensureDisplayLinkCreated;
-(void)_itemDidFinishPlaying;
-(void)_displayThumbnail;
-(void)_produceData:(opaqueCMSampleBufferRef)arg1 presentationTime:(SCD_Struct_FB25)arg2 ;
-(void)_loadBufferAtItemTime:(SCD_Struct_FB25)arg1 frameDuration:(double)arg2 ;
-(void)_produceSampleBufferForPixelBuffer:(CVBufferRef)arg1 timingInfo:(SCD_Struct_FB877)arg2 ;
-(void)_removeVideoOutput;
-(void)dealloc;
-(void)resume;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(id)videoPlayer;
-(void)setMuted:(BOOL)arg1 ;
@end
