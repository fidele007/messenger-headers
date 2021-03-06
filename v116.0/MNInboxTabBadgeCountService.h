/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNBadgeCountChangedListening.h>
#import <FBSharedFramework/MNServiceControllable.h>

@class MNInboxTabBadgeCountServiceUpdateListeningAnnouncer, MNInboxTabBadgeCountServiceInjector, MNPendingRequestsBadgeCounter, MNSyncedInboxBadgeCounter, NSString;

@interface MNInboxTabBadgeCountService : NSObject <FBClassInjectable, MNBadgeCountChangedListening, MNServiceControllable> {

	MNInboxTabBadgeCountServiceUpdateListeningAnnouncer* _announcer;
	MNInboxTabBadgeCountServiceInjector* _injector;
	MNPendingRequestsBadgeCounter* _pendingRequestsBadgeCounter;
	MNSyncedInboxBadgeCounter* _syncedInboxBadgeCounter;
	unsigned long long _cachedBadgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned long long cachedBadgeCount;                                          //@synthesize cachedBadgeCount=_cachedBadgeCount - In the implementation block
@property (nonatomic,readonly) MNSyncedInboxBadgeCounter * syncedInboxBadgeCounter;              //@synthesize syncedInboxBadgeCounter=_syncedInboxBadgeCounter - In the implementation block
+(Class)injectorClass;
-(void)_updateCachedCountIfNecessary;
-(unsigned long long)cachedBadgeCount;
-(void)setCachedBadgeCount:(unsigned long long)arg1 ;
-(void)didUpdateBadgeSourceStates;
-(unsigned long long)badgeCountExcludingCurrentlyViewedThread;
-(MNSyncedInboxBadgeCounter *)syncedInboxBadgeCounter;
-(void)handleIdle;
-(id)initWithInjector:(id)arg1 ;
-(NSString *)description;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

