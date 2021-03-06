/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNEventsReminderDetailViewControllerDelegate.h>
#import <Messenger/MNEventsReminderInterstitialControllerDelegate.h>
#import <Messenger/MNEventsReminderLocationPickerViewControllerDelegate.h>
#import <Messenger/MNEventsReminderTimePickerActionSheetViewControllerDelegate.h>
#import <Messenger/FBRapidFeedbackSurveyManagerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageCellElementAppearanceListener.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNModalPresentation, MNApplicationRootViewControllerGetting, FBProvider;
@class FBUserSession, NSDate, MNThreadParticipantNameFormatter, MNEventsReminderLogger, MNEventsReminderDetailViewController, FBMobileConfigContextManager, UIResponder, UIAlertAction, FBRapidFeedbackSurveyManager, MNThreadViewModel, MNAppThemeConfiguration, MNLocationPickerPresenter, MNEventsReminderLocationPickerViewController, FBLazyCreator, NSString;

@interface MNEventsReminderActionHandler : NSObject <MNEventsReminderDetailViewControllerDelegate, MNEventsReminderInterstitialControllerDelegate, MNEventsReminderLocationPickerViewControllerDelegate, MNEventsReminderTimePickerActionSheetViewControllerDelegate, FBRapidFeedbackSurveyManagerDelegate, FBViewerContextClassProvidable, MNMessageCellElementAppearanceListener, MNThreadViewModelConfigurable> {

	FBUserSession* _session;
	id<MNModalPresentation> _modalPresenter;
	id<MNApplicationRootViewControllerGetting> _applicationHandler;
	NSDate* _selectedDate;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNEventsReminderLogger* _logger;
	MNEventsReminderDetailViewController* _detailViewController;
	FBMobileConfigContextManager* _configManager;
	UIResponder* _firstResponder;
	UIAlertAction* _saveNameAction;
	FBRapidFeedbackSurveyManager* _surveyManager;
	MNThreadViewModel* _threadViewModel;
	MNAppThemeConfiguration* _appThemeConfiguration;
	BOOL _isEventReminderSupported;
	BOOL _isCallReminderSupported;
	MNLocationPickerPresenter* _locationPickerPresenter;
	id<FBProvider> _locationPickerViewControllerProvider;
	MNEventsReminderLocationPickerViewController* _locationPickerViewController;
	FBLazyCreator* _interstitialControllerCreator;
	/*^block*/id _nuxCompletionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)adminMessageCellWillAppear:(id)arg1 withMessageRow:(id)arg2 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)didTriggerCreateReminderFromSource:(long long)arg1 fromView:(id)arg2 date:(id)arg3 dateString:(id)arg4 messageId:(id)arg5 ;
-(void)logTriggerWordTriggeredWithMessageCellView:(id)arg1 triggeredDate:(id)arg2 triggeredDateString:(id)arg3 ;
-(void)logTriggerWordViewedWithMessageCellView:(id)arg1 triggeredDate:(id)arg2 triggeredDateString:(id)arg3 ;
-(void)showUpdateRemiderTitleAlertFromAdminMessageCell:(id)arg1 ;
-(void)changeReminderTimeFromLogMessageCell:(id)arg1 ;
-(void)changeReminderLocationFromLogMessageCell:(id)arg1 ;
-(void)surveyManager:(id)arg1 shouldDismiss:(BOOL)arg2 ;
-(void)presentDetailViewFromXMA;
-(id)initWithSession:(id)arg1 modalPresenter:(id)arg2 applicationHandler:(id)arg3 nameFormatter:(id)arg4 configManager:(id)arg5 appThemeConfiguration:(id)arg6 reminderDetailViewController:(id)arg7 locationPickerViewControllerProvider:(id)arg8 locationPickerPresenter:(id)arg9 interstitialControllerProvider:(id)arg10 ;
-(void)_presentActionSheetWithDate:(id)arg1 fromView:(id)arg2 mode:(long long)arg3 ;
-(id)_activeReminder;
-(void)_tappedNameReminder;
-(void)_promptUserToCreateNewReminder;
-(void)_presentDateTimePickerWithActiveReminder;
-(void)_presentLocationPicker;
-(void)_presentDetailView;
-(BOOL)_isEligibleForNUX;
-(void)_presentActionSheetToFromCreatePrompt;
-(BOOL)_showInterstitialNux;
-(void)_presentDateTimePicker;
-(id)_alertControllerWithMode:(long long)arg1 ;
-(BOOL)_hasActiveReminder;
-(void)_tappedCreateReminderForType:(long long)arg1 ;
-(void)_tappedNameReminderFromActionSheet;
-(void)_tappedDeleteReminder;
-(id)_actionSheetTitleForMode:(long long)arg1 ;
-(id)_actionSheetSubtitleForMode:(long long)arg1 ;
-(id)_bannerActionSheetItemsWithMode:(long long)arg1 ;
-(void)_tappedCancelActionSheet;
-(id)_threadIdentifierForCanonicalThread;
-(void)_createReminderForDate:(id)arg1 forType:(long long)arg2 ;
-(void)_onCreateSuccess;
-(void)_onCreateFailure;
-(void)_handleCompletionForSurveyManager:(id)arg1 ;
-(void)_removeTargetForAlertController:(id)arg1 ;
-(void)_changeNameForAlertController:(id)arg1 ;
-(void)_configureReminderNameTextField:(id)arg1 ;
-(void)_changeNameForTextField:(id)arg1 ;
-(void)_onReminderUpdateFailure;
-(void)updateRSVPStatus:(id)arg1 forReminder:(id)arg2 withFailureBlock:(/*^block*/id)arg3 successBlock:(/*^block*/id)arg4 ;
-(id)_rsvpActionSheetItems;
-(void)_cleanUpSurveyManager;
-(void)_handleSuccessfulLocationUpdateWithClientMutationId:(id)arg1 object:(id)arg2 ;
-(void)controllerDidFinish:(id)arg1 ;
-(void)controllerDidSelectTime:(id)arg1 ;
-(void)controllerDidSelectTitle:(id)arg1 ;
-(void)controllerDidSelectDelete:(id)arg1 ;
-(void)controllerDidSelectChangeRSVP:(id)arg1 fromCell:(id)arg2 ;
-(void)controllerDidSelectChangeLocation:(id)arg1 ;
-(void)eventsReminderInterstitialControllerDidTapCreateButton:(id)arg1 ;
-(void)eventsReminderInterstitialControllerDidTapDismissButton:(id)arg1 ;
-(void)locationPickerViewController:(id)arg1 didSelectLocation:(id)arg2 ;
-(void)controller:(id)arg1 didFinishWithDate:(id)arg2 ;
-(void)didCancelWithTimePickerController:(id)arg1 ;
-(void)didDimissWithTimePickerController:(id)arg1 ;
-(void)logBannerViewShown;
-(void)presentDetailViewFromBanner;
-(void)_textFieldChanged:(id)arg1 ;
@end

