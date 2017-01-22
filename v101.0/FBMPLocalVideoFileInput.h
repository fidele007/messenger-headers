/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMPInput.h>

@protocol OS_dispatch_source;
@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, FBVideoProcessor, FBMPBaseProducerPort, NSObject, NSError, NSString;

@interface FBMPLocalVideoFileInput : NSObject <FBMPInput> {

	AVAsset* _asset;
	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _avVideoOutput;
	AVAssetReaderTrackOutput* _avAudioOutput;
	FBVideoProcessor* _imageRotationProcessor;
	CGSize _outputVideoSize;
	FBMPBaseProducerPort* _videoPort;
	FBMPBaseProducerPort* _audioPort;
	SCD_Struct_FB945 _config;
	NSObject*<OS_dispatch_source> _videoPollTimer;
	NSObject*<OS_dispatch_source> _audioPollTimer;
	atomic<bool> _videoPortConnected;
	atomic<bool> _audioPortConnected;
	atomic<bool> _sessionStarted;
	atomic<bool> _producingVideoData;
	atomic<bool> _producingAudioData;
	NSError* _initializationError;
	unsigned long long _videoDataCounter;
	unsigned long long _audioDataCounter;
	atomic<bool> _needToInvokeReadCompletion;
	/*^block*/id _readCompletion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAsset:(id)arg1 config:(SCD_Struct_FB945)arg2 readCompletion:(/*^block*/id)arg3 ;
-(id)audioProducerPort;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(id)producerPorts;
-(void)_prepareReader;
-(void)_setupImageRotationProcessorIfNeeded;
-(void)_updateSessionStarted:(BOOL)arg1 ;
-(void)_startProducingDataIfNeeded:(id)arg1 ;
-(void)_produceVideoData:(id)arg1 ;
-(void)_produceAudioData:(id)arg1 ;
-(BOOL)_pollVideoData;
-(void)_invokeReadCompletionIfNeeded:(id)arg1 ;
-(BOOL)_pollAudioData;
-(id)initWithFilePath:(id)arg1 config:(SCD_Struct_FB945)arg2 readCompletion:(/*^block*/id)arg3 ;
-(BOOL)_validate;
@end
