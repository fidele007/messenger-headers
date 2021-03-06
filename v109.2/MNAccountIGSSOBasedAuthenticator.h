/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNUserLoginDelegate.h>
#import <Messenger/MNAccountAuthenticating.h>
#import <Messenger/MNIGAccountLoginRequestSenderDelegate.h>

@protocol MNAccountAuthenticatingDataSource;
@class MNAccountIGSSOBasedAuthenticatorInjector, NSString;

@interface MNAccountIGSSOBasedAuthenticator : NSObject <FBClassInjectable, MNUserLoginDelegate, MNAccountAuthenticating, MNIGAccountLoginRequestSenderDelegate> {

	MNAccountIGSSOBasedAuthenticatorInjector* _injector;
	/*^block*/id _isUnavailableForAccountBlock;
	/*^block*/id _didAuthenticateBlock;
	/*^block*/id _didFailWithErrorBlock;
	/*^block*/id _didCancelBlock;
	BOOL _isAuthenticating;
	NSString* _userAccountId;
	NSString* _userDisplayName;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
+(Class)injectorClass;
-(void)userLogin:(id)arg1 didFinishWithCredentials:(id)arg2 httpCookies:(id)arg3 rawResponse:(id)arg4 userStorageServerKey:(id)arg5 usingSSO:(BOOL)arg6 ;
-(void)userLogin:(id)arg1 couldNotLoginUser:(id)arg2 usingSSO:(BOOL)arg3 ;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(void)_fetchIGCredentialsThenAuthenticateAccount;
-(void)_authenticateAccountWithIGAccessToken:(id)arg1 ;
-(void)_loginWithAccessToken:(id)arg1 ;
-(void)_loginWithLoginApprovalCode:(id)arg1 ;
-(void)_fetchPermissionToLoginWithUserDisplayName:(id)arg1 accountId:(id)arg2 accessToken:(id)arg3 ;
-(void)_fetchLoginApprovalCode;
-(void)igAccountLoginRequestSender:(id)arg1 didFinishWithUserDisplayName:(id)arg2 accountId:(id)arg3 accessToken:(id)arg4 ;
-(void)igAccountLoginRequestSenderDidFinishWithNoAccountFound:(id)arg1 ;
-(void)igAccountLoginRequestSender:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_completeWithDidCancel;
-(void)_completeWithDidAuthenticateWithFacebookCredentials:(id)arg1 httpsCookies:(id)arg2 userStorageServerKey:(id)arg3 ;
-(void)_completeWithDidFailWithError:(id)arg1 ;
-(void)_completeWithIsUnavailableForAccount;
-(void)_clearRetainedBlocks;
-(id)analyticsTag;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(id)initWithInjector:(id)arg1 ;
-(void)_showErrorAlertWithError:(id)arg1 ;
@end

