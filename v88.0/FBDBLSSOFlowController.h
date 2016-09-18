/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAuthControllingDelegate.h>
#import <Messenger/FBAuthenticationMethodHandlerDelegate.h>
#import <Messenger/FBAuthControlling.h>

@protocol FBDBLSSOFlowUIProviding, FBAuthUIPresenting, FBNetworkDispatch, FBAuthControllingDelegate;
@class FBDBLStoredUser, FBDBLPasswordFlowController, FBAuthenticationSSOHandler, NSString;

@interface FBDBLSSOFlowController : NSObject <FBAuthControllingDelegate, FBAuthenticationMethodHandlerDelegate, FBAuthControlling> {

	FBDBLStoredUser* _storedUser;
	id<FBDBLSSOFlowUIProviding> _uiProvider;
	id<FBAuthUIPresenting> _uiPresenter;
	id<FBNetworkDispatch> _requesterConfiguration;
	id<FBAuthControllingDelegate> _authDelegate;
	FBDBLPasswordFlowController* _passwordFlowController;
	FBAuthenticationSSOHandler* _authHandler;

}

@property (nonatomic,retain) FBDBLPasswordFlowController * passwordFlowController;              //@synthesize passwordFlowController=_passwordFlowController - In the implementation block
@property (nonatomic,retain) FBAuthenticationSSOHandler * authHandler;                          //@synthesize authHandler=_authHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBAuthControllingDelegate> authDelegate;                 //@synthesize authDelegate=_authDelegate - In the implementation block
-(id<FBAuthControllingDelegate>)authDelegate;
-(void)authenticationDeferred:(id)arg1 withReason:(id)arg2 ;
-(id)initWithUserInfo:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4 ;
-(void)setPasswordFlowController:(FBDBLPasswordFlowController *)arg1 ;
-(void)setAuthDelegate:(id<FBAuthControllingDelegate>)arg1 ;
-(void)authenticationCompleted:(id)arg1 withResponse:(id)arg2 ;
-(FBDBLPasswordFlowController *)passwordFlowController;
-(void)setAuthHandler:(FBAuthenticationSSOHandler *)arg1 ;
-(void)authenticationHandler:(id)arg1 isReady:(BOOL)arg2 ;
-(void)authenticationHandler:(id)arg1 didFailWithError:(id)arg2 ;
-(void)authenticationHandler:(id)arg1 didAuthenticateWithResponse:(id)arg2 ;
-(FBAuthenticationSSOHandler *)authHandler;
-(void)_authenticateWithPasswordFlow;
-(id)machineIDForAuthenticationHandler;
-(void)authenticate;
@end
