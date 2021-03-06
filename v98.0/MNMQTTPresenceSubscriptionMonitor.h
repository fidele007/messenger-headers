/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMQTTPresenceSubscriptionListener;
@class NSNotificationCenter;

@interface MNMQTTPresenceSubscriptionMonitor : NSObject {

	NSNotificationCenter* _notificationCenter;
	long long _applicationState;
	long long _mqttState;
	id<MNMQTTPresenceSubscriptionListener> _listener;

}

@property (assign,nonatomic,__weak) id<MNMQTTPresenceSubscriptionListener> listener;              //@synthesize listener=_listener - In the implementation block
-(id)initWithApplication:(id)arg1 notificationCenter:(id)arg2 ;
-(void)_onApplicationBackground;
-(BOOL)isSubscribedToPresenceUpdates;
-(void)_beginMonitoringNotifications;
-(void)_onMQTTConnectionStatusChange:(id)arg1 ;
-(void)_onApplicationActive;
-(void)_checkStatusAndNotifyListenerAfterMutation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id<MNMQTTPresenceSubscriptionListener>)listener;
-(void)setListener:(id<MNMQTTPresenceSubscriptionListener>)arg1 ;
@end

