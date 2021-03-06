/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBSystemAudioSessionManagerListener.h>
#import <Messenger/FBAudioSessionManagerClient.h>

@protocol FBWebRTCVoipAudioSessionDelegate;
@class NSString;

@interface FBWebRTCVoipAudioSession : NSObject <FBSystemAudioSessionManagerListener, FBAudioSessionManagerClient> {

	BOOL _receiverDisabled;
	BOOL _speakerphoneForced;
	int _audioSessionActiveCount;
	BOOL _isActive;
	BOOL _outputCanBeMixed;
	BOOL _isExternal;
	BOOL _isBluetooth;
	id<FBWebRTCVoipAudioSessionDelegate> _delegate;

}

@property (assign,nonatomic) BOOL isActive;                                                     //@synthesize isActive=_isActive - In the implementation block
@property (assign) BOOL isExternal;                                                             //@synthesize isExternal=_isExternal - In the implementation block
@property (assign) BOOL isBluetooth;                                                            //@synthesize isBluetooth=_isBluetooth - In the implementation block
@property (nonatomic,readonly) BOOL hasBuiltInReceiver; 
@property (getter=isReceiverDisabled) BOOL receiverDisabled; 
@property (getter=isSpeakerphoneForced) BOOL speakerphoneForced; 
@property (assign,nonatomic) BOOL outputCanBeMixed;                                             //@synthesize outputCanBeMixed=_outputCanBeMixed - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCVoipAudioSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
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
@property (nonatomic,readonly) BOOL disableOverrideOutputPort; 
-(BOOL)_shouldOverrideSpeaker;
-(BOOL)_isCurrentlyReceiver;
-(void)audioSessionManagerUpdatedAudioSession:(id)arg1 ;
-(void)audioSessionManagerNotedRouteChange:(id)arg1 ;
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(unsigned long long)inputOptions;
-(unsigned long long)audioSessionMode;
-(BOOL)disableOverrideOutputPort;
-(void)setSpeakerphoneForced:(BOOL)arg1 ;
-(void)setOutputCanBeMixed:(BOOL)arg1 ;
-(void)startAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)hasBuiltInReceiver;
-(void)retainAudioSession;
-(void)setReceiverDisabled:(BOOL)arg1 ;
-(void)_completeAudioSessionActivationWithCompletion:(/*^block*/id)arg1 ;
-(void)_incrementAudioSessionCount;
-(BOOL)_decrementAudioSessionCount;
-(void)_setSpeakerphoneForcedSychronized:(BOOL)arg1 ;
-(void)_reinitializeSpeakerMode;
-(void)_setReceiverDisabledSynchronized:(BOOL)arg1 ;
-(id)_currentOutputPort;
-(BOOL)_isCurrentlySpeakerphone;
-(BOOL)isSpeakerphoneForced;
-(BOOL)isReceiverDisabled;
-(void)setIsBluetooth:(BOOL)arg1 ;
-(BOOL)outputCanBeMixed;
-(id)init;
-(void)setDelegate:(id<FBWebRTCVoipAudioSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCVoipAudioSessionDelegate>)delegate;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
-(BOOL)isExternal;
-(BOOL)isBluetooth;
-(void)beginInterruption;
-(void)releaseAudioSession;
-(void)setIsExternal:(BOOL)arg1 ;
-(unsigned long long)clientPriority;
@end

