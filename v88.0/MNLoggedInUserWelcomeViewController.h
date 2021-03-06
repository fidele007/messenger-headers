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
#import <Messenger/FBClassProvidable.h>

@protocol MNLoggedInUserWelcomeViewControllerDelegate;
@class MNLoginView, FBMLoggedInUserInfoManager, MNLoginViewConfiguration, NSString;

@interface MNLoggedInUserWelcomeViewController : UIViewController <MNLoginViewDataSource, MNLoginViewDelegate, FBClassProvidable> {

	id<MNLoggedInUserWelcomeViewControllerDelegate> _delegate;
	MNLoginView* _loginView;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	MNLoginViewConfiguration* _loginViewConfiguration;

}

@property (nonatomic,retain) MNLoginView * loginView;                                                      //@synthesize loginView=_loginView - In the implementation block
@property (nonatomic,retain) FBMLoggedInUserInfoManager * loggedInUserInfoManager;                         //@synthesize loggedInUserInfoManager=_loggedInUserInfoManager - In the implementation block
@property (nonatomic,retain) MNLoginViewConfiguration * loginViewConfiguration;                            //@synthesize loginViewConfiguration=_loginViewConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<MNLoggedInUserWelcomeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)initWithLoggedInUserInfoManager:(id)arg1 loginViewConfiguration:(id)arg2 ;
-(id)loginViewUserIdForKeychainSSOLogin:(id)arg1 ;
-(id)loginViewUserDisplayNameForKeychainSSOLogin:(id)arg1 ;
-(void)loginViewDidTapRegisterButton:(id)arg1 ;
-(void)loginViewDidTapSwitchUserButton:(id)arg1 ;
-(void)loginViewDidTapForgotPassword:(id)arg1 ;
-(void)loginViewDidTapLoginWithUsernameAndPasswordButton:(id)arg1 ;
-(void)loginViewDidTapLoginWithKeychainSSOButton:(id)arg1 ;
-(void)loginViewDidTapBackButton:(id)arg1 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(MNLoginView *)loginView;
-(void)setLoginView:(MNLoginView *)arg1 ;
-(FBMLoggedInUserInfoManager *)loggedInUserInfoManager;
-(void)setLoggedInUserInfoManager:(FBMLoggedInUserInfoManager *)arg1 ;
-(MNLoginViewConfiguration *)loginViewConfiguration;
-(void)setLoginViewConfiguration:(MNLoginViewConfiguration *)arg1 ;
-(void)setDelegate:(id<MNLoggedInUserWelcomeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNLoggedInUserWelcomeViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

