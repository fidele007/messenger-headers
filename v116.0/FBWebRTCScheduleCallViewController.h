/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBContainerViewController.h>
#import <Messenger/FBWebRTCGroupThreadCreatorDelegate.h>
#import <Messenger/FBWebRTCScheduleCallViewDelegate.h>
#import <Messenger/MNPeoplePickerViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol MNSuggestedContactsRetriever, FBProvider, FBWebRTCMessageThreadNavigator;
@class FBUserSession, FBExperimentManager, FBWebRTCScheduleCallView, MNPeoplePickerViewController, FBWebRTCGroupThreadCreator, FBWebRTCScheduleCallMutationHelper, MNUserSettings, NSArray, MNConversationGroup, UIBarButtonItem, NSDate, MNTooltipOverlayController, FBTimer, FBWebRTCSchedulingLogger, NSString;

@interface FBWebRTCScheduleCallViewController : FBContainerViewController <FBWebRTCGroupThreadCreatorDelegate, FBWebRTCScheduleCallViewDelegate, MNPeoplePickerViewControllerDelegate, FBClassProvidable, MNDismissableViewController> {

	FBUserSession* _session;
	FBExperimentManager* _experimentManager;
	FBWebRTCScheduleCallView* _scheduleCallView;
	MNPeoplePickerViewController* _peoplePickerViewController;
	id<MNSuggestedContactsRetriever> _contactsRetriever;
	id<FBProvider> _groupThreadCreatorProvider;
	FBWebRTCGroupThreadCreator* _groupThreadCreator;
	id<FBProvider> _scheduleCallMutationProvider;
	FBWebRTCScheduleCallMutationHelper* _scheduleCallMutation;
	MNUserSettings* _userSettings;
	id<FBWebRTCMessageThreadNavigator> _messageThreadNavigator;
	NSArray* _preselectedContacts;
	NSArray* _invitees;
	MNConversationGroup* _pickedGroup;
	UIBarButtonItem* _doneButtonItem;
	NSDate* _scheduleDate;
	MNTooltipOverlayController* _tooltipController;
	FBTimer* _addPeopleTooltipDelayTimer;
	/*^block*/id _dismissBlock;
	FBWebRTCSchedulingLogger* _logger;

}

@property (nonatomic,retain) FBWebRTCSchedulingLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                  //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(void)_setUpNavigationBar;
-(BOOL)_validateInput;
-(void)setDismissBlock:(id)arg1 ;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(id)dismissBlock;
-(id)_ensureScheduleCallMutation;
-(void)_alertErrorWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_switchToSelectingState;
-(void)_switchToCreatingInProgressState;
-(void)groupThreadCreator:(id)arg1 didBeginThreadCreationForUserIDs:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didCompleteWithThreadKey:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didFailThreadCreationWithError:(id)arg2 ;
-(void)preselectContacts:(id)arg1 ;
-(void)scheduleCallView:(id)arg1 didShowDatePicker:(id)arg2 ;
-(void)scheduleCallViewDidTapTimeLabel:(id)arg1 ;
-(void)scheduleCallView:(id)arg1 didChangeDate:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 peoplePickerViewController:(id)arg2 contactsRetriever:(id)arg3 groupThreadCreatorProvider:(id)arg4 scheduleCallMutationProvider:(id)arg5 userSettings:(id)arg6 messageThreadNavigator:(id)arg7 ;
-(void)_updateDatePickerInfo;
-(void)_setupAddPeopleTooltipIfNeeded;
-(void)_didSelectDone;
-(void)_ensureGroupThreadThenScheduleCall;
-(void)_scheduleCallForThreadKey:(id)arg1 date:(id)arg2 ;
-(BOOL)_doesPickedGroupMatchInvitees;
-(id)_ensureGroupThreadCreator;
-(void)_switchToSchedulingInProgressState;
-(void)_scheduleCallCanMutateForThreadKey:(id)arg1 date:(id)arg2 ;
-(void)_scheduleCallMutationFailedWithError:(id)arg1 ;
-(void)_navigateToThreadKey:(id)arg1 ;
-(void)_showAddPeopleTooltipWithShowCount:(int)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)peoplePicker:(id)arg1 didTapContact:(id)arg2 ;
-(BOOL)peoplePicker:(id)arg1 shouldSelectContact:(id)arg2 ;
-(void)peoplePickerTokenFieldWillBecomeResponder:(id)arg1 ;
-(void)peoplePickerTokenFieldWillResignFirstResponder:(id)arg1 ;
-(void)peoplePicker:(id)arg1 didPickGroup:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2 ;
-(id)analyticsModuleForPeoplePicker:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldDismiss;
-(void)_dismissKeyboard;
-(void)_updateDateLabel;
-(void)_dismiss:(BOOL)arg1 ;
-(FBWebRTCSchedulingLogger *)logger;
-(void)setLogger:(FBWebRTCSchedulingLogger *)arg1 ;
@end

