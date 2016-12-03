/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

