/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, FBUserSession, FBMobileConfigContextManager, MNGroupsCustomSettingsViewController, MNNavigationCoordinator, MNGroupsRoomCreateViewController, MNAppThemeConfiguration, FBMPinnedGroupsManager, MNTopContactsRetriever, FBMSPDeltaHandlerListenerAnnouncer, MNThreadStore, NSString;

@interface MNGroupsRoomCreateFlowCoordinatorInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNGroupsCustomSettingsViewController* _customSettingsViewController;
	MNNavigationCoordinator* _navigationCoordinator;
	MNGroupsRoomCreateViewController* _roomCreateViewController;
	MNAppThemeConfiguration* _appThemeConfiguration;
	FBMPinnedGroupsManager* _groupsTabManager;
	MNTopContactsRetriever* _topContactsRetriever;
	FBMSPDeltaHandlerListenerAnnouncer* _deltaHandlerListenerAnnouncer;
	MNThreadStore* _threadStore;

}

@property (nonatomic,readonly) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                     //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNGroupsCustomSettingsViewController * customSettingsViewController;              //@synthesize customSettingsViewController=_customSettingsViewController - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                                  //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomCreateViewController * roomCreateViewController;                      //@synthesize roomCreateViewController=_roomCreateViewController - In the implementation block
@property (nonatomic,readonly) MNAppThemeConfiguration * appThemeConfiguration;                                  //@synthesize appThemeConfiguration=_appThemeConfiguration - In the implementation block
@property (nonatomic,readonly) FBMPinnedGroupsManager * groupsTabManager;                                        //@synthesize groupsTabManager=_groupsTabManager - In the implementation block
@property (nonatomic,readonly) MNTopContactsRetriever * topContactsRetriever;                                    //@synthesize topContactsRetriever=_topContactsRetriever - In the implementation block
@property (nonatomic,readonly) FBMSPDeltaHandlerListenerAnnouncer * deltaHandlerListenerAnnouncer;               //@synthesize deltaHandlerListenerAnnouncer=_deltaHandlerListenerAnnouncer - In the implementation block
@property (nonatomic,readonly) MNThreadStore * threadStore;                                                      //@synthesize threadStore=_threadStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNThreadStore *)threadStore;
-(MNGroupsCustomSettingsViewController *)customSettingsViewController;
-(FBMSPDeltaHandlerListenerAnnouncer *)deltaHandlerListenerAnnouncer;
-(FBMPinnedGroupsManager *)groupsTabManager;
-(id)nonCachedGroupsRoomsCreator;
-(id)nonCachedThreadNavigationCoordinator;
-(MNGroupsRoomCreateViewController *)roomCreateViewController;
-(MNTopContactsRetriever *)topContactsRetriever;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNAppThemeConfiguration *)appThemeConfiguration;
-(FBUserSession *)session;
@end

