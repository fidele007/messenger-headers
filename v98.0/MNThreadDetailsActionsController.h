/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNThreadMutePickerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNThreadMembersUpdaterDelegate.h>
#import <Messenger/MNThreadPhotoEditControllerDelegate.h>
#import <Messenger/MNThreadCustomizationModalPickerControllerDelegate.h>
#import <Messenger/MNEphemeralMessageLifeTimePickerDelegate.h>
#import <Messenger/MNThreadEphemeralitySetterDelegate.h>
#import <Messenger/MNThreadDetailsSecureCodenameEditControllerDelegate.h>
#import <Messenger/MNThreadDetailsViewControllerDelegate.h>
#import <Messenger/MNThreadDetailsContactViewControllerDelegate.h>

@protocol MNSecureMessageSending, MNSecureMessagingDeviceInformation, MNThreadDetailsActionsControllerDelegate;
@class MNThreadDetailsActionsControllerInjector, MNThreadMutePicker, MNThreadMembersUpdater, MNEphemeralMessageLifeTimePicker, MNNavigationBarController, MNThreadPhotosViewController, MNThreadPhotoEditController, MNThreadCustomizationModalPickerController, MNThreadEphemeralitySetter, MNThreadDetailsSecureCodenameEditController, MNSecureMessagingDeviceStatusOverrideAlertHandler, MNThreadViewModel, FBMUser, MNProgressBarController, MNThreadDetailsContactViewController, MNThreadNicknameViewController, MNSecureMessagingIdentityKeyViewController, UIAlertView, NSString;

@interface MNThreadDetailsActionsController : NSObject <FBClassInjectable, MNThreadMutePickerDelegate, UIAlertViewDelegate, MNThreadMembersUpdaterDelegate, MNThreadPhotoEditControllerDelegate, MNThreadCustomizationModalPickerControllerDelegate, MNEphemeralMessageLifeTimePickerDelegate, MNThreadEphemeralitySetterDelegate, MNThreadDetailsSecureCodenameEditControllerDelegate, MNThreadDetailsViewControllerDelegate, MNThreadDetailsContactViewControllerDelegate> {

	MNThreadDetailsActionsControllerInjector* _injector;
	MNThreadMutePicker* _mutePicker;
	MNThreadMembersUpdater* _threadMembersUpdater;
	MNEphemeralMessageLifeTimePicker* _messageLifeTimePicker;
	MNNavigationBarController* _navigationBarController;
	MNThreadPhotosViewController* _threadPhotosViewController;
	MNThreadPhotoEditController* _threadPhotoEditController;
	MNThreadCustomizationModalPickerController* _threadCustomizationModalPickerController;
	MNThreadEphemeralitySetter* _ephemeralitySetter;
	MNThreadDetailsSecureCodenameEditController* _secureCodenameEditController;
	MNSecureMessagingDeviceStatusOverrideAlertHandler* _secureDeviceStatusOverrideHandler;
	id<MNSecureMessageSending> _secureMessageSender;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInformation;
	MNThreadViewModel* _threadViewModelForNotifications;
	MNThreadViewModel* _threadViewModelForLeaveGroup;
	MNThreadViewModel* _threadViewModelForEphemeralMessage;
	FBMUser* _userToRemoveFromThread;
	id _progressBarTemporaryTitleObjectId;
	id<MNThreadDetailsActionsControllerDelegate> _delegate;
	MNProgressBarController* _progressBarController;
	MNThreadDetailsContactViewController* _contactViewController;
	MNThreadNicknameViewController* _nicknameViewController;
	MNSecureMessagingIdentityKeyViewController* _identityKeyViewController;
	/*^block*/id _removeUserCompletionBlock;
	UIAlertView* _leaveGroupAlertView;
	UIAlertView* _removeFromThreadAlertView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id removeUserCompletionBlock;                                                            //@synthesize removeUserCompletionBlock=_removeUserCompletionBlock - In the implementation block
@property (nonatomic,retain) UIAlertView * leaveGroupAlertView;                                                     //@synthesize leaveGroupAlertView=_leaveGroupAlertView - In the implementation block
@property (nonatomic,retain) UIAlertView * removeFromThreadAlertView;                                               //@synthesize removeFromThreadAlertView=_removeFromThreadAlertView - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadDetailsActionsControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNProgressBarController * progressBarController;                                       //@synthesize progressBarController=_progressBarController - In the implementation block
@property (nonatomic,readonly) MNThreadDetailsContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,readonly) MNThreadNicknameViewController * nicknameViewController;                             //@synthesize nicknameViewController=_nicknameViewController - In the implementation block
@property (nonatomic,readonly) MNSecureMessagingIdentityKeyViewController * identityKeyViewController;              //@synthesize identityKeyViewController=_identityKeyViewController - In the implementation block
+(Class)injectorClass;
-()threadDetailsViewController:didSelectNavigateToNonSecretConversationWithUser:;
-(id)initWithInjector:(id)arg1 ;
-(void)_leaveGroup;
-(void)threadPhotoEditController:(id)arg1 startedUploadForGroupThreadKey:(id)arg2 ;
-(void)threadPhotoEditController:(id)arg1 cancelledUploadForGroupThreadKey:(id)arg2 ;
-(void)threadPhotoEditController:(id)arg1 finishedUploadForGroupThreadKey:(id)arg2 ;
-(void)threadPhotoEditController:(id)arg1 failedUploadForGroupThreadKey:(id)arg2 ;
-(void)threadMutePicker:(id)arg1 didSelectMuteType:(long long)arg2 ;
-(void)ephemeralMessageLifeTimePicker:(id)arg1 didSelectEphemerality:(long long)arg2 ;
-(void)threadEphemeralitySetterDidSendRequest;
-(void)threadEphemeralitySetterDidFinishRequestWithSuccess:(BOOL)arg1 ;
-(void)threadMembersUpdaterDidStartRequest:(id)arg1 ;
-(void)threadMembersUpdater:(id)arg1 failedToRemoveParticipantWithUserId:(id)arg2 ;
-(void)threadMembersUpdaterDidFinishAllRequests:(id)arg1 ;
-(void)setProgressBarController:(MNProgressBarController *)arg1 ;
-(void)_stopFakeProgress;
-(MNProgressBarController *)progressBarController;
-(void)_navigateToSecureThreadWithKey:(id)arg1 ;
-(void)_didFinishSecureDeviceStatusOverridePromptWithResponse:(BOOL)arg1 forOtherUserId:(id)arg2 ;
-(void)_pushContactViewControllerFromThreadDetailsViewController:(id)arg1 forUser:(id)arg2 ;
-(void)_makeVoipCallToUser:(id)arg1 isDirectVideo:(BOOL)arg2 callTrigger:(id)arg3 ;
-(void)_showTimelineForUserWithId:(id)arg1 identityTypeProperties:(id)arg2 ;
-(void)_promptIfNeededRemoveUserWithId:(id)arg1 threadDetailsViewController:(id)arg2 fromView:(id)arg3 ;
-(void)_beginLeaveGroupThread:(id)arg1 fromViewController:(id)arg2 withPrompt:(BOOL)arg3 ;
-(void)_handleDismissableViewControllerDismiss:(id)arg1 ;
-(void)_didSelectAdminActionSheetItem:(long long)arg1 user:(id)arg2 fromView:(id)arg3 threadDetailsViewController:(id)arg4 ;
-(void)_showActionSheetWithTitle:(id)arg1 message:(id)arg2 presentingViewController:(id)arg3 inView:(id)arg4 actionButtonTitles:(id)arg5 destructiveButtonTitle:(id)arg6 cancelButtonTitle:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)_navigateToBlockOrReportViewForUser:(id)arg1 isReportable:(BOOL)arg2 threadClientSummaryUpdateCreator:(id)arg3 fromViewController:(id)arg4 ;
-(void)_inviteToMessengerWithUsers:(id)arg1 fromSource:(unsigned long long)arg2 ;
-(void)_saveThreadName:(id)arg1 forGroupThreadWithKey:(id)arg2 ;
-(void)setRemoveUserCompletionBlock:(id)arg1 ;
-(void)_updateSummaryWithJoinableInfoClientUpdate:(id)arg1 groupThreadKey:(id)arg2 ;
-(void)_navigateToThreadForUserId:(id)arg1 ;
-(id)_threadMembersUpdaterWithThreadViewModel:(id)arg1 ;
-(void)_showRemoveUserDialog;
-(void)_startFakeProgress;
-(void)_removeUserWithUserId:(id)arg1 ;
-(void)_beginRemoveUserWIthId:(id)arg1 inThreadDetailsViewController:(id)arg2 ;
-(void)_showConfirmAdminUserLeaveConversationSheetFromViewController:(id)arg1 fromView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRemoveFromThreadAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)removeFromThreadAlertView;
-(void)setLeaveGroupAlertView:(UIAlertView *)arg1 ;
-(void)_showFailedToChangeMuteAlert;
-(id)removeUserCompletionBlock;
-(void)_addUserAsAdmin:(id)arg1 threadDetailsViewController:(id)arg2 fromView:(id)arg3 ;
-(void)_removeUserAsAdmin:(id)arg1 threadDetailsViewController:(id)arg2 fromView:(id)arg3 ;
-(void)_showAdminUpdateFailureMessage;
-(void)_applyThreadAdminsUpdate:(id)arg1 forThreadSummary:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)_showConfirmUserAsAdminAlert:(id)arg1 isSelf:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_showConfirmRemoveUserAsAdminSheet:(id)arg1 presentingViewController:(id)arg2 fromView:(id)arg3 isSelf:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)threadCustomizationModalPickerController:(id)arg1 didUpdateThreadCustomizationForThreadKey:(id)arg2 ;
-(void)threadCustomizationModalPickerController:(id)arg1 couldNotUpdateThreadCustomizationForThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)secureCodenameEditControllerDidDismissAlert:(id)arg1 ;
-(void)threadDetailsViewControllerWillDisappear:(id)arg1 ;
-(void)threadDetailsViewController:(id)arg1 didSelectUser:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectVoipCallToUser:(id)arg2 isDirectVideo:(BOOL)arg3 ;
-(void)threadDetailsViewController:(id)arg1 didSelectViewTimelineForUser:(id)arg2 ;
-(void)threadDetailsViewControllerDidSelectNotifications:(id)arg1 fromRectInThreadDetailsView:(CGRect)arg2 ;
-(void)threadDetailsViewControllerDidSelectLeaveGroup:(id)arg1 fromView:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectDeleteThreadWithKey:(id)arg2 ;
-(void)threadDetailsViewControllerDidSelectAddMembersToGroupThread:(id)arg1 ;
-(void)threadDetailsViewController:(id)arg1 didSelectShowAdminActionsForUser:(id)arg2 fromView:(id)arg3 ;
-(void)threadDetailsViewController:(id)arg1 didSelectCreateGroupWithUser:(id)arg2 ;
-(void)threadDetailsViewControllerDidSelectEventReminder:(id)arg1 ;
-(void)threadDetailsViewController:(id)arg1 didSelectLeaveFeedbackWithPage:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectReportWithPage:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectBlockOrReportUser:(id)arg2 isSecureThread:(BOOL)arg3 ;
-(void)threadDetailsViewControllerDidSelectReportRoom:(id)arg1 ;
-(void)threadDetailsViewControllerDidSelectInviteThreadParticipants:(id)arg1 ;
-(void)threadDetailsViewController:(id)arg1 didSelectChangePictureFromBarButtonItem:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectChangeThreadNameWithNewName:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectRemoveUserWithId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)threadDetailsViewController:(id)arg1 didSelectViewFacebookGroupWithId:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectViewFacebookEventWithId:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectAddUser:(id)arg2 ;
-(void)threadDetailsViewControllerDidSelectCustomizeColor:(id)arg1 ;
-(void)threadDetailsViewControllerDidSelectCustomizeEmoji:(id)arg1 ;
-(void)threadDetailsViewControllerDidSelectCustomizeNicknames:(id)arg1 ;
-(void)threadDetailsViewControllerDidSelectEphemeralMessage:(id)arg1 fromRectInThreadDetailsView:(CGRect)arg2 ;
-(void)threadDetailsViewControllerDidSelectCustomizeSecureCodename:(id)arg1 ;
-(void)threadDetailsViewControllerDidSelectIdentityKey:(id)arg1 ;
-(void)threadDetailsViewController:(id)arg1 didSelectCreateSecureConversationWithUserId:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectNavigateToSecureThread:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didChangeGroupThreadJoinableSetting:(BOOL)arg2 switchView:(id)arg3 ;
-(void)threadDetailsViewController:(id)arg1 didChangeGroupThreadMembersApprovalsSetting:(BOOL)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectNavigateToViewPendingApprovalRequests:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectViewPageBookingRequest:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didEditGroupDescription:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didCommitSendingWithAttachment:(id)arg2 ;
-(void)threadDetailsViewController:(id)arg1 didSelectNavigateToNotificationSettings:(id)arg2 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectVoipCallToUser:(id)arg2 isDirectVideo:(BOOL)arg3 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectViewTimelineForUser:(id)arg2 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectInviteUser:(id)arg2 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectSendMessageToUserWithId:(id)arg2 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectRemoveUser:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)threadDetailsContactViewController:(id)arg1 didSelectBlockUser:(id)arg2 ;
-(void)_showSharedPhotosFromViewController:(id)arg1 ;
-(MNThreadNicknameViewController *)nicknameViewController;
-(MNSecureMessagingIdentityKeyViewController *)identityKeyViewController;
-(UIAlertView *)leaveGroupAlertView;
-(void)setDelegate:(id<MNThreadDetailsActionsControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNThreadDetailsActionsControllerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(MNThreadDetailsContactViewController *)contactViewController;
@end
