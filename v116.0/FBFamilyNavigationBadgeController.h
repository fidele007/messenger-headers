/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBJewelController, FBKVOController, FBUserSession;

@interface FBFamilyNavigationBadgeController : NSObject {

	FBJewelController* _jewelController;
	FBKVOController* _KVOController;
	BOOL _shouldClearBadgeOnTap;
	FBUserSession* _session;
	unsigned long long _messagesVisibleBadgeCount;
	unsigned long long _instagramNotificationsVisibleBadgeCount;
	unsigned long long _badgeCount;

}

@property (nonatomic,readonly) unsigned long long messagesVisibleBadgeCount;                            //@synthesize messagesVisibleBadgeCount=_messagesVisibleBadgeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long instagramNotificationsVisibleBadgeCount;              //@synthesize instagramNotificationsVisibleBadgeCount=_instagramNotificationsVisibleBadgeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeCount;                                           //@synthesize badgeCount=_badgeCount - In the implementation block
-(void)_messagesVisibleBadgeCountChange:(id)arg1 ;
-(void)_instagramNotificationsVisibleBadgeCountChange:(id)arg1 ;
-(unsigned long long)messagesVisibleBadgeCount;
-(unsigned long long)instagramNotificationsVisibleBadgeCount;
-(id)initWithSession:(id)arg1 jewelController:(id)arg2 ;
-(void)clearBadge;
-(void)_updateBadgeCount;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
@end

