/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNRequestContactImportViewDelegate.h>
#import <Messenger/MNContactImportInitiationListener.h>
#import <Messenger/MNSyncingContactsViewControllerDelegate.h>
#import <Messenger/MNContactSyncLearnMoreViewControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol FBProvider, MNUserSetUpStepCompletion, MNRequestContactImportViewControllerDelegate;
@class MNRequestContactImportView, MNAddressBookContactImportInitiator, MNSyncingContactsViewController, MNContactSyncLearnMoreViewController, MNManageContactsPresenter, NSNotificationCenter, NSString;

@interface MNRequestContactImportViewController : UIViewController <MNRequestContactImportViewDelegate, MNContactImportInitiationListener, MNSyncingContactsViewControllerDelegate, MNContactSyncLearnMoreViewControllerDelegate, MNUserSetUpStepViewController> {

	MNRequestContactImportView* _contactImportView;
	BOOL _alreadyActedOnPrimer;
	MNAddressBookContactImportInitiator* _contactImportInitiator;
	MNSyncingContactsViewController* _syncingContactsVC;
	id<FBProvider> _syncingContactsVCProvider;
	MNContactSyncLearnMoreViewController* _contactSyncLearnMoreViewController;
	MNManageContactsPresenter* _manageContactsPresenter;
	id<FBProvider> _userSetUpFlowConfiguratorProvider;
	NSNotificationCenter* _notificationCenter;
	id<MNUserSetUpStepCompletion> completionDelegate;
	id<MNRequestContactImportViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRequestContactImportViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)contactSyncLearnMoreViewControllerDidPressTurnOn:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressNotNow:(id)arg1 ;
-(void)contactSyncLearnMoreViewControllerDidPressManageContacts:(id)arg1 ;
-(void)contactImportViewDidClickManageContacts:(id)arg1 ;
-(void)contactImportViewDidClickOKButton:(id)arg1 ;
-(void)contactImportViewDidClickLearnMoreButton:(id)arg1 ;
-(void)_stopListeningToApplicationLifecycleEvents:(id)arg1 ;
-(id)initWithContactImporter:(id)arg1 syncLock:(id)arg2 userSettings:(id)arg3 syncingContactsVCProvider:(id)arg4 analytics:(id)arg5 session:(id)arg6 manageContactsPresenter:(id)arg7 userSetUpFlowConfiguratorProvider:(id)arg8 addressBook:(id)arg9 ;
-(void)_startListeningToApplicationLifecycleEvents:(id)arg1 ;
-(void)_didConfirmContactImport;
-(void)_presentManageContactsWebView;
-(void)_initiateContactImporting;
-(void)userInitiatedContactImportAllowed;
-(void)userInitiatedContactImportDisallowed;
-(void)userInitiatedContactImportFailedToInitiate;
-(void)contactsSyncingViewControllerDidComplete:(id)arg1 ;
-(unsigned long long)preferredTransitionType;
-(void)setDelegate:(id<MNRequestContactImportViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRequestContactImportViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
@end

