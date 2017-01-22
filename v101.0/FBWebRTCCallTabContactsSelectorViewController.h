/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBWebRTCGroupThreadCreatorDelegate.h>
#import <Messenger/MNPeoplePickerViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol FBProvider, MNSuggestedContactsRetriever;
@class FBUserSession, FBExperimentManager, FBWebRTCContainerView, FBWebRTCCallStarter, MNPeoplePickerViewController, FBWebRTCGroupThreadCreator, NSMutableArray, FBWebRTCCallButtonImageProvider, FBWebRTCCallButton, UIBarButtonItem, FBWebRTCGroupCallStarter, NSString, FBMobileConfigContextManager, FBWebRTCRecentCallerContactsRetriever;

@interface FBWebRTCCallTabContactsSelectorViewController : FBContainerViewController <FBWebRTCGroupThreadCreatorDelegate, MNPeoplePickerViewControllerDelegate, FBClassProvidable, MNDismissableViewController> {

	FBUserSession* _session;
	FBExperimentManager* _experimentManager;
	FBWebRTCContainerView* _containerView;
	FBWebRTCCallStarter* _callStarter;
	MNPeoplePickerViewController* _peoplePickerViewController;
	id<FBProvider> _groupThreadCreatorProvider;
	FBWebRTCGroupThreadCreator* _groupThreadCreator;
	NSMutableArray* _invitees;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBWebRTCCallButton* _audioCallButton;
	FBWebRTCCallButton* _videoCallButton;
	UIBarButtonItem* _audioButtonItem;
	UIBarButtonItem* _videoButtonItem;
	BOOL _isDirectVideoCall;
	UIBarButtonItem* _callButtonItem;
	FBWebRTCGroupCallStarter* _groupCallStarter;
	BOOL _isVideoConferencingEnabled;
	NSString* _ownerId;
	FBMobileConfigContextManager* _configManager;
	id<FBProvider> _groupSuggestedContactsRetrieverProvider;
	FBWebRTCRecentCallerContactsRetriever* _recentCallersContactsRetriever;
	id<MNSuggestedContactsRetriever> _topMessengerContactsRetriever;
	BOOL _allowGroupsPreload;
	BOOL _allowPeerToPeerCall;
	/*^block*/id _dismissBlock;
	NSString* _callTrigger;
	NSString* _headerTitle;

}

@property (nonatomic,copy) NSString * callTrigger;                  //@synthesize callTrigger=_callTrigger - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                  //@synthesize headerTitle=_headerTitle - In the implementation block
@property (assign,nonatomic) BOOL allowGroupsPreload;               //@synthesize allowGroupsPreload=_allowGroupsPreload - In the implementation block
@property (assign,nonatomic) BOOL allowPeerToPeerCall;              //@synthesize allowPeerToPeerCall=_allowPeerToPeerCall - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_setUpNavigationBar;
-(id)analyticsModuleForPeoplePicker:(id)arg1 ;
-(BOOL)peoplePicker:(id)arg1 shouldSelectContact:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didTapContact:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didChangePickedContacts:(id)arg2 ;
-(void)peoplePicker:(id)arg1 didPickGroup:(id)arg2 ;
-(void)setDismissBlock:(id)arg1 ;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(id)dismissBlock;
-(void)_didPressAudioButton;
-(void)_didPressVideoButton;
-(id)initWithUserSession:(id)arg1 callStarter:(id)arg2 peoplePickerViewController:(id)arg3 groupSuggestedContactsRetrieverProvider:(id)arg4 recentCallerContactsRetriever:(id)arg5 topMessengerContactsRetriever:(id)arg6 groupThreadCreatorProvider:(id)arg7 callButtonImageProvider:(id)arg8 groupCallStarterProvider:(id)arg9 authManager:(id)arg10 configManager:(id)arg11 ;
-(id)_aggregatedContactsRetriever;
-(void)_switchToSelectingState;
-(BOOL)_validateInviteeList:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)_placeCallToContact:(id)arg1 isVideoCall:(BOOL)arg2 ;
-(void)_ensureGroupThreadThenPlaceCallWithDirectVideo:(BOOL)arg1 ;
-(void)_switchToCreatingInProgressState;
-(void)_placeCallToUserIDs:(id)arg1 forGroupThreadKey:(id)arg2 ;
-(NSString *)callTrigger;
-(void)groupThreadCreator:(id)arg1 didBeginThreadCreationForUserIDs:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didCompleteWithThreadKey:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didFailThreadCreationWithError:(id)arg2 ;
-(void)setAllowGroupsPreload:(BOOL)arg1 ;
-(void)setAllowPeerToPeerCall:(BOOL)arg1 ;
-(void)setCallTrigger:(NSString *)arg1 ;
-(BOOL)allowGroupsPreload;
-(BOOL)allowPeerToPeerCall;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)_updateButtons;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(void)_dismissKeyboard;
-(void)_dismiss:(BOOL)arg1 ;
@end
