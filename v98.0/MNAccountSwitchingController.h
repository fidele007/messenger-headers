/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@protocol MNAccountAuthenticating, MNAccountSwitchingControllerDataSource, MNAccountAuthenticatingDataSource, MNAccountSwitchingControllerDelegate;
@class MNAccountSwitchingControllerInjector, NSString;

@interface MNAccountSwitchingController : NSObject <FBClassInjectable> {

	MNAccountSwitchingControllerInjector* _injector;
	NSString* _machineID;
	id<MNAccountAuthenticating> _accountAuthenticator;
	BOOL _isSwitching;
	id<MNAccountSwitchingControllerDataSource> _accountSwitchingDataSource;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;
	id<MNAccountSwitchingControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountSwitchingControllerDataSource> accountSwitchingDataSource;              //@synthesize accountSwitchingDataSource=_accountSwitchingDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;                     //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MNAccountSwitchingControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(void)setAccountSwitchingDataSource:(id<MNAccountSwitchingControllerDataSource>)arg1 ;
-(void)switchWithAccountSwitchingRequest:(id)arg1 accountSwitchingRequestSource:(id)arg2 ;
-(void)_switchToAccountWithFBID:(id)arg1 accountDisplayName:(id)arg2 accountSwitchingRequestSource:(id)arg3 ;
-(void)_switchToAccountWithFBID:(id)arg1 accountSwitchingRequestSource:(id)arg2 ;
-(void)_authenticateWithAuthenticationContext:(id)arg1 accountSwitchingRequestSource:(id)arg2 ;
-(void)_continueWithCredentials:(id)arg1 httpCookies:(id)arg2 userStorageServerKey:(id)arg3 accountSwitchingRequestSource:(id)arg4 ;
-(void)_didFailWithLoginError:(id)arg1 ;
-(void)_didFailWithAttemptToSwitchToLoggedInAccount;
-(void)_fetchAndSavePasswordlessLoginSettingsWithPendingAccount:(id)arg1 ;
-(void)_fetchAndStoreLoggedInUserAccountThenSwitchToAccountWithPendingAccount:(id)arg1 ;
-(void)_storeLoggedInAccount:(id)arg1 pendingAccount:(id)arg2 ;
-(void)_fetchAndSaveNotificationsAccessTokenWithLoggedInAccount:(id)arg1 pendingAccount:(id)arg2 ;
-(void)_saveNotificationsAccessToken:(id)arg1 forAccountWithFBID:(id)arg2 ;
-(void)_switchToAccountWithPendingAccount:(id)arg1 ;
-(void)_resetAnyPersistedState;
-(id<MNAccountSwitchingControllerDataSource>)accountSwitchingDataSource;
-(void)setDelegate:(id<MNAccountSwitchingControllerDelegate>)arg1 ;
-(id<MNAccountSwitchingControllerDelegate>)delegate;
-(void)_didCancel;
-(void)_didFailWithError:(id)arg1 ;
@end

