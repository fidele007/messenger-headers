/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBWebRTCRecentCallLog;

@interface FBWebRTCCallLogWriter : NSObject {

	FBWebRTCRecentCallLog* _log;

}
-(void)_addCallToLog:(id)arg1 ;
-(id)initWithRecentCallLog:(id)arg1 ;
-(void)logCallCompleteWithPeerUserId:(id)arg1 startTime:(id)arg2 duration:(double)arg3 hasAnswered:(BOOL)arg4 direction:(unsigned long long)arg5 callType:(unsigned long long)arg6 callAcknowledged:(BOOL)arg7 ;
-(void)logConferenceCallCompleteWithGroupFbId:(id)arg1 startTime:(id)arg2 duration:(double)arg3 hasAnswered:(BOOL)arg4 direction:(unsigned long long)arg5 callType:(unsigned long long)arg6 callAcknowledged:(BOOL)arg7 ;
-(void)logCallUpdateWithVoiceMail:(id)arg1 voiceMailFile:(id)arg2 voiceMailUrl:(id)arg3 voiceMailDuration:(double)arg4 ;
@end
