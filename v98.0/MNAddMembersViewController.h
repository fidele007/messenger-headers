/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/FBMMembersAdderDelegate.h>
#import <Messenger/MNPeoplePickerViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol FBProvider;
@class FBMThreadSummary, FBKeyboardObserver, MNUserSettings, NSArray, MNAddMembersView, MNTopContactsRetriever, MNContactsRetrieverSimpleLogger, MNAddressBookContactSyncPolicy, MNPeoplePickerViewController, FBMBatchMembersAdder, UIAlertView, MNNavigationBarController, MNProgressBarController, NSString;

@interface MNAddMembersViewController : FBContainerViewController <FBKeyboardObserverDelegate, FBMMembersAdderDelegate, MNPeoplePickerViewControllerDelegate, UIAlertViewDelegate, FBClassProvidable, MNDismissableViewController> {

	FBMThreadSummary* _threadSummary;
	id<FBProvider> _peoplePickerViewControllerProvider;
	FBKeyboardObserver* _keyboardObserver;
	MNUserSettings* _userSettings;
	NSArray* _pickedContacts;
	MNAddMembersView* _addMembersView;
	unsigned long long _appearanceState;
	MNTopContactsRetriever* _topContactsRetriever;
	MNContactsRetrieverSimpleLogger* _contactsRetrieversSimpleLogger;
	MNAddressBookContactSyncPolicy* _addressBookContactSyncPolicy;
	BOOL _shouldInviteNewMembers;
	/*^block*/id _dismissBlock;
	MNPeoplePickerViewController* _peoplePickerViewController;
	FBMBatchMembersAdder* _membersAdder;
	id<FBProvider> _membersAdderProvider;
	UIAlertView* _addMembersAlert;
	MNNavigationBarController* _navigationBarController;
	id _progressTitleId;
	MNProgressBarController* _progressBarController;

}

@property (nonatomic,retain) MNPeoplePickerViewController * peoplePickerViewController;              //@synthesize peoplePickerViewController=_peoplePickerViewController - In the implementation block
@property (nonatomic,copy) NSArray * pickedContacts;                                                 //@synthesize pickedContacts=_pickedContacts - In the implementation block
@property (nonatomic,retain) FBMBatchMembersAdder * membersAdder;                                    //@synthesize membersAdder=_membersAdder - In the implementation block
@property (nonatomic,retain) id<FBProvider> membersAdderProvider;                                    //@synthesize membersAdderProvider=_membersAdderProvider - In the implementation block
@property (nonatomic,retain) UIAlertView * addMembersAlert;                                          //@synthesize addMembersAlert=_addMembersAlert - In the implementation block
@property (nonatomic,retain) MNNavigationBarController * navigationBarController;                    //@synthesize navigationBarController=_navigationBarController - In the implementation block
@property (assign,nonatomic) id progressTitleId;                                                     //@synthesize progressTitleId=_progressTitleId - In the implementation block
@property (nonatomic,retain) MNProgressBarController * progressBarController;                        //@synthesize progressBarController=_progressBarController - In the implementation block
@property (assign,nonatomic) BOOL shouldInviteNewMembers;                                            //@synthesize shouldInviteNewMembers=_shouldInviteNewMembers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                                          //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setDismissBlock:(id)arg1 ;
-(MNPeoplePickerViewController *)peoplePickerViewController;
-(NSArray *)pickedContacts;
-(id)dismissBlock;
-(id)analyticsModuleForPeoplePicker:(id)arg1 ;
-(BOOL)peoplePicker:(id)arg1 shouldSelectContact:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didTapContact:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2 ;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(void)didDismiss;
-(MNNavigationBarController *)navigationBarController;
-(void)_stopViewObservations;
-(void)setProgressBarController:(MNProgressBarController *)arg1 ;
-(void)_startViewObservations;
-(MNProgressBarController *)progressBarController;
-(void)setPickedContacts:(NSArray *)arg1 ;
-(void)setPeoplePickerViewController:(MNPeoplePickerViewController *)arg1 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)setProgressTitleId:(id)arg1 ;
-(void)setNavigationBarController:(MNNavigationBarController *)arg1 ;
-(id)progressTitleId;
-(void)configureWithThreadSummary:(id)arg1 ;
-(void)setShouldInviteNewMembers:(BOOL)arg1 ;
-(void)_setUpNavBarButtons;
-(BOOL)_isSMSParticipantOnLegacyThread:(id)arg1 ;
-(void)_showSMSContactCannotBeAddedToConversationAlert:(id)arg1 ;
-(void)_sendAddMemberRequest;
-(void)setAddMembersAlert:(UIAlertView *)arg1 ;
-(void)_showFailedToAddMemberAlert;
-(void)_showInviteAddsNewMembersToApprovalQueueDisclaimer;
-(void)_showAddMemberDisclaimer;
-(void)_showNoMembersSelectedAlert;
-(void)membersAdder:(id)arg1 didAddMembersToGroupThreadKey:(id)arg2 ;
-(void)membersAdder:(id)arg1 couldNotAddMembersToGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(BOOL)shouldInviteNewMembers;
-(FBMBatchMembersAdder *)membersAdder;
-(void)setMembersAdder:(FBMBatchMembersAdder *)arg1 ;
-(id<FBProvider>)membersAdderProvider;
-(void)setMembersAdderProvider:(id<FBProvider>)arg1 ;
-(UIAlertView *)addMembersAlert;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)_donePressed:(id)arg1 ;
-(void)tearDown;
@end

