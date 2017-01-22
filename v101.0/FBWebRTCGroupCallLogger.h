/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCEngineListener.h>

@class FBWebRTCEngine, NSString;

@interface FBWebRTCGroupCallLogger : NSObject <FBWebRTCEngineListener> {

	BOOL _isFunnelStarted;
	FBWebRTCEngine* _engine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)logUIJoinGroupCallForTrigger:(id)arg1 isVideo:(BOOL)arg2 accepted:(BOOL)arg3 ;
-(void)configureWithEngine:(id)arg1 ;
-(void)logUIShareVideo:(BOOL)arg1 ;
-(void)logUIShareVideoResponse:(BOOL)arg1 ;
-(void)logUIStartGroupCallForTrigger:(id)arg1 isVideo:(BOOL)arg2 ;
-(void)_startFunnel;
-(void)_logAction:(id)arg1 payload:(id)arg2 funnelStrategy:(unsigned long long)arg3 ;
-(void)_endFunnel;
-(void)logUICountdownStarted;
-(void)logEngineInGroupCall;
-(void)logEngineJoinGroupCall;
-(void)logEngineStartGroupCall;
-(void)logEngineEndGroupCallForReason:(id)arg1 callId:(long long)arg2 ;
-(void)dealloc;
@end
