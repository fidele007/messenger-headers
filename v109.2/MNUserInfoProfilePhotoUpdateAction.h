/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNProfilePictureSelectionViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNUserInfoUpdateAction.h>

@protocol FBMProfileURLUtils, MNModalPresentation, FBProvider, MNUserInfoUpdateActionDelegate;
@class FBUserSession, FBMobileConfigContextManager, UIApplication, FBCaptureManager, FBMUser, NSString;

@interface MNUserInfoProfilePhotoUpdateAction : NSObject <MNProfilePictureSelectionViewControllerDelegate, FBClassProvidable, MNUserInfoUpdateAction> {

	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	UIApplication* _application;
	id<FBMProfileURLUtils> _profileURLUtils;
	FBCaptureManager* _captureManager;
	id<MNModalPresentation> _modalPresenter;
	id<FBProvider> _profilePhotoUploader;
	FBMUser* _user;
	id<MNUserInfoUpdateActionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<MNUserInfoUpdateActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)profilePictureSelectionViewControllerDidTapNotNow:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidSelectProfilePicture:(id)arg1 ;
-(void)presentWithSourceView:(id)arg1 ;
-(id)initWithSession:(id)arg1 configManager:(id)arg2 application:(id)arg3 profileURLUtils:(id)arg4 captureManager:(id)arg5 modalPresenter:(id)arg6 profilePhotoUploader:(id)arg7 ;
-(BOOL)_canUpdateProfilePhoto;
-(void)_presentProfilePictureSelectionViewController;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)actionTitle;
-(void)setDelegate:(id<MNUserInfoUpdateActionDelegate>)arg1 ;
-(id<MNUserInfoUpdateActionDelegate>)delegate;
-(BOOL)isAvailable;
-(FBMUser *)user;
-(void)setUser:(FBMUser *)arg1 ;
@end

