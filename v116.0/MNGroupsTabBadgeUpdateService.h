/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNGroupsRoomTabBadgeStateDelegate.h>
#import <FBSharedFramework/MNServiceControllable.h>
#import <Messenger/MNInboxTabBadgeCountSourceTracking.h>

@protocol MNBadgeUpdater;
@class MNGroupsTabBadgeUpdateServiceInjector, MNBadgeCountSourceAdapter, NSString;

@interface MNGroupsTabBadgeUpdateService : NSObject <FBClassInjectable, MNGroupsRoomTabBadgeStateDelegate, MNServiceControllable, MNInboxTabBadgeCountSourceTracking> {

	MNGroupsTabBadgeUpdateServiceInjector* _injector;
	id<MNBadgeUpdater> _badgeUpdater;
	MNBadgeCountSourceAdapter* _badgeCountAdapter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)_setBadgeCountAdapter:(id)arg1 ;
-(void)_updateGroupsRoomTabBadge;
-(void)groupsRoomTabBadgeStateChanged;
-(void)handleIdle;
-(id)initWithInjector:(id)arg1 ;
-(void)stop;
-(void)startListening;
-(void)stopListening;
-(void)start:(id)arg1 ;
-(long long)badgeCount;
@end

