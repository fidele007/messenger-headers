/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, FBAPISessionStore, MNAccountFactory, MNAccountStore, MNAccountSettings, MNAccountAuthenticatorFactory, MNAccountNotificationsAccessTokenRequestController, MNAccountNotificationsAccessTokenStore, MNPendingAccountController, MNAccountUserInformationFetchRequestController, NSString;

@interface MNAccountSwitchingControllerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	FBAPISessionStore* _apiSessionStore;
	MNAccountFactory* _accountFactory;
	MNAccountStore* _accountStore;
	MNAccountSettings* _accountSettings;
	MNAccountAuthenticatorFactory* _accountAuthenticatorFactory;
	MNAccountNotificationsAccessTokenRequestController* _notificationsAccessTokenRequestController;
	MNAccountNotificationsAccessTokenStore* _notificationsAccessTokenStore;
	MNPendingAccountController* _pendingAccountController;
	MNAccountUserInformationFetchRequestController* _accountUserInformationFetchRequestController;

}

@property (nonatomic,readonly) FBAPISessionStore * apiSessionStore;                                                                         //@synthesize apiSessionStore=_apiSessionStore - In the implementation block
@property (nonatomic,readonly) MNAccountFactory * accountFactory;                                                                           //@synthesize accountFactory=_accountFactory - In the implementation block
@property (nonatomic,readonly) MNAccountStore * accountStore;                                                                               //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) MNAccountSettings * accountSettings;                                                                         //@synthesize accountSettings=_accountSettings - In the implementation block
@property (nonatomic,readonly) MNAccountAuthenticatorFactory * accountAuthenticatorFactory;                                                 //@synthesize accountAuthenticatorFactory=_accountAuthenticatorFactory - In the implementation block
@property (nonatomic,readonly) MNAccountNotificationsAccessTokenRequestController * notificationsAccessTokenRequestController;              //@synthesize notificationsAccessTokenRequestController=_notificationsAccessTokenRequestController - In the implementation block
@property (nonatomic,readonly) MNAccountNotificationsAccessTokenStore * notificationsAccessTokenStore;                                      //@synthesize notificationsAccessTokenStore=_notificationsAccessTokenStore - In the implementation block
@property (nonatomic,readonly) MNPendingAccountController * pendingAccountController;                                                       //@synthesize pendingAccountController=_pendingAccountController - In the implementation block
@property (nonatomic,readonly) MNAccountUserInformationFetchRequestController * accountUserInformationFetchRequestController;               //@synthesize accountUserInformationFetchRequestController=_accountUserInformationFetchRequestController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBAPISessionStore *)apiSessionStore;
-(MNAccountSettings *)accountSettings;
-(MNPendingAccountController *)pendingAccountController;
-(MNAccountUserInformationFetchRequestController *)accountUserInformationFetchRequestController;
-(MNAccountAuthenticatorFactory *)accountAuthenticatorFactory;
-(MNAccountFactory *)accountFactory;
-(MNAccountNotificationsAccessTokenRequestController *)notificationsAccessTokenRequestController;
-(MNAccountNotificationsAccessTokenStore *)notificationsAccessTokenStore;
-(MNAccountStore *)accountStore;
@end

