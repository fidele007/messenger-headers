/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListViewControllerDelegate.h>
#import <Messenger/MNRequestThreadInboxPromoterListener.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNNavigationController, MNModalHostViewController, MNRequestThreadInboxPromoter, MNAppThemeConfiguration, FBMobileConfigContextManager, MNPendingRequestsStore, MNUserSettings, FBUserSession, NSString;

@interface MNPendingRequestsThreadListNavigationHandler : NSObject <MNThreadListViewControllerDelegate, MNRequestThreadInboxPromoterListener, FBViewerContextClassProvidable> {

	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _threadNavigationCoordinatorProvider;
	id<FBProvider> _pendingRequestsThreadListViewControllerProvider;
	id<FBProvider> _otherThreadListViewControllerProvider;
	MNNavigationController* _pendingRequestsFolderNavigationController;
	MNModalHostViewController* _modalContainerViewController;
	MNRequestThreadInboxPromoter* _requestThreadInboxPromoter;
	MNAppThemeConfiguration* _appThemeConfig;
	FBMobileConfigContextManager* _configManager;
	MNPendingRequestsStore* _pendingRequestsStore;
	MNUserSettings* _userSettings;
	FBUserSession* _session;
	BOOL _shouldShowPromoteInboxAlert;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)presentedPendingRequestsFolderNavigationController;
-(void)showPendingRequestsThreadListFromViewControllerInInbox:(id)arg1 ;
-(void)threadListViewController:(id)arg1 didSelectFailedStatusIndicatorForThreadWithLocalThreadKey:(id)arg2 ;
-(void)threadListViewController:(id)arg1 didSelectThreadWithLocalThreadKey:(id)arg2 sendConversionContext:(id)arg3 ;
-(void)threadListViewController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2 ;
-(void)threadListViewController:(id)arg1 didSelectSearchResultWithViewController:(id)arg2 ;
-(void)threadListViewControllerDidPressNewMessageButton:(id)arg1 ;
-(void)threadListViewControllerDidTapMessageRequestsCell:(id)arg1 ;
-(void)threadListViewControllerDidDisplayList:(id)arg1 ;
-(void)threadListViewControllerDidLoadDataModel:(id)arg1 ;
-(void)threadListViewControllerDidFailToLoadDataModel:(id)arg1 ;
-(void)threadListViewControllerDidTapShowMore:(id)arg1 ;
-(void)threadListViewControllerWillAppear:(id)arg1 ;
-(void)threadListViewControllerDidAppear:(id)arg1 ;
-(void)threadListViewControllerWillDisappear:(id)arg1 ;
-(void)threadListViewControllerDidDisappear:(id)arg1 ;
-(void)threadListViewControllerWillBeginSearch:(id)arg1 ;
-(void)threadListViewControllerDidBeginSearch:(id)arg1 ;
-(void)threadListViewControllerWillEndSearch:(id)arg1 ;
-(void)threadListViewControllerDidEndSearch:(id)arg1 ;
-(void)threadListViewController:(id)arg1 didTapURL:(id)arg2 ;
-(void)threadListViewController:(id)arg1 didTapShareWithContent:(id)arg2 sendConversionContext:(id)arg3 ;
-(void)threadListViewController:(id)arg1 wantsToPushViewController:(id)arg2 ;
-(void)threadListViewController:(id)arg1 didSelectMontageWithIdentifier:(id)arg2 wasUnreadByViewer:(BOOL)arg3 allInboxMontages:(id)arg4 entryPoint:(id)arg5 ;
-(void)threadListViewControllerDidTapOpenMontageComposer:(id)arg1 ;
-(void)threadListViewController:(id)arg1 didTapOpenMontageArtPickerSectionWithId:(id)arg2 composition:(id)arg3 ;
-(void)threadListViewController:(id)arg1 didSelectContentSubscriptionPublisherWithID:(id)arg2 ;
-(void)threadListViewControllerDidSelectSeeAllRecentMessages:(id)arg1 ;
-(void)threadListViewControllerDidSelectCreateRoom:(id)arg1 ;
-(void)threadListViewController:(id)arg1 didSelectJoinableRoomWithHash:(id)arg2 loggingData:(id)arg3 loggingSource:(id)arg4 ;
-(void)threadListViewControllerDidSelectDirectM:(id)arg1 ;
-(id)initWithNavigationCoordinatorProvider:(id)arg1 threadNavigationCoordinatorProvider:(id)arg2 pendingRequestsThreadListViewControllerProvider:(id)arg3 otherThreadListViewControllerProvider:(id)arg4 requestThreadInboxPromoter:(id)arg5 configManager:(id)arg6 pendingRequestsStore:(id)arg7 userSettings:(id)arg8 appThemeConfiguration:(id)arg9 session:(id)arg10 ;
-(id)_createPendingThreadListViewController;
-(void)_showMoveToInboxAlertViewIfNeeded;
-(void)_showAlertViewForSettingEntryPointIfNeeded;
-(void)openSettingChatRequestPage;
-(void)didPromoteThreadToInbox:(id)arg1 ;
-(void)pushPendingRequestsThreadList;
-(void)_doneBarButtonItemTapped:(id)arg1 ;
-(void)dealloc;
@end

