/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBRecentActivitySentinelManager : NSObject
+(void)processEvent:(id)arg1 ;
+(void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2 extra:(id)arg3 ;
+(void)recentActivitySentinelOnlyEventDidOccur:(int)arg1 eventName:(id)arg2 ;
+(id)recentActivitiesFromCurrentSession:(int)arg1 convertEventsToStrings:(BOOL)arg2 ;
+(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
+(void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(/*^block*/id)arg3 ;
+(id)customizeActivitiesBeforeReport:(id)arg1 fromSession:(int)arg2 ;
+(id)recentActivitiesFromPreviousSession:(int)arg1 ;
+(double)delayForDevice;
+(void)setupColdStartTimerIfNeeded;
+(id)bugReportWhiteListedEventList;
+(void)clearQueue;
@end
