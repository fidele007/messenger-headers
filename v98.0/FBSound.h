/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSoundProtocol.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@class FBSoundBuffer, NSTimer, NSString;

@interface FBSound : NSObject <FBSoundProtocol, FBAudioSessionManagerClient> {

	FBSoundBuffer* _buffer;
	BOOL _attachedBuffer;
	BOOL _wasPlayingBeforeInterruption;
	unsigned _alSource;
	float _position[3];
	float _velocity[3];
	NSTimer* _velocityTimer;
	double _lastVelocityUpdateTime;
	BOOL _loop;
	BOOL _useLongFormAudioPlayback;
	BOOL _usesSystemAudioSession;
	double _volume;

}

@property (assign,nonatomic) BOOL useLongFormAudioPlayback;                            //@synthesize useLongFormAudioPlayback=_useLongFormAudioPlayback - In the implementation block
@property (assign,nonatomic) BOOL usesSystemAudioSession;                              //@synthesize usesSystemAudioSession=_usesSystemAudioSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isPlaying; 
@property (assign,nonatomic) BOOL loop;                                                //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) double volume;                                            //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
+(void)setDefaultVolume:(double)arg1 ;
+(double)defaultVolume;
+(id)_URLForResourceName:(id)arg1 ;
+(void)preloadSoundsWithContentsOfURLs:(id)arg1 ;
+(BOOL)_ensureOpenAL;
+(BOOL)isBufferedURL:(id)arg1 ;
+(void)preloadSoundsWithResourceNames:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(void)playWithVelocity:(CGPoint)arg1 ;
-(void)_ensureBufferLoaded;
-(void)_activateAudioSession;
-(void)_updatePositionForVelocity;
-(void)setPositionX:(double)arg1 Y:(double)arg2 Z:(double)arg3 ;
-(BOOL)useLongFormAudioPlayback;
-(void)setUseLongFormAudioPlayback:(BOOL)arg1 ;
-(BOOL)usesSystemAudioSession;
-(void)setUsesSystemAudioSession:(BOOL)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)setPosition:(CGPoint)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)pause;
-(double)getCurrentTime;
-(void)setRelativeVolume:(double)arg1 ;
-(void)beginInterruption;
-(id)initWithResourceName:(id)arg1 ;
-(double)getDuration;
-(void)setCurrentTime:(double)arg1 ;
-(void)play;
-(BOOL)isPlaying;
-(void)setVolume:(double)arg1 ;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
-(double)volume;
@end

