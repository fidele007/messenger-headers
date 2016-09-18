/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBackgroundEventContributionListener, FBClock;
@class UIApplication, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface FBBackgroundEventList : NSObject {

	id<FBBackgroundEventContributionListener> _listener;
	UIApplication* _application;
	id<FBClock> _clock;
	NSMutableSet* _activeForegroundEventKeys;
	NSMutableArray* _activeBackgroundEventKeys;
	NSMutableDictionary* _eventKeyToStartTimeMap;

}
-(void)_startBackgroundEventWithKey:(id)arg1 ;
-(void)_removeBackgroundEventWithKey:(id)arg1 ;
-(void)_expireTimedOutEvents;
-(id)initWithListener:(id)arg1 application:(id)arg2 clock:(id)arg3 ;
-(void)startEventWithKey:(id)arg1 ;
-(void)endEventWithKey:(id)arg1 ;
-(void)transitionEventsIntoForeground;
-(void)transitionEventsIntoBackground;
-(void)triggerHeartbeatWithContribution:(double)arg1 ;
@end
