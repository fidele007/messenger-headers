/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMUserName;

@interface FBWebRTCEndCallPresenter : NSObject {

	unsigned long long _reason;
	FBMUserName* _peerName;
	BOOL _canShowVoicemail;
	BOOL _remoteEnded;
	BOOL _hasConnected;
	unsigned long long _reachabilityState;
	BOOL _voicemailButtonClicked;

}

@property (nonatomic,readonly) BOOL voicemailButtonClicked;              //@synthesize voicemailButtonClicked=_voicemailButtonClicked - In the implementation block
@property (nonatomic,readonly) unsigned long long reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) FBMUserName * peerName;                   //@synthesize peerName=_peerName - In the implementation block
@property (nonatomic,readonly) BOOL remoteEnded;                         //@synthesize remoteEnded=_remoteEnded - In the implementation block
-(id)initWithReason:(unsigned long long)arg1 peerName:(id)arg2 remoteEnded:(BOOL)arg3 hasConnected:(BOOL)arg4 canShowVoicemail:(BOOL)arg5 voicemailButtonClicked:(BOOL)arg6 reachability:(unsigned long long)arg7 ;
-(BOOL)shouldShowVoicemail;
-(BOOL)voicemailButtonClicked;
-(id)localizedCallEndedMessage;
-(id)localizedNoAnswerMessage;
-(id)localizedCallInterruptedMessage;
-(id)localizedRecordingVoicemailMessage;
-(id)localizedNotFriendsOrConnectedMessage;
-(id)localizedCannotReceiveCallsMessage;
-(id)localizedNotReachableMessage;
-(id)localizedCallFailedMessage;
-(id)localizedCallDroppedMessage;
-(id)localizedDeviceBusyMessage;
-(id)localizedInAnotherCallMessage;
-(id)localizedSwitchToWiFiMessage;
-(BOOL)shouldShowAlert;
-(BOOL)shouldOfferRedial;
-(BOOL)shouldOfferUnansweredResponse;
-(id)endCallMessage;
-(id)endCallAlertMessage;
-(id)endCallAlertTitle;
-(double)endCallDisplayInterval;
-(BOOL)isDropped;
-(id)localizedRedialPromptMessage;
-(FBMUserName *)peerName;
-(BOOL)remoteEnded;
-(unsigned long long)reason;
@end
