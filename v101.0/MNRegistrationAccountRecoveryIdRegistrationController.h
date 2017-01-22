/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRegistrationAccountRecoveryIdRegistrationRequestSender.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, MNUserSettings, FBMLoggedInUserInfoManager, MNRegistrationAccountRecoveryIdFetcher, MNRegistrationAccountRecoveryIdRegistrationRequestSender, MNUserSetUpStatePersister, FBAnalytics, NSString;

@interface MNRegistrationAccountRecoveryIdRegistrationController : NSObject <MNRegistrationAccountRecoveryIdRegistrationRequestSender, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	MNUserSettings* _userSettings;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNRegistrationAccountRecoveryIdFetcher* _accountRecoveryIdFetcher;
	MNRegistrationAccountRecoveryIdRegistrationRequestSender* _accountRecoveryIdRegistrationRequestSender;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_analyticsModule;
-(id)initWithSession:(id)arg1 userSettings:(id)arg2 loggedInUserManager:(id)arg3 accountRecoveryIdFetcher:(id)arg4 userSetUpStatePersister:(id)arg5 analytics:(id)arg6 ;
-(BOOL)_shouldSendAccountRecoveryIdRegistrationRequest;
-(void)_sendAccountRecoveryIdRegistrationRequest;
-(id)_loggedInUserPhoneInfo;
-(void)_sendAccountRecoveryIdRegistrationRequestWithAccountRecoveryId:(id)arg1 ;
-(id)_loggedInUserPhoneNumber;
-(void)accountRecoveryIdRegistrationRequestSenderDidFinish:(id)arg1 ;
-(void)accountRecoveryIdRegistrationRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sendAccountRecoveryIdRegistrationRequestIfNecessary;
@end
