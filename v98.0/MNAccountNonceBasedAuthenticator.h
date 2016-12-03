/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNAccountAuthenticating.h>

@protocol MNAccountAuthenticatingDataSource;
@class FBAuthenticationDeviceBasedLoginHandler, MNAccountSettings, MNAccountStore, NSString;

@interface MNAccountNonceBasedAuthenticator : NSObject <FBClassProvidable, MNAccountAuthenticating> {

	FBAuthenticationDeviceBasedLoginHandler* _authenticationDeviceBasedLoginHandler;
	MNAccountSettings* _accountSettings;
	MNAccountStore* _accountStore;
	BOOL _isAuthenticating;
	id<MNAccountAuthenticatingDataSource> _authenticatingDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNAccountAuthenticatingDataSource> authenticatingDataSource;              //@synthesize authenticatingDataSource=_authenticatingDataSource - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)authenticateAccountWithAuthenticationContext:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 didCancelBlock:(/*^block*/id)arg5 ;
-(id)analyticsTag;
-(void)setAuthenticatingDataSource:(id<MNAccountAuthenticatingDataSource>)arg1 ;
-(BOOL)mayContinueAuthenticationOnFailure;
-(id<MNAccountAuthenticatingDataSource>)authenticatingDataSource;
-(id)initWithAuthenticationDeviceBasedLoginHandler:(id)arg1 accountSettings:(id)arg2 accountStore:(id)arg3 ;
-(void)_authenticateAccountWithFBID:(id)arg1 isUnavailableForAccountBlock:(/*^block*/id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 ;
-(void)_authenticateAccountWithFBID:(id)arg1 withDeviceBasedAccountCredential:(id)arg2 didAuthenticateBlock:(/*^block*/id)arg3 didFailWithErrorBlock:(/*^block*/id)arg4 ;
@end
