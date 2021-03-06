/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMessageLiveLocationThreadSummaryListener.h>

@protocol OS_dispatch_queue;
@class NSObject, MNMessageLiveLocationIncomingManagerInjector, MNMessageLiveLocationIncomingListenerAnnouncer, MNMessageLiveLocationUpdaterEventsLogHandler, NSMutableDictionary, NSString;

@interface MNMessageLiveLocationIncomingManager : NSObject <FBClassInjectable, MNMessageLiveLocationThreadSummaryListener> {

	NSObject*<OS_dispatch_queue> _queue;
	MNMessageLiveLocationIncomingManagerInjector* _injector;
	MNMessageLiveLocationIncomingListenerAnnouncer* _incomingAnnouncer;
	MNMessageLiveLocationUpdaterEventsLogHandler* _eventLogHandler;
	NSMutableDictionary* _threadKeyToMessageLiveLocationIdsMap;
	NSMutableDictionary* _threadKeyToStaleMessageLiveLocationIds;
	NSMutableDictionary* _liveLocationsToBecomeStale;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSMutableDictionary * threadKeyToMessageLiveLocationIdsMap;                //@synthesize threadKeyToMessageLiveLocationIdsMap=_threadKeyToMessageLiveLocationIdsMap - In the implementation block
@property (copy) NSMutableDictionary * threadKeyToStaleMessageLiveLocationIds;              //@synthesize threadKeyToStaleMessageLiveLocationIds=_threadKeyToStaleMessageLiveLocationIds - In the implementation block
@property (copy) NSMutableDictionary * liveLocationsToBecomeStale;                          //@synthesize liveLocationsToBecomeStale=_liveLocationsToBecomeStale - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(BOOL)isReceivingLocationUpdatesForThreadKey:(id)arg1 ;
-(id)allActiveMessageLiveLocationIdsForThreadKey:(id)arg1 ;
-(id)staleMessageLiveLocationIdsForThreadKey:(id)arg1 ;
-(void)updatedLiveLocationForThreadKey:(id)arg1 updatedLiveLocation:(id)arg2 allLiveLocations:(id)arg3 ;
-(void)threadSummaryReplacedForThreadKey:(id)arg1 originalSummary:(id)arg2 withThreadSummary:(id)arg3 ;
-(void)purgedAllThreadSummaries;
-(NSMutableDictionary *)liveLocationsToBecomeStale;
-(void)_processNewLiveLocationUpdateWithThreadKey:(id)arg1 liveLocation:(id)arg2 ;
-(NSMutableDictionary *)threadKeyToMessageLiveLocationIdsMap;
-(NSMutableDictionary *)threadKeyToStaleMessageLiveLocationIds;
-(BOOL)_isValidLiveLocationUpdate:(id)arg1 ;
-(void)_markStaleWithThreadKey:(id)arg1 messageLiveLocationId:(id)arg2 ;
-(void)setThreadKeyToMessageLiveLocationIdsMap:(NSMutableDictionary *)arg1 ;
-(void)setThreadKeyToStaleMessageLiveLocationIds:(NSMutableDictionary *)arg1 ;
-(void)setLiveLocationsToBecomeStale:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

