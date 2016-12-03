/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAudioSessionManagerClient.h>
#import <Messenger/FBVideoPlayerAudioSessionClientProtocol.h>
#import <Messenger/FBSystemAudioSessionManagerListener.h>

@class FBVideoPlaybackController, NSString;

@interface FBVideoPlayerAudioSessionClient : NSObject <FBAudioSessionManagerClient, FBVideoPlayerAudioSessionClientProtocol, FBSystemAudioSessionManagerListener> {

	BOOL _wasPlayingBeforeInterruption;
	BOOL _isListeningForRouteChanges;
	BOOL _isActiveClient;
	BOOL _shouldLogVolumeChangesWhileActive;
	float _lastKnownVolume;
	FBVideoPlaybackController* _videoController;

}

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
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(id)initWithVideoPlaybackController:(id)arg1 ;
-(void)deactivateAudioSession;
-(void)refreshAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)listenForRouteChangesOnly;
-(void)activateAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)beginInterruption;
@end

