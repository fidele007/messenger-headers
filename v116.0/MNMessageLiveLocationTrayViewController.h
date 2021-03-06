/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/MNMessageLiveLocationTrayMapViewControllerDelegate.h>
#import <Messenger/MNAlwaysLocationAuthorizationManagerDelegate.h>
#import <Messenger/MNMessageLiveLocationOutgoingListener.h>
#import <Messenger/MNMessageLiveLocationIncomingListener.h>
#import <Messenger/MNMessageLiveLocationThreadSummaryListener.h>
#import <Messenger/MNLocationPickerPresenterDelegate.h>
#import <Messenger/MNMessageLiveLocationTrayPrePromptViewControllerDelegate.h>

@protocol FBLocationManagerSubscription, FBCancelable, MNMessageLiveLocationTrayViewControllerDelegate;
@class MNMessageLiveLocationTrayViewControllerInjector, MNLocationPickerViewController, MNMessageLiveLocationAnalyticsLogger, MNMessageLiveLocationTrayView, MNMessageLiveLocationTrayMapViewController, CLLocation, FBMSyncedThreadKey, NSString, NSSet, MNAlwaysLocationAuthorizationManager, MNLoadingView, NSDate, MNMessengerLiveLocationTrayPrePromptViewController;

@interface MNMessageLiveLocationTrayViewController : UIViewController <FBClassInjectable, MNMessageLiveLocationTrayMapViewControllerDelegate, MNAlwaysLocationAuthorizationManagerDelegate, MNMessageLiveLocationOutgoingListener, MNMessageLiveLocationIncomingListener, MNMessageLiveLocationThreadSummaryListener, MNLocationPickerPresenterDelegate, MNMessageLiveLocationTrayPrePromptViewControllerDelegate> {

	MNMessageLiveLocationTrayViewControllerInjector* _injector;
	MNLocationPickerViewController* _locationPickerViewController;
	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;
	MNMessageLiveLocationTrayView* _trayView;
	MNMessageLiveLocationTrayMapViewController* _trayMapViewController;
	CLLocation* _initialUserLocation;
	FBMSyncedThreadKey* _threadKey;
	NSString* _pendingThreadOfflineThreadingId;
	NSSet* _liveLocations;
	NSSet* _initialStaleMessageLiveLocationIds;
	BOOL _hasFetchedLiveLocations;
	MNAlwaysLocationAuthorizationManager* _authorizationManager;
	id<FBLocationManagerSubscription> _initialUserLocationFetchToken;
	id<FBLocationManagerSubscription> _sendLocationFetchToken;
	CLLocation* _locationToSendWhenAuthorized;
	BOOL _shouldSendWhenAuthorized;
	id<FBCancelable> _threadStoreRequestCancelable;
	MNLoadingView* _loadingView;
	NSDate* _viewDidAppearTime;
	BOOL _isVisible;
	MNMessengerLiveLocationTrayPrePromptViewController* _nuxPrePromptViewController;
	BOOL _isNUXPrePromptVisible;
	unsigned long long _prePromptOpenTrayStatus;
	id<MNMessageLiveLocationTrayViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMessageLiveLocationTrayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)injectorClass;
-(void)_cancelThreadStoreRequest;
-(void)locationPickerPresenter:(id)arg1 didSendWithLocationAttachmentData:(id)arg2 ;
-(void)locationPickerPresenter:(id)arg1 didDismissAlertView:(id)arg2 ;
-(void)locationPickerPresenterDidDismiss:(id)arg1 ;
-(void)startedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 expirationTime:(id)arg3 ;
-(void)resumedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 expirationTime:(id)arg4 ;
-(void)stoppedSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 messageLiveLocationId:(id)arg3 source:(long long)arg4 ;
-(void)startedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 expirationTime:(id)arg2 ;
-(void)stoppedSendingLocationUpdatesForPendingThreadWithOfflineThreadingId:(id)arg1 source:(long long)arg2 ;
-(void)messageLiveLocationDidReceiveUpdateForThreadKey:(id)arg1 liveLocation:(id)arg2 ;
-(void)messageLiveLocationDidBecomeStaleForThreadKey:(id)arg1 messageLiveLocationId:(id)arg2 offlineThreadingId:(id)arg3 ;
-(void)willSwitchToTray;
-(void)resetIfCurrentThreadChanged;
-(id)_nonViewerLiveLocations;
-(id)_staleMessageLiveLocationIds;
-(void)messageLiveLocationTrayMapViewController:(id)arg1 startSendingLiveLocation:(id)arg2 ;
-(void)messageLiveLocationTrayMapViewControllerStopSendingLiveLocation:(id)arg1 ;
-(void)messageLiveLocationTrayMapViewControllerDidTapToSelectStaticLocation:(id)arg1 ;
-(void)messageLiveLocationTrayMapViewControllerDidTapToCollapseLargeMap:(id)arg1 ;
-(void)_resetThreadSpecificState;
-(void)_initializeLoadingViewIfNeeded;
-(void)_fetchAllDataIfNecessaryAndUpdateView;
-(id)_allActiveMessageLiveLocationIds;
-(id)_allActiveOfflineThreadingIds;
-(BOOL)_isSendingLiveLocationForCurrentThread;
-(void)didAcceptLocationPermissionPrePrompt;
-(void)didDenyLocationPermissionPrePrompt;
-(void)_requestAlwaysLocationPermission;
-(void)_dismissNUXPrePrompt;
-(void)_didDismissNUXPrePrompt;
-(void)_resetShouldSendState;
-(void)_initializeTrayMapViewControllerIfNeeded;
-(void)_setTrayViewModelToShowingMapWithSendingState:(id)arg1 ;
-(id)_expirationTimeForLocationUpdatesForCurrentThread;
-(void)_setTrayViewModelToShowingMapWithSendingExpirationTime:(id)arg1 ;
-(void)_setTrayViewModelToShowingMapNotSending;
-(void)_didFetchLiveLocations;
-(void)_fetchLiveLocationsIfNecessaryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_fetchInitialUserLocationIfNecessaryAndUpdateView;
-(void)_showNuxPrePromptAfterTrayDidOpenIfNecessary;
-(void)_setTrayViewModelToLoading;
-(void)_didReceiveThreadStoreResponseWithThreadSummary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didReceiveLiveLocations:(id)arg1 ;
-(BOOL)_shouldShowNuxPrePromptAfterTrayDidOpen;
-(void)_showNuxPrePromptAndSource:(unsigned long long)arg1 ;
-(BOOL)_shouldFetchInitialUserLocation;
-(void)_setTrayViewModelToShowingMap;
-(void)_didReceiveInitialLocationUpdateWithLocation:(id)arg1 error:(id)arg2 ;
-(void)_locationAuthorizationManagerDidGrantAlwaysAccessOnMainThread;
-(void)_locationAuthorizationManagerDidDenyAlwaysAccessOnMainThread;
-(void)_fetchLocationIfNecessaryAndSendWithLocation:(id)arg1 ;
-(void)_didReceiveThreadUpdateWithThreadKey:(id)arg1 liveLocations:(id)arg2 ;
-(void)_setStaleStateForLiveLocation:(id)arg1 isStale:(BOOL)arg2 ;
-(void)_sendWithLocation:(id)arg1 ;
-(void)_fetchLocationAndSend;
-(void)_didReceiveSendLocationUpdateWithLocation:(id)arg1 error:(id)arg2 ;
-(void)_showPrePromptBeforeRequestingAlwaysLocationPermission;
-(void)_collapseExpandedMap;
-(void)_didShowNuxPrePrompt;
-(void)locationAuthorizationManagerDidGrantAlwaysAccess:(id)arg1 ;
-(void)locationAuthorizationManagerDidDenyAlwaysAccess:(id)arg1 ;
-(void)updatedLiveLocationForThreadKey:(id)arg1 updatedLiveLocation:(id)arg2 allLiveLocations:(id)arg3 ;
-(void)purgedAllThreadSummaries;
-(id)initWithInjector:(id)arg1 ;
-(void)setDelegate:(id<MNMessageLiveLocationTrayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMessageLiveLocationTrayViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

