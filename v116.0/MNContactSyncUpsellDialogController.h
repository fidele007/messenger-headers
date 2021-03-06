/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPermissionRequestControllerDelegate.h>
#import <Messenger/MNContactSyncLearnMoreViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNModalPresentation, MNContactSyncUpsellDialogControllerDelegate;
@class MNContactImportPermissionRequestController, FBUserSession, MNUserSettings, MNContactSyncLearnMoreViewController, MNManageContactsPresenter, NSString;

@interface MNContactSyncUpsellDialogController : NSObject <MNPermissionRequestControllerDelegate, MNContactSyncLearnMoreViewControllerDelegate, FBClassProvidable> {

	MNContactImportPermissionRequestController* _contactImportPermissionRequestController;
	FBUserSession* _session;
	MNUserSettings* _userSettings;
	id<MNModalPresentation> _modalPresenter;
	MNContactSyncLearnMoreViewController* _contactSyncLearnMoreViewController;
	MNManageContactsPresenter* _manageContactsPresenter;
	id<MNContactSyncUpsellDialogControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContactSyncUpsellDialogControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactSyncLearnMoreViewControllerDidPressTurnOn:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressNotNow:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressManageContacts:(id)arg1 ;
-(id)initWithContactImportPermissionRequestController:(id)arg1 session:(id)arg2 userSettings:(id)arg3 modalPresenter:(id)arg4 manageContactsPresenter:(id)arg5 ;
-(BOOL)_hasPassedContactSyncUpsellDialogCooldownPeriod;
-(void)_updateContactSyncUpsellDialogPresentationDate:(id)arg1 ;
-(void)_requestContactImportPermission;
-(void)_presentLearnMoreViewController;
-(id)_contactSyncUpsellLastPresentationDate;
-(void)presentContactSyncUpsellDialog;
-(BOOL)shouldPresentContactSyncUpsellDialog;
-(void)permissionRequestController:(id)arg1 didRequestPermissionWithSuccess:(BOOL)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegate:(id<MNContactSyncUpsellDialogControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncUpsellDialogControllerDelegate>)delegate;
-(void)_completeWithSuccess:(BOOL)arg1 ;
@end

