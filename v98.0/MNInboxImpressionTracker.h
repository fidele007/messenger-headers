/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNInboxImpressionStore, MNInboxImpressionAnalyticsLogger;

@interface MNInboxImpressionTracker : NSObject {

	MNInboxImpressionStore* _inboxImpressionStore;
	MNInboxImpressionAnalyticsLogger* _inboxAnalyticsLogger;

}
-(void)startTrackingImpresions;
-(void)inboxUnitsDidAppear:(id)arg1 ;
-(void)inboxUnitsDidDisappear:(id)arg1 ;
-(void)endTrackingImpressions;
-(void)inboxUnitDidClick:(id)arg1 withClickTarget:(id)arg2 ;
-(void)inboxUnitDidAppear:(id)arg1 ;
-(void)inboxUnitDidDisappear:(id)arg1 ;
-(void)inboxUnitDidHideItem:(id)arg1 ;
-(void)_updateOrAddAppearingImpressionWithLoggingData:(id)arg1 ;
-(void)_updateDisappearingImpressionWithLoggingData:(id)arg1 ;
-(void)_updateStoredEvent:(id)arg1 timeObjectLastAppeared:(double)arg2 ;
-(void)_addViewportEventDataWithLoggingData:(id)arg1 ;
-(id)init;
@end

