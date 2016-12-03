/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNMessageLiveLocationConfigManager, FBUserSession, MNMessageLiveLocationLocationManager, MNMessageLiveLocationUpdaterEntryMap, MNMessageLiveLocationOutgoingListenerAnnouncer;

@interface MNMessageLiveLocationOutgoingManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNMessageLiveLocationConfigManager* _configManager;
	FBUserSession* _session;
	MNMessageLiveLocationLocationManager* _locationManager;
	MNMessageLiveLocationUpdaterEntryMap* _entryMap;
	MNMessageLiveLocationOutgoingListenerAnnouncer* _outgoingAnnouncer;

}
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 source:(long long)arg3 ;
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 ;
-(id)expirationTimeForLocationUpdatesForThreadKey:(id)arg1 ;
-(void)startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 source:(long long)arg2 ;
-(void)_didReceiveLocationManagerUpdateWithLocation:(id)arg1 ;
-(void)_didReceiveLocationManagerError:(id)arg1 ;
-(void)_resumeLiveLocationsIfNecessary;
-(void)_createLocationManagerIfNecessary;
-(void)_resumeSendingLocationUpdatesForThreadKey:(id)arg1 entry:(id)arg2 ;
-(void)_startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 source:(long long)arg2 ;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 source:(long long)arg3 ;
-(BOOL)_shouldSendLocationUpdates;
-(void)_liveLocationTimerElapsedForThreadKey:(id)arg1 ;
-(void)_stopRequestingLocationUpdatesIfNecessary;
-(void)_sendExpirationRequestWithMessageLiveLocationId:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 session:(id)arg2 ;
-(void)resumeLiveLocationsIfNecessary;
-(void)persistLiveLocationIdForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 withMessageLiveLocationId:(id)arg3 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
