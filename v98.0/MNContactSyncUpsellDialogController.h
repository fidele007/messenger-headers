/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPermissionRequestControllerDelegate.h>
#import <Messenger/MNContactSyncLearnMoreViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

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
-(id)initWithProviderMapData:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressTurnOn:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressNotNow:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressManageContacts:(id)arg1 ;
-(void)presentContactSyncUpsellDialog;
-(id)initWithContactImportPermissionRequestController:(id)arg1 session:(id)arg2 userSettings:(id)arg3 modalPresenter:(id)arg4 manageContactsPresenter:(id)arg5 ;
-(BOOL)_hasPassedContactSyncUpsellDialogCooldownPeriod;
-(void)_updateContactSyncUpsellDialogPresentationDate:(id)arg1 ;
-(void)_requestContactImportPermission;
-(void)_presentLearnMoreViewController;
-(id)_contactSyncUpsellLastPresentationDate;
-(void)permissionRequestController:(id)arg1 didRequestPermissionWithSuccess:(BOOL)arg2 ;
-(BOOL)shouldPresentContactSyncUpsellDialog;
-(void)setDelegate:(id<MNContactSyncUpsellDialogControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactSyncUpsellDialogControllerDelegate>)delegate;
-(void)_completeWithSuccess:(BOOL)arg1 ;
@end

