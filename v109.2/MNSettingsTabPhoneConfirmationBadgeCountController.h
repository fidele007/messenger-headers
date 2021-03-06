/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMLoggedInUserInfoManagerListening.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNTabBadgeCountController.h>

@class MNTabBadgeCountControllerListenerAnnouncer, FBMLoggedInUserInfoManager, MNSettingsTabBadgeExperimentContext, MNUserSettings, NSString;

@interface MNSettingsTabPhoneConfirmationBadgeCountController : NSObject <FBMLoggedInUserInfoManagerListening, FBViewerContextClassProvidable, MNTabBadgeCountController> {

	MNTabBadgeCountControllerListenerAnnouncer* _tabBadgeCountControllerListenerAnnouncer;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNSettingsTabBadgeExperimentContext* _settingsTabBadgeExperimentContext;
	MNUserSettings* _userSettings;
	long long _badgeCount;

}

@property (nonatomic,readonly) BOOL shouldBadgeUserInfoCell; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long badgeCount;                      //@synthesize badgeCount=_badgeCount - In the implementation block
-(void)addTabBadgeCountControllerListener:(id)arg1 ;
-(BOOL)shouldBadgeUserInfoCell;
-(void)dismissPhoneConfirmationBadge;
-(void)didUpdateLoggedInUser;
-(void)loggedInUserDidUpdatePhoneInfo;
-(void)removeTabBadgeCountControllerListener:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 tabBadgeCountControllerListenerAnnouncer:(id)arg2 loggedInUserInfoManager:(id)arg3 userSettings:(id)arg4 ;
-(BOOL)_shouldShowBadgeWithDismissEnabled:(BOOL)arg1 ;
-(void)_setBadgeCount:(long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)dealloc;
-(void)_updateBadgeCount;
-(long long)badgeCount;
@end

