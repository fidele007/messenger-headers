/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserSettingsListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNTabBadgeCountController.h>

@class MNUserSettings, MNTabBadgeCountControllerListenerAnnouncer, MNPeopleTabConfiguration, NSString;

@interface MNPeopleTabContactSyncBadgeCountController : NSObject <MNUserSettingsListener, FBViewerContextClassProvidable, MNTabBadgeCountController> {

	MNUserSettings* _userSettings;
	MNTabBadgeCountControllerListenerAnnouncer* _tabBadgeCountControllerListenerAnnouncer;
	MNPeopleTabConfiguration* _peopleTabConfiguration;
	long long _badgeCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long badgeCount;                //@synthesize badgeCount=_badgeCount - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)userSettingsDidUpdateSetting:(id)arg1 ;
-(void)addTabBadgeCountControllerListener:(id)arg1 ;
-(BOOL)shouldBadgeContactSyncCell;
-(void)dismissContactSyncBadge;
-(id)initWithUserSettings:(id)arg1 peopleTabConfiguration:(id)arg2 ;
-(BOOL)_shouldShowContactSyncBadgeWithDismissEnabled:(BOOL)arg1 ;
-(BOOL)_isContactSyncBadgeDismissed;
-(void)_setBadgeCount:(long long)arg1 ;
-(void)removeTabBadgeCountControllerListener:(id)arg1 ;
-(void)dealloc;
-(void)_updateBadgeCount;
-(long long)badgeCount;
@end
