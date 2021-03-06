/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInstructionsViewControllerDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBNuxPresenter.h>
#import <Messenger/FBSelfPresentingNux.h>
#import <Messenger/FBMPushDialogControllerDelegate.h>

@protocol MNModalPresentation, FBProvider, NSObject, FBNuxDelegate;
@class NSNotificationCenter, UIApplication, FBMPushDialogController, OrcaPushRegistrar, MNUserSettings, FBUserSession, FBMobileConfigContextManager, MNUserSetUpStatePersister, MNInstructionsViewController, MNNavigationController, FBMPushNotificationRequestContentConfiguration, MNPushInstructionsControllerListenerAnnouncer, NSString, NSDictionary;

@interface MNPushInstructionsController : NSObject <MNInstructionsViewControllerDelegate, FBViewerContextClassProvidable, FBNuxPresenter, FBSelfPresentingNux, FBMPushDialogControllerDelegate> {

	id<MNModalPresentation> _modalPresenter;
	NSNotificationCenter* _notificationCenter;
	UIApplication* _application;
	FBMPushDialogController* _pushDialogController;
	OrcaPushRegistrar* _pushRegistrar;
	BOOL _canUpdatePushScreen;
	MNUserSettings* _userSettings;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	MNUserSetUpStatePersister* _userSetUpStatePersister;
	id<FBProvider> _pushDialogControllerProvider;
	MNInstructionsViewController* _pushNotificationsTurnOnInstructionsViewController;
	MNNavigationController* _pushNotificationsTurnOnInstructionsNavigationController;
	FBMPushNotificationRequestContentConfiguration* _notificationRequestContentConfiguration;
	MNPushInstructionsControllerListenerAnnouncer* _pushInstructionsControllerListenerAnnouncer;
	BOOL _shouldShowPushInstructionOnPushRegistrationComplete;
	id<NSObject> _pushNotificationsTurnOnInstructionsForegroundObserver;
	id<NSObject> _pushNotificationsInstructionsForegroundObserver;
	id<NSObject> _applicationDidEnterBackgroundObserver;
	id<FBNuxDelegate> _nuxCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;              //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewControllerForPresentation;
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)showPushInstructionsViewController;
-(id)nuxID;
-(id)triggerIDs;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(unsigned long long)presenterOptions;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(void)showNux;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(void)_startObeservingApplicationLifecycleEvents;
-(id)initWithModalPresenter:(id)arg1 notificationCenter:(id)arg2 application:(id)arg3 pushRegistrar:(id)arg4 userSettings:(id)arg5 session:(id)arg6 configManager:(id)arg7 userSetUpStatePersister:(id)arg8 pushDialogControllerProvider:(id)arg9 notificationRequestContentConfiguration:(id)arg10 ;
-(int)_nuxStateForTriggerID:(id)arg1 ;
-(BOOL)_isFrequencyCapped;
-(BOOL)_shouldShowPushInstructionsOnNewUserSetupComplete;
-(BOOL)_shouldShowPushInstructionsOnPushTokenRegistrationDidComplete;
-(BOOL)_shouldShowPushInstructionsOnAppDidBecomeActive;
-(void)_showPushNotificationsTurnOnInstructionsViewController;
-(void)_dismissPushTurnOnInstructionsIfPushIsEnabled;
-(void)_dismissPushInstructions;
-(void)_dismissPushTurnOnInstructions;
-(void)instructionsViewControllerDidPressOpenSettingsButton:(id)arg1 ;
-(void)instructionsViewControllerDidPressDismissButton:(id)arg1 ;
-(void)pushDialogDidTapOK;
-(void)pushDialogDidTapNotNow;
-(void)requestSystemPermissionOrDirectToSystemSettingsOrPresentInstructions;
-(void)_dismissPushInstructionsIfNeeded;
-(void)startObservingEligibility;
-(void)stopObservingEligibility;
-(void)dealloc;
-(void)_applicationDidEnterBackground;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

