/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <FBSharedFramework/FBFacebookRequestSender.h>
#import <FBSharedFramework/FBMessengerRequestManager.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNAuthenticationManager, FBProvider;
@class FBFacebook, FBAPISessionStore, UIAlertView, NSString;

@interface OrcaMessengerRequestManager : NSObject <UIAlertViewDelegate, FBFacebookRequestSender, FBMessengerRequestManager, FBViewerContextClassProvidable> {

	FBFacebook* _facebook;
	id<MNAuthenticationManager> _authManager;
	id<FBProvider> _logoutManagerProvider;
	FBAPISessionStore* _sessionStore;
	UIAlertView* _alertView;

}

@property (nonatomic,retain) FBFacebook * facebook;                                //@synthesize facebook=_facebook - In the implementation block
@property (nonatomic,retain) id<MNAuthenticationManager> authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) id<FBProvider> logoutManagerProvider;                 //@synthesize logoutManagerProvider=_logoutManagerProvider - In the implementation block
@property (nonatomic,retain) FBAPISessionStore * sessionStore;                     //@synthesize sessionStore=_sessionStore - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                              //@synthesize alertView=_alertView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)setLogoutManagerProvider:(id<FBProvider>)arg1 ;
-(id)initWithFacebook:(id)arg1 authenticationManager:(id)arg2 logoutManagerProvider:(id)arg3 sessionStore:(id)arg4 ;
-(FBFacebook *)facebook;
-(void)showSessionExpiredAlertDueToError:(id)arg1 ;
-(FBAPISessionStore *)sessionStore;
-(id<FBProvider>)logoutManagerProvider;
-(void)completeFBRequestError;
-(id)sendSynchronousRequestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 withError:(id*)arg4 ;
-(id)sendSynchronousRequestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 withError:(id*)arg4 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleFBRequestError:(id)arg1 ;
-(id)squarePhotoURLForUserId:(id)arg1 ;
-(id)sendSynchronousRequestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andTimeout:(double)arg4 withError:(id*)arg5 ;
-(id)facebookErrorDomain;
-(id<MNAuthenticationManager>)authManager;
-(void)setSessionStore:(FBAPISessionStore *)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)setFacebook:(FBFacebook *)arg1 ;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
@end

