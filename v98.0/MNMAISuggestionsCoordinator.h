/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMAISuggestionsViewControllerDelegate.h>
#import <Messenger/MNMAISuggestionsExpirationMonitorDelegate.h>
#import <Messenger/MNOmniMSettingsListener.h>
#import <Messenger/MNMActionsStoreListener.h>
#import <Messenger/MNMAISuggestionsFeedbackViewControllerDelegate.h>
#import <Messenger/MNActionSheetViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager, MNModalPresentation, MNMAISuggestionsCoordinatorDelegate;
@class FBMobileConfigContextManager, MNOmniMSettingsStore, MNThreadViewModel, MNMAISuggestionsHandler, MNMAISuggestionsViewController, MNMAISuggestionsExpirationMonitor, MNMActionsService, MNMAISuggestionsFeedbackViewController, MNMAction, FBUserSession, MNOmniMSuggestionModeSettingController, MNOmniMRidesPrefSettingController, NSString;

@interface MNMAISuggestionsCoordinator : NSObject <MNMAISuggestionsViewControllerDelegate, MNMAISuggestionsExpirationMonitorDelegate, MNOmniMSettingsListener, MNMActionsStoreListener, MNMAISuggestionsFeedbackViewControllerDelegate, MNActionSheetViewControllerDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBMobileConfigContextManager* _configManager;
	id<MNAuthenticationManager> _authManager;
	MNOmniMSettingsStore* _omniMSettingsStore;
	MNThreadViewModel* _threadViewModel;
	MNMAISuggestionsHandler* _suggestionsHandler;
	MNMAISuggestionsViewController* _suggestionsViewController;
	MNMAISuggestionsExpirationMonitor* _expirationMonitor;
	MNMActionsService* _actionService;
	id<MNModalPresentation> _modalPresenter;
	MNMAISuggestionsFeedbackViewController* _feedbackViewController;
	MNMAction* _currentLongPressedSuggestion;
	FBUserSession* _session;
	MNOmniMSuggestionModeSettingController* _suggestionModeSettingController;
	MNOmniMRidesPrefSettingController* _ridesPrefSettingController;
	id<MNMAISuggestionsCoordinatorDelegate> _delegate;

}

@property (nonatomic,readonly) MNMAISuggestionsViewController * suggestionsViewController;              //@synthesize suggestionsViewController=_suggestionsViewController - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsCoordinatorDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSuggestionsView; 
@property (nonatomic,readonly) BOOL canShowSuggestionsView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)actionSheetViewControllerDidDismiss:(id)arg1 ;
-(BOOL)canShowSuggestionsView;
-(MNMAISuggestionsViewController *)suggestionsViewController;
-(BOOL)shouldShowSuggestionsView;
-(BOOL)_canAllowIndividualSuggestionDismiss;
-(void)_updateSuggestionBarMode;
-(void)_updateMAISuggestionsBarWithActions:(id)arg1 ;
-(id)_currentThreadKey;
-(void)_handleSuggestionSuccessfulCompletion:(id)arg1 position:(unsigned long long)arg2 ;
-(void)_handleSuggestionUnsuccessfulCompletion:(id)arg1 position:(unsigned long long)arg2 ;
-(void)_logEvent:(id)arg1 suggestion:(id)arg2 position:(unsigned long long)arg3 ;
-(void)_dismissSuggestion:(id)arg1 ;
-(void)_logBarEvent:(id)arg1 suggestions:(id)arg2 ;
-(BOOL)_shouldShowFeedbackSheetForSuggestion:(id)arg1 ;
-(void)_logEvent:(id)arg1 suggestion:(id)arg2 ;
-(BOOL)_settingsEnabled;
-(void)_cleanupFeedbackViewController;
-(void)_dismissFeedbackSheetWithCompletion:(/*^block*/id)arg1 ;
-(void)_presentSettingsView;
-(void)_dismissFeedbackSheet;
-(void)_markNewSuggestionsDisplayed:(id)arg1 oldSuggestions:(id)arg2 ;
-(void)_markSuggestionHidden:(id)arg1 ;
-(void)_markSuggestionDisplayed:(id)arg1 withPosition:(unsigned long long)arg2 ;
-(BOOL)_suggestionModeSettingEnabled;
-(void)_resumeMonitoringLongPressedSuggestionIfNecessary;
-(void)_didCloseSettingsView;
-(BOOL)_shouldShowStickerPreview:(id)arg1 ;
-(void)mAISuggestionViewController:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(void)mAISuggestionViewController:(id)arg1 didDismissSuggestion:(id)arg2 ;
-(void)mAISuggestionViewController:(id)arg1 didDismissBarWithSuggestions:(id)arg2 ;
-(void)mAISuggestionViewController:(id)arg1 didLongPressSuggestion:(id)arg2 ;
-(void)suggestionDidExpire:(id)arg1 ;
-(void)didExpireAllSuggestions;
-(void)didUpdateSuggestionMode:(long long)arg1 ;
-(void)didUpdateSuggestionEnabled:(BOOL)arg1 ;
-(void)didUpdateRidesPref:(long long)arg1 ;
-(void)didUpdateActions:(id)arg1 forThreadKey:(id)arg2 ;
-(void)suggestionsFeedbackViewController:(id)arg1 didTapDismissSuggestion:(id)arg2 ;
-(void)suggestionsFeedbackViewController:(id)arg1 didTapChangeSettings:(id)arg2 ;
-(void)suggestionsFeedbackViewControllerDidTapCancelButton:(id)arg1 ;
-(void)setDelegate:(id<MNMAISuggestionsCoordinatorDelegate>)arg1 ;
-(id<MNMAISuggestionsCoordinatorDelegate>)delegate;
@end

