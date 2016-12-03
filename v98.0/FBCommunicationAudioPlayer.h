/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/AVAudioPlayerDelegate.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol FBCommunicationAudioPlayerDelegate;
@class NSURL, AVAudioPlayer, NSTimer, NSMutableArray, NSMutableDictionary, NSString;

@interface FBCommunicationAudioPlayer : NSObject <AVAudioPlayerDelegate, FBAudioSessionManagerClient> {

	BOOL _proximityMonitoringEnabled;
	unsigned long long _state;
	NSURL* _audioUrl;
	id<FBCommunicationAudioPlayerDelegate> _delegate;
	AVAudioPlayer* _audioPlayer;
	NSTimer* _playTimer;
	NSMutableArray* _queue;
	NSMutableDictionary* _map;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;                                  //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,retain) NSTimer * playTimer;                                          //@synthesize playTimer=_playTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * map;                                    //@synthesize map=_map - In the implementation block
@property (assign,nonatomic) BOOL proximityMonitoringEnabled;                              //@synthesize proximityMonitoringEnabled=_proximityMonitoringEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * audioUrl;                                             //@synthesize audioUrl=_audioUrl - In the implementation block
@property (assign,nonatomic) id<FBCommunicationAudioPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
+(id)sharedAudioPlayer;
-(NSURL *)audioUrl;
-(void)setDelegate:(id)arg1 forAudioUrl:(id)arg2 ;
-(void)start:(id)arg1 playerView:(id)arg2 ;
-(void)resetAll;
-(void)seekTo:(double)arg1 ;
-(void)_invalidatePlayTimer;
-(void)_stopProximitySensing;
-(void)_startProximitySensing;
-(void)_updatePlayerTimestamp;
-(void)onApplicationWillResignActive:(id)arg1 ;
-(void)setPlayTimer:(NSTimer *)arg1 ;
-(BOOL)proximityMonitoringEnabled;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(NSTimer *)playTimer;
-(void)_startPlaying;
-(void)append:(id)arg1 playerView:(id)arg2 ;
-(void)_enqueueAudio:(id)arg1 withDelegate:(id)arg2 ;
-(void)_process;
-(void)_performStartPlaying;
-(void)_resetAudioPlayer;
-(void)setAudioUrl:(NSURL *)arg1 ;
-(void)_updateProximitySensorState;
-(void)_rewindForAudioSwitching;
-(BOOL)_isDeviceProximite;
-(void)setDelegate:(id<FBCommunicationAudioPlayerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBCommunicationAudioPlayerDelegate>)delegate;
-(unsigned long long)state;
-(double)duration;
-(void)setProximityMonitoringEnabled:(BOOL)arg1 ;
-(void)resume;
-(NSMutableArray *)queue;
-(void)pause;
-(NSMutableDictionary *)map;
-(void)beginInterruption;
-(double)currentTime;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(void)audioPlayerBeginInterruption:(id)arg1 ;
-(void)audioPlayerEndInterruption:(id)arg1 ;
-(void)setMap:(NSMutableDictionary *)arg1 ;
@end

