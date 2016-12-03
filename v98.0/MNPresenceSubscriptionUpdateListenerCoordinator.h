/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNLastActivityTrackingListening.h>
#import <Messenger/MNPresenceCacheListener.h>

@protocol OS_dispatch_queue;
@class MNPresenceCache, NSObject, NSHashTable, NSMutableDictionary, MNPresenceUpdateListeningAnnouncer, NSString;

@interface MNPresenceSubscriptionUpdateListenerCoordinator : NSObject <MNLastActivityTrackingListening, MNPresenceCacheListener> {

	MNPresenceCache* _presenceCache;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _lastActivityTrackers;
	NSMutableDictionary* _personToObserversMap;
	MNPresenceUpdateListeningAnnouncer* _allPeopleAnnouncer;
	NSMutableDictionary* _personIdToLastReportedSyncPresenceValue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)lastActiveTracker:(id)arg1 didUpdateLastActiveTime:(id)arg2 forPersonWithId:(id)arg3 ;
-(void)addPresenceUpdateListenerForAllPeople:(id)arg1 ;
-(void)removePresenceUpdateListenerForAllPeople:(id)arg1 ;
-(void)removePresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2 ;
-(void)addPresenceUpdateListener:(id)arg1 forPersonWithId:(id)arg2 ;
-(void)removeAllPresenceUpdateSubscriptionsForListener:(id)arg1 ;
-(void)trackerDidClearPresenceValueForPerson:(id)arg1 ;
-(void)trackerDidRecordUpdatedPresence:(id)arg1 ;
-(id)initWithPresenceCache:(id)arg1 queue:(id)arg2 ;
-(void)addLastActivityTracker:(id)arg1 ;
-(void)_computeAnnounceAndCachePresenceForPersonWithId:(id)arg1 ;
@end

