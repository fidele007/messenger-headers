/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNMinibarToastViewDelegate.h>
#import <Messenger/MNProfilePictureSelectionViewControllerDelegate.h>

@class MNUploadProfilePictureToastControllerInjector, MNProfilePictureSelectionViewController, MNMinibarToastView, FBToast, FBToastPresenter, NSString;

@interface MNUploadProfilePictureToastController : NSObject <FBClassInjectable, MNMinibarToastViewDelegate, MNProfilePictureSelectionViewControllerDelegate> {

	MNUploadProfilePictureToastControllerInjector* _injector;
	MNProfilePictureSelectionViewController* _presentedProfilePictureSelectionViewController;
	MNMinibarToastView* _toastView;
	FBToast* _toast;
	FBToastPresenter* _toastPresenter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) FBToastPresenter * toastPresenter;              //@synthesize toastPresenter=_toastPresenter - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidTapNotNow:(id)arg1 ;
-(void)profilePictureSelectionViewControllerDidSelectProfilePicture:(id)arg1 ;
-(void)_dismissProfilePictureSelectionViewController;
-(void)setToastPresenter:(FBToastPresenter *)arg1 ;
-(void)dismissToastAnimated:(BOOL)arg1 ;
-(void)showToastIfNecessaryAnimated:(BOOL)arg1 ;
-(void)_initializeToastIfNeeded;
-(FBToastPresenter *)toastPresenter;
-(void)_launchProfilePictureSelectionFlow;
-(void)_fetchLoggedInUserAndDismissProfilePictureSelectionFlow;
-(BOOL)_isProfilePictureSelectionCurrentlyPresented;
-(void)minibarToastViewDidPressButton:(id)arg1 ;
@end
