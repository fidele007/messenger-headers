/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNAppMessageAttachmentUtils, FBAnalytics;

@interface MNMontageViewAnalyticsLogger : NSObject {

	MNAppMessageAttachmentUtils* _attachmentUtils;
	FBAnalytics* _analytics;

}
-(void)_logEvent:(id)arg1 message:(id)arg2 requestedTime:(unsigned long long)arg3 error:(id)arg4 ;
-(id)initWithAttachmentUtils:(id)arg1 ;
-(void)logFinishedPlayingForMessage:(id)arg1 montageViewModel:(id)arg2 requestedTime:(unsigned long long)arg3 startedPlayingTime:(unsigned long long)arg4 fullMessageDuration:(double)arg5 pauseDuration:(double)arg6 entryPoint:(id)arg7 exitAction:(id)arg8 currentPosition:(long long)arg9 totalQueue:(long long)arg10 queueType:(id)arg11 ;
-(void)logDismissedLoadingForViewer:(id)arg1 requestedTime:(unsigned long long)arg2 entryPoint:(id)arg3 loggedInUserInfoManager:(id)arg4 ;
-(void)logDismissedLoadingForMessage:(id)arg1 requestedTime:(unsigned long long)arg2 ;
-(void)logReplyInViewer:(id)arg1 ;
-(void)logStartedPlayingForMessage:(id)arg1 requestedTime:(unsigned long long)arg2 ;
-(void)logFailedLoadingForMessage:(id)arg1 requestedTime:(unsigned long long)arg2 error:(id)arg3 ;
-(void)logOpenedSeenSheetForMessage:(id)arg1 ;
@end

