/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSystemAudioSessionManagerListener.h>

@class FBVideoSoundToggleFunnelLogger, NSDate, FBUserSession, NSString;

@interface FBVideoSoundTogglePluginSettingStore : NSObject <FBSystemAudioSessionManagerListener> {

	long long _toggleSetting;
	FBVideoSoundToggleFunnelLogger* _funnelLogger;
	NSDate* _timeOfLastBackground;
	FBUserSession* _session;
	float _lastKnownVolume;
	BOOL _isMuteSwitchON;
	BOOL _hasSeenTapLabel;

}

@property (assign,nonatomic) BOOL isMuteSwitchON;                   //@synthesize isMuteSwitchON=_isMuteSwitchON - In the implementation block
@property (assign,nonatomic) BOOL hasSeenTapLabel;                  //@synthesize hasSeenTapLabel=_hasSeenTapLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)markHasSeenTapLabel:(BOOL)arg1 ;
-(long long)currentSetting;
-(void)updateCurrentSetting:(long long)arg1 ;
-(BOOL)hasSeenTapLabel;
-(long long)tapLabelShownCount;
-(void)markHasSeenNoAudioLabel:(id)arg1 ;
-(BOOL)hasSeenNoAudioLabel:(id)arg1 ;
-(long long)_defaultSetting;
-(void)_startFunnel;
-(id)_actionPayload;
-(void)_incrementTurnOffCountAndTriggerNux;
-(BOOL)isMuteSwitchON;
-(void)setIsMuteSwitchON:(BOOL)arg1 ;
-(id)_appState;
-(BOOL)_enoughTimeElapsedInBackgroundForReset;
-(double)_timeElapsedInBackground;
-(BOOL)shouldPersistFeedAsActiveAudioClient;
-(void)setHasSeenTapLabel:(BOOL)arg1 ;
-(void)dealloc;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

