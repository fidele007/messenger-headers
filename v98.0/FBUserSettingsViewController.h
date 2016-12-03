/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewController.h>

@protocol FBGraphUser;
@class NSArray, FBProfilePictureView, UIImageView, UILabel, UIButton, NSBundle;

@interface FBUserSettingsViewController : FBViewController {

	BOOL _attemptingLogin;
	NSArray* _permissions;
	NSArray* _readPermissions;
	NSArray* _publishPermissions;
	unsigned long long _defaultAudience;
	FBProfilePictureView* _profilePicture;
	UIImageView* _backgroundImageView;
	UILabel* _connectedStateLabel;
	id<FBGraphUser> _me;
	UIButton* _loginLogoutButton;
	NSBundle* _bundle;
	/*^block*/id _sessionStateHandler;
	/*^block*/id _requestHandler;

}

@property (nonatomic,retain) FBProfilePictureView * profilePicture;              //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * connectedStateLabel;                      //@synthesize connectedStateLabel=_connectedStateLabel - In the implementation block
@property (nonatomic,retain) id<FBGraphUser> me;                                 //@synthesize me=_me - In the implementation block
@property (nonatomic,retain) UIButton * loginLogoutButton;                       //@synthesize loginLogoutButton=_loginLogoutButton - In the implementation block
@property (assign,nonatomic) BOOL attemptingLogin;                               //@synthesize attemptingLogin=_attemptingLogin - In the implementation block
@property (nonatomic,retain) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,copy) id sessionStateHandler;                               //@synthesize sessionStateHandler=_sessionStateHandler - In the implementation block
@property (nonatomic,copy) id requestHandler;                                    //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) NSArray * permissions;                                //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray * readPermissions;                            //@synthesize readPermissions=_readPermissions - In the implementation block
@property (nonatomic,copy) NSArray * publishPermissions;                         //@synthesize publishPermissions=_publishPermissions - In the implementation block
@property (assign,nonatomic) unsigned long long defaultAudience;                 //@synthesize defaultAudience=_defaultAudience - In the implementation block
-(FBProfilePictureView *)profilePicture;
-(void)setProfilePicture:(FBProfilePictureView *)arg1 ;
-(void)updateControls;
-(unsigned long long)defaultAudience;
-(void)setDefaultAudience:(unsigned long long)arg1 ;
-(void)setReadPermissions:(NSArray *)arg1 ;
-(void)setPublishPermissions:(NSArray *)arg1 ;
-(id)sessionStateHandler;
-(void)setSessionStateHandler:(id)arg1 ;
-(void)initializeBlocks;
-(NSArray *)publishPermissions;
-(NSArray *)readPermissions;
-(void)sessionStateChanged:(id)arg1 state:(unsigned long long)arg2 error:(id)arg3 ;
-(void)setAttemptingLogin:(BOOL)arg1 ;
-(void)setConnectedStateLabel:(UILabel *)arg1 ;
-(UILabel *)connectedStateLabel;
-(void)setLoginLogoutButton:(UIButton *)arg1 ;
-(UIButton *)loginLogoutButton;
-(void)loginLogoutButtonPressed:(id)arg1 ;
-(void)openSession:(BOOL)arg1 ;
-(void)handleActiveSessionStateChanged:(id)arg1 ;
-(BOOL)attemptingLogin;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateBackgroundImage;
-(UIImageView *)backgroundImageView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(id<FBGraphUser>)me;
-(void)setMe:(id<FBGraphUser>)arg1 ;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)setRequestHandler:(id)arg1 ;
-(id)requestHandler;
@end

