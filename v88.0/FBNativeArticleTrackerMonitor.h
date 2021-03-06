/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, FBNativeArticleTrackerPerfViewController, NSDictionary;

@interface FBNativeArticleTrackerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _perfQueue;
	NSMutableDictionary* _trackerIDToTrackerState;
	double _startTime;
	FBNativeArticleTrackerPerfViewController* _perfVC;
	NSDictionary* _analyticsExtras;

}
-(id)initWithAnalyticsExtras:(id)arg1 ;
-(void)trackerDidStartWithInfo:(id)arg1 ;
-(void)logPerfAnalytics;
-(void)requestPerfDashboardWithViewBlock:(/*^block*/id)arg1 ;
-(void)trackerDidUpdate:(id)arg1 withProgress:(double)arg2 ;
-(void)trackerDidFail:(id)arg1 withError:(id)arg2 ;
-(void)trackerDidFinishWithID:(id)arg1 ;
-(void)reset;
@end

