/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBAudioFilterSoundMixer, NSNumber;

@interface FBAudioRenderCoordinator : NSObject {

	FBAudioFilterSoundMixer* _mixer;
	int _channelCount;
	int _sampleRate;
	double _currentTimestamp;
	BOOL _isMonoCanonical;
	NSNumber* _lastSampleRate;
	opaqueCMFormatDescriptionRef _audioDescriptionRef;
	/*^block*/id _handler;
	BOOL _processorConfigured;

}
+(id)newWithSampleReadyHandler:(/*^block*/id)arg1 ;
-(void)processMicrophoneAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)addAmbientSound:(id)arg1 ;
-(void)addTriggeredSound:(id)arg1 ;
-(void)setupAudioProcessors:(id)arg1 ;
-(void)_produceAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithSampleReadyHandler:(/*^block*/id)arg1 ;
-(BOOL)_canProcessAudioBuffer;
-(void)_processAudioDataFromAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
-(void)reset;
@end

