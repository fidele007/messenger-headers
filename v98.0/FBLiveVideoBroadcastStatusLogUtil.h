/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBLiveVideoBroadcastStatusLogUtil : NSObject
+(void)_logEvent:(id)arg1 extra:(id)arg2 ;
+(void)logVideo:(id)arg1 statusChangeFrom:(id)arg2 to:(id)arg3 ;
+(void)logTransitionStartedForVideo:(id)arg1 isLive:(BOOL)arg2 ;
+(void)logTransitionCompletedForVideo:(id)arg1 isLive:(BOOL)arg2 videoDeleted:(BOOL)arg3 duration:(double)arg4 ;
+(void)logTransitionCanceledForVideo:(id)arg1 isLive:(BOOL)arg2 duration:(double)arg3 ;
+(void)logTransitionFailedForVideo:(id)arg1 isLive:(BOOL)arg2 ;
@end
