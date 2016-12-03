/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLocalNotificationBuzzHistoryRecording, FBClock, OS_dispatch_queue;
@class MNLocalNotificationController, MNMessageLocalNotificationSharedHistoryCache, MNMessageLocalNotificationSchedulerLogger, MNMessageLocalNotificationSchedulerListeningAnnouncer, NSObject;

@interface MNMessageLocalNotificationScheduler : NSObject {

	id<MNMessageLocalNotificationBuzzHistoryRecording> _buzzHistoryRecorder;
	MNLocalNotificationController* _localNotificationController;
	MNMessageLocalNotificationSharedHistoryCache* _sharedHistoryCache;
	MNMessageLocalNotificationSchedulerLogger* _logger;
	MNMessageLocalNotificationSchedulerListeningAnnouncer* _announcer;
	id<FBClock> _clock;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)scheduleMessageLocalNotificationsForDisplay:(id)arg1 shouldSupportContextExtension:(BOOL)arg2 ;
-(void)_scheduleNotificationRequestsOnMainThread:(id)arg1 ;
-(void)_scheduleLocalNotificationsOnMainThread:(id)arg1 ;
-(void)_recordBuzzHistoryWithMessageLocalNotifications:(id)arg1 ;
-(void)_logScheduledMessageLocalNotifications:(id)arg1 ;
-(id)initWithBuzzHistoryRecorder:(id)arg1 localNotificationController:(id)arg2 sharedHistoryCache:(id)arg3 logger:(id)arg4 clock:(id)arg5 announcer:(id)arg6 queue:(id)arg7 ;
@end

