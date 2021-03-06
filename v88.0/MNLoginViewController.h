/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNLoginViewDataSource.h>
#import <Messenger/MNLoginViewDelegate.h>
#import <Messenger/MNUserLoginDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNUserLogin, MNLoginViewControllerDelegate, FBProvider;
@class MNLoginView, MNLoginErrorHandler, MNLoginCredentialsHandler, MNMainAppCredentialsFetcher, MNLoginViewConfiguration, FBKeyboardObserver, MNRegistrationExperimentOverrides, MNAuthenticationOptionsExperimentContext, MNRegistrationExistingAccount, FBUserSession, FBLocaleMap, NSString;

@interface MNLoginViewController : UIViewController <MNLoginViewDataSource, MNLoginViewDelegate, MNUserLoginDelegate, FBKeyboardObserverDelegate, FBClassProvidable> {

	BOOL _forceEmailPasswordLogin;
	BOOL _loginApprovalRequired;
	id<MNUserLogin> _userLogin;
	MNLoginView* _loginView;
	MNLoginErrorHandler* _loginErrorHandler;
	MNLoginCredentialsHandler* _loginCredentialsHandler;
	MNMainAppCredentialsFetcher* _mainAppCredentialsFetcher;
	MNLoginViewConfiguration* _loginViewConfiguration;
	FBKeyboardObserver* _keyboardObserver;
	MNRegistrationExperimentOverrides* _registrationExperimentOverrides;
	MNAuthenticationOptionsExperimentContext* _authenticationOptionsExperimentContext;
	BOOL _ssoLoginAllowed;
	BOOL _isReactivation;
	MNRegistrationExistingAccount* _existingAccount;
	id<MNLoginViewControllerDelegate> _delegate;
	FBUserSession* _session;
	id<FBProvider> _userLoginProvider;
	FBLocaleMap* _localeMap;
	NSString* _loginSecret;

}

@property (nonatomic,retain) FBUserSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) id<FBProvider> userLoginProvider;                               //@synthesize userLoginProvider=_userLoginProvider - In the implementation block
@property (nonatomic,retain) FBLocaleMap * localeMap;                                        //@synthesize localeMap=_localeMap - In the implementation block
@property (nonatomic,copy) NSString * loginSecret;                                           //@synthesize loginSecret=_loginSecret - In the implementation block
@property (assign,nonatomic) BOOL ssoLoginAllowed;                                           //@synthesize ssoLoginAllowed=_ssoLoginAllowed - In the implementation block
@property (assign,nonatomic) BOOL showsMainActivityIndicator; 
@property (assign,nonatomic) BOOL showsRegisterButtonActivityIndicator; 
@property (assign,nonatomic) BOOL isReactivation;                                            //@synthesize isReactivation=_isReactivation - In the implementation block
@property (nonatomic,retain) MNRegistrationExistingAccount * existingAccount;                //@synthesize existingAccount=_existingAccount - In the implementation block
@property (assign,nonatomic,__weak) id<MNLoginViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_analyticsStringForLoginViewType:(unsigned long long)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(BOOL)_shouldDisableAutoFocusUsernameField;
-(BOOL)_shouldShowContinueWithPhoneNumberButton;
-(BOOL)_shouldShowDescriptionTextViewForRegisterButton;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(FBLocaleMap *)localeMap;
-(id)analyticsExtras;
-(void)userLogin:(id)arg1 didFinishWithCredentials:(id)arg2 httpCookies:(id)arg3 rawResponse:(id)arg4 userStorageServerKey:(id)arg5 usingSSO:(BOOL)arg6 ;
-(void)userLogin:(id)arg1 couldNotLoginUser:(id)arg2 usingSSO:(BOOL)arg3 ;
-(id)loginViewUserIdForKeychainSSOLogin:(id)arg1 ;
-(id)loginViewUserDisplayNameForKeychainSSOLogin:(id)arg1 ;
-(void)loginViewDidTapRegisterButton:(id)arg1 ;
-(void)loginViewDidTapSwitchUserButton:(id)arg1 ;
-(void)loginViewDidTapForgotPassword:(id)arg1 ;
-(void)loginViewDidTapLoginWithUsernameAndPasswordButton:(id)arg1 ;
-(void)loginViewDidTapLoginWithKeychainSSOButton:(id)arg1 ;
-(void)loginViewDidTapBackButton:(id)arg1 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)setShowsRegisterButtonActivityIndicator:(BOOL)arg1 ;
-(BOOL)showsRegisterButtonActivityIndicator;
-(NSString *)loginSecret;
-(id)initWithUserSession:(id)arg1 localeMap:(id)arg2 loginSecret:(id)arg3 userLoginProvider:(id)arg4 mainAppCredentialsFetcher:(id)arg5 loginViewConfiguration:(id)arg6 loginErrorHandler:(id)arg7 loginCredentialsHandler:(id)arg8 ;
-(unsigned long long)_currentLoginViewType;
-(void)_enableUsernameAndPasswordEditingIfNeccessary;
-(BOOL)_shouldStartObservingKeyboardNotifications:(unsigned long long)arg1 ;
-(BOOL)_shouldHideNavigationBar:(unsigned long long)arg1 ;
-(void)_updateShowsBorder;
-(void)forceEmailPasswordLogin;
-(void)_showLoginApprovalAlert;
-(void)_showLoginErrorAlert:(id)arg1 ;
-(id)_usernameForAuthentication;
-(id)_passwordForAuthentication;
-(void)setShowsMainActivityIndicator:(BOOL)arg1 ;
-(BOOL)showsMainActivityIndicator;
-(void)abortLogin;
-(BOOL)ssoLoginAllowed;
-(void)setSsoLoginAllowed:(BOOL)arg1 ;
-(BOOL)isReactivation;
-(void)setIsReactivation:(BOOL)arg1 ;
-(id<FBProvider>)userLoginProvider;
-(void)setUserLoginProvider:(id<FBProvider>)arg1 ;
-(void)setLocaleMap:(FBLocaleMap *)arg1 ;
-(void)setLoginSecret:(NSString *)arg1 ;
-(void)setDelegate:(id<MNLoginViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MNLoginViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)updateLayout:(id)arg1 ;
-(MNRegistrationExistingAccount *)existingAccount;
-(void)setExistingAccount:(MNRegistrationExistingAccount *)arg1 ;
@end

