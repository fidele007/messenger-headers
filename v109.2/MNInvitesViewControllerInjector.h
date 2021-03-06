/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNInviteEligibilityChecking;
@class FBProviderMapData, MNMultiPeoplePickerViewController, FBUserSession, FBAnalytics, FBMobileConfigContextManager, MNInviteListFacebookContactsRetriever, MNInviteListAddressBookContactsRetriever, MNInviteListRemoteRankedContactsRetriever, MNInvitesCooldownController, MNInvitesViewControllerConfiguration;

@interface MNInvitesViewControllerInjector : NSObject {

	FBProviderMapData* _mapData;
	MNMultiPeoplePickerViewController* _multiPeoplePickerViewController;
	FBUserSession* _session;
	FBAnalytics* _analytics;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNInviteListFacebookContactsRetriever* _inviteListFacebookContactsRetriever;
	MNInviteListAddressBookContactsRetriever* _inviteListAddressBookContactsRetriever;
	MNInviteListRemoteRankedContactsRetriever* _inviteListRemoteRankedContactsRetriever;
	MNInvitesCooldownController* _invitesCooldownController;
	MNInvitesViewControllerConfiguration* _invitesViewControllerConfiguration;
	unsigned long long _source;

}

@property (nonatomic,readonly) MNMultiPeoplePickerViewController * multiPeoplePickerViewController;                              //@synthesize multiPeoplePickerViewController=_multiPeoplePickerViewController - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBAnalytics * analytics;                                                                          //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * mobileConfigContextManager;                                        //@synthesize mobileConfigContextManager=_mobileConfigContextManager - In the implementation block
@property (nonatomic,readonly) id<MNInviteEligibilityChecking> inviteEligibilityChecker;                                         //@synthesize inviteEligibilityChecker=_inviteEligibilityChecker - In the implementation block
@property (nonatomic,readonly) MNInviteListFacebookContactsRetriever * inviteListFacebookContactsRetriever;                      //@synthesize inviteListFacebookContactsRetriever=_inviteListFacebookContactsRetriever - In the implementation block
@property (nonatomic,readonly) MNInviteListAddressBookContactsRetriever * inviteListAddressBookContactsRetriever;                //@synthesize inviteListAddressBookContactsRetriever=_inviteListAddressBookContactsRetriever - In the implementation block
@property (nonatomic,readonly) MNInviteListRemoteRankedContactsRetriever * inviteListRemoteRankedContactsRetriever;              //@synthesize inviteListRemoteRankedContactsRetriever=_inviteListRemoteRankedContactsRetriever - In the implementation block
@property (nonatomic,readonly) MNInvitesCooldownController * invitesCooldownController;                                          //@synthesize invitesCooldownController=_invitesCooldownController - In the implementation block
@property (nonatomic,readonly) MNInvitesViewControllerConfiguration * invitesViewControllerConfiguration;                        //@synthesize invitesViewControllerConfiguration=_invitesViewControllerConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long source;                                                                        //@synthesize source=_source - In the implementation block
-(id<MNInviteEligibilityChecking>)inviteEligibilityChecker;
-(MNMultiPeoplePickerViewController *)multiPeoplePickerViewController;
-(id)initWithProviderMapData:(id)arg1 invitesViewControllerConfiguration:(id)arg2 source:(unsigned long long)arg3 ;
-(MNInviteListAddressBookContactsRetriever *)inviteListAddressBookContactsRetriever;
-(MNInviteListFacebookContactsRetriever *)inviteListFacebookContactsRetriever;
-(MNInviteListRemoteRankedContactsRetriever *)inviteListRemoteRankedContactsRetriever;
-(MNInvitesCooldownController *)invitesCooldownController;
-(MNInvitesViewControllerConfiguration *)invitesViewControllerConfiguration;
-(FBMobileConfigContextManager *)mobileConfigContextManager;
-(FBAnalytics *)analytics;
-(unsigned long long)source;
-(FBUserSession *)session;
@end

