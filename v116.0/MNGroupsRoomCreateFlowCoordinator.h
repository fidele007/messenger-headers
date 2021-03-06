/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdateListener.h>
#import <Messenger/MNBlockingGroupThreadCreatorDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewNavigationItemsUpdating.h>
#import <Messenger/MNJoinableGroupShareControllerDelegate.h>

@protocol FBMSPDeltaHandlerListener, MNNewGroupThreadSummaryUpdateRunning;
@class MNGroupsRoomCreateFlowCoordinatorInjector, MNNavigationController, UIViewController, FBTimer, FBMGroupThreadKey, MNNewGroupThreadSummary, MNProgressBarController, MNThreadNavigationCoordinator, UIWindow, MNBlockingGroupThreadCreator, NSString;

@interface MNGroupsRoomCreateFlowCoordinator : NSObject <FBClassInjectable, UINavigationControllerDelegate, MNNewGroupThreadSummaryUpdateListener, MNBlockingGroupThreadCreatorDelegate, MNGroupsRoomCreateViewNavigationItemsUpdating, MNJoinableGroupShareControllerDelegate> {

	MNGroupsRoomCreateFlowCoordinatorInjector* _injector;
	MNNavigationController* _presentationNavigationController;
	UIViewController* _currentContentViewController;
	UIViewController* _nextContentViewController;
	id<FBMSPDeltaHandlerListener> _dispatchSelfDeltaHandlerListener;
	FBTimer* _navigateToThreadTimer;
	FBMGroupThreadKey* _createdGroupThreadKey;
	BOOL _shouldAddCustomizationOptionStep;
	MNNewGroupThreadSummary* _newGroupThreadSummary;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	MNProgressBarController* _progressBarController;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	UIWindow* _loadingViewWindow;
	MNBlockingGroupThreadCreator* _roomCreator;
	unsigned long long _entryPoint;
	BOOL _presentingExtendedForwardView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)syncProtocolDeltasDidFinishProcessingWithAffectedThreadKeys:(id)arg1 ;
-(void)groupThreadCreator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_didTapCreateButton;
-(void)groupThreadCreatorWillBeginRequest:(id)arg1 withNewGroupThreadSummary:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didUpdateWithProgress:(double)arg2 ;
-(void)groupThreadCreator:(id)arg1 didFinishCreatingWithGroupThreadKey:(id)arg2 ;
-(void)groupThreadCreator:(id)arg1 didProfileImageUploadFailWithError:(id)arg2 forThreadKey:(id)arg3 ;
-(void)roomCreateViewControllerDidRequestEnableNavBarItems:(unsigned long long)arg1 enable:(BOOL)arg2 ;
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(id)_loadingViewWindow;
-(void)_setCancelButtonAsLeftBarItem:(id)arg1 ;
-(void)_setNextButtonAsRightBarItem:(id)arg1 ;
-(void)_setCreateButtonAsRightBarItem:(id)arg1 ;
-(void)_didTapCancelBtn;
-(void)_didTapNextButton;
-(BOOL)_isPresentingCreateRoomView;
-(void)_applyColorThemeToAllCreateFlowViews:(id)arg1 ;
-(void)_cleanupThreadNavigation;
-(void)_removeLoadingView;
-(void)_finishCreationAndNavigateToThreadWithKey:(id)arg1 shouldShowShareSheet:(BOOL)arg2 ;
-(void)_addNewRoomToGroupsTabManager:(id)arg1 ;
-(void)_navigateToThreadWithGroupThreadKey:(id)arg1 shouldShowShareSheet:(BOOL)arg2 ;
-(void)_endRoomsFunnelLoggingWithEndAction:(id)arg1 withThreadFBID:(id)arg2 ;
-(void)_didEndRoomCreateFlow;
-(void)_updateRoomSummaryWithNewProfileImage:(id)arg1 ;
-(BOOL)_isPresentingCreateRoomViewWithCustomizations;
-(BOOL)_isPresentingCustomSettingsView;
-(id)presentationNavigationController;
-(void)_verifyThreadAndNavigateIfReady;
-(void)_enableNavButtons:(unsigned long long)arg1 enable:(BOOL)arg2 ;
-(void)_didCompleteThreadCreationWithGroupThreadKey:(id)arg1 ;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_threadSummaryMatchesNewGroupThreadSummary:(id)arg1 ;
-(BOOL)_shouldShowInstantShareViewForThreadSummary:(id)arg1 ;
-(void)_showInstantShareViewForThreadSummary:(id)arg1 ;
-(void)_setDiscoveryModeONAsDefault;
-(void)_fetchProfileImageAndUpdateRoomSummary:(id)arg1 ;
-(void)_didLoadRoomCreateFlow;
-(void)joinableGroupShareControllerDidRequestShowActionSheet:(id)arg1 ;
-(void)joinableGroupShareControllerDidFinishShowingActionSheet:(id)arg1 ;
-(id)currentContentViewController;
-(void)presentModularNewGroupCreateFlowWithConfig:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
-(void)dealloc;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_showLoadingView;
-(void)_prepareForReuse;
@end

