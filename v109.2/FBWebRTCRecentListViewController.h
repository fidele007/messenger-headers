/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBWebRTCCallLogDetailViewControllerDelegate.h>
#import <Messenger/FBWebRTCVoicemailPlayerCallButtonsDelegate.h>
#import <Messenger/FBWebRTCActionableVoicemailCellDelegate.h>
#import <Messenger/FBWebRTCActionableCallCellDelegate.h>
#import <Messenger/FBWebRTCVoicemailCellDelegate.h>
#import <Messenger/FBWebRTCCallLogViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBWebRTCCallCellDelegate.h>
#import <Messenger/FBWebRTCCallLogViewModelDelegate.h>
#import <Messenger/FBWebRTCRecentListViewControllerDelegate.h>

@protocol MNAvatarImageDecorating, FBProvider, FBWebRTCMessageThreadNavigator, MNViewPreviewingHandling, FBWebRTCRecentListViewControllerDelegate;
@class FBWebRTCCallLogView, FBMobileConfigContextManager, MNDateFormatter, FBWebRTCCallButtonImageProvider, FBWebRtcCallTabAggregationExperimentContext, NSIndexPath, FBWebRTCVoicemailPlayerController, FBWebRTCVoicemailPlayerView, FBActionableTableViewCell, MNProfileImageViewController, MNThreadImageManager, UITableView, FBWebRTCCallLogViewModel, NSMutableArray, FBWebRTCCellPresenceController, NSString;

@interface FBWebRTCRecentListViewController : UIViewController <FBWebRTCCallLogDetailViewControllerDelegate, FBWebRTCVoicemailPlayerCallButtonsDelegate, FBWebRTCActionableVoicemailCellDelegate, FBWebRTCActionableCallCellDelegate, FBWebRTCVoicemailCellDelegate, FBWebRTCCallLogViewDelegate, UITableViewDataSource, UITableViewDelegate, FBWebRTCCallCellDelegate, FBWebRTCCallLogViewModelDelegate, FBWebRTCRecentListViewControllerDelegate> {

	FBWebRTCCallLogView* _callLogView;
	FBMobileConfigContextManager* _configManager;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	FBWebRtcCallTabAggregationExperimentContext* _advancedCallAggregationExperement;
	BOOL _voicemailCellActive;
	NSIndexPath* _curentVoicemailIndexPath;
	BOOL _refreshCallLogByVoiceMail;
	FBWebRTCVoicemailPlayerController* _voicemailController;
	FBWebRTCVoicemailPlayerView* _voicemailPlayerView;
	id<FBProvider> _callLogDetailViewControllerProvider;
	FBActionableTableViewCell* _currentActionPanelVisibleCell;
	id<FBWebRTCMessageThreadNavigator> _messageThreadNavigator;
	id<MNViewPreviewingHandling> _viewPreviewingHandler;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	unsigned long long _callCellExperimentMode;
	id<FBWebRTCRecentListViewControllerDelegate> _delegate;
	UITableView* _tableView;
	FBWebRTCCallLogViewModel* _callLogViewModel;
	NSMutableArray* _calllogViewModelSnapshot;
	FBWebRTCCellPresenceController* _cellPresenceController;

}

@property (assign,nonatomic,__weak) id<FBWebRTCRecentListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBWebRTCCallLogView * view; 
@property (nonatomic,retain) UITableView * tableView;                                                   //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) FBWebRTCCallLogViewModel * callLogViewModel;                               //@synthesize callLogViewModel=_callLogViewModel - In the implementation block
@property (nonatomic,retain) NSMutableArray * calllogViewModelSnapshot;                                 //@synthesize calllogViewModelSnapshot=_calllogViewModelSnapshot - In the implementation block
@property (nonatomic,retain) FBWebRTCCellPresenceController * cellPresenceController;                   //@synthesize cellPresenceController=_cellPresenceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableViewCellShouldShowActionPanel:(id)arg1 ;
-(void)tableViewCellDidShowActionPanel:(id)arg1 ;
-(void)tableViewCellDidHideActionPanel:(id)arg1 ;
-(id)initWithCallLogViewModel:(id)arg1 detailViewControllerProvider:(id)arg2 avatarImageDecoration:(id)arg3 dateFormatter:(id)arg4 callButtonImageProvider:(id)arg5 presenceSubscriptionService:(id)arg6 experimentManager:(id)arg7 audioCache:(id)arg8 webAudioManager:(id)arg9 configManager:(id)arg10 viewPreviewingHandler:(id)arg11 profileImageViewController:(id)arg12 threadImageManager:(id)arg13 messageThreadNavigator:(id)arg14 ;
-(void)callToContact:(id)arg1 isVideoCall:(BOOL)arg2 isExplicit:(BOOL)arg3 source:(unsigned long long)arg4 ;
-(BOOL)recentListControllerIsVideoCallingAvailable:(id)arg1 ;
-(void)refreshView:(BOOL)arg1 forceReloadTableView:(BOOL)arg2 hasNewMissedCall:(BOOL)arg3 ;
-(id)_viewableCalls;
-(void)_commitDeleteCellAtIndexPath:(id)arg1 moveToArchive:(BOOL)arg2 ;
-(void)_setImageForTableViewCell:(id)arg1 indexPath:(id)arg2 ;
-(void)updateControls;
-(FBWebRTCCallLogViewModel *)callLogViewModel;
-(NSMutableArray *)calllogViewModelSnapshot;
-(void)setCalllogViewModelSnapshot:(NSMutableArray *)arg1 ;
-(void)_setUpNullStateIfNeeded;
-(void)_deleteCallsLogViewModelEntry:(id)arg1 moveToArchive:(BOOL)arg2 ;
-(FBWebRTCCellPresenceController *)cellPresenceController;
-(void)updateUserProfileImageForCallLogCell:(id)arg1 contact:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)stopPlayingVoicemailIfNeedIt;
-(void)didTapDetailsForCell:(id)arg1 contact:(id)arg2 ;
-(void)promptPreviewActionForCell:(id)arg1 withContact:(id)arg2 showDetails:(BOOL)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_reloadCalllogViewModelSnapshot:(BOOL)arg1 forceReloadTableView:(BOOL)arg2 hasNewMissedCall:(BOOL)arg3 ;
-(BOOL)_shouldHideHistoryCellSeparatorForIndexPath:(id)arg1 ;
-(void)closeCallLogDetailViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_refreshView:(BOOL)arg1 forceReloadTableView:(BOOL)arg2 hasNewMissedCall:(BOOL)arg3 ;
-(void)_closeVoicemailPlayer;
-(void)recentListController:(id)arg1 didCallContact:(id)arg2 isVideoCall:(BOOL)arg3 isExplicit:(BOOL)arg4 source:(unsigned long long)arg5 ;
-(void)_showDetailForCellAtIndexPath:(id)arg1 ;
-(void)_hideCurrentVisibleActionPanelAnimated:(BOOL)arg1 ;
-(void)_promptDeleteActionForCellAtIndexPath:(id)arg1 ;
-(void)_configureVoicemailPlayerStartForCell:(id)arg1 callEntry:(id)arg2 ;
-(void)_promptPreviewActionForCell:(id)arg1 withContact:(id)arg2 showDetails:(BOOL)arg3 ;
-(id)_generateCallHistoryCellForRowAtIndexPath:(id)arg1 ;
-(void)_setImageForCallLogCell:(id)arg1 contact:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_setProfileImagePerson:(id)arg1 tableCell:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_setProfileImageGroup:(id)arg1 tableCell:(id)arg2 isVoicemail:(BOOL)arg3 ;
-(void)_profilePreviewingWithThreadKey:(id)arg1 ;
-(void)didPressAudioCallButtonForPlayerView:(id)arg1 ;
-(void)didPressVideoCallButtonForPlayerView:(id)arg1 ;
-(void)didTapPlayVoicemailButtonForVoicemailCelll:(id)arg1 callEntry:(id)arg2 ;
-(void)didTapPreviewForVoicemailCell:(id)arg1 contact:(id)arg2 ;
-(void)didTapDetailActionForCell:(id)arg1 ;
-(void)didTapDeleteActionForCell:(id)arg1 ;
-(void)callCell:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 isExplicit:(BOOL)arg4 ;
-(void)didTapPreviewForCell:(id)arg1 contact:(id)arg2 ;
-(void)callLogViewCoverTapped:(id)arg1 ;
-(void)callLogViewModelDidChange:(id)arg1 hasUnseenMissedCalls:(BOOL)arg2 ;
-(void)setCallLogViewModel:(FBWebRTCCallLogViewModel *)arg1 ;
-(void)setCellPresenceController:(FBWebRTCCellPresenceController *)arg1 ;
-(void)_registerForPreviewing;
-(void)setDelegate:(id<FBWebRTCRecentListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<FBWebRTCRecentListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)_handleSingleTapGesture:(id)arg1 ;
@end

