/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNPresenceUpdateListening.h>
#import <Messenger/FBWebRTCCallLogViewDelegate.h>
#import <Messenger/FBWebRTCDetailCallCellDelegate.h>
#import <Messenger/FBWebRTCDetailUserInfoCellDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNAvatarImageDecorating, MNPresenceSubscribing, MNViewPreviewingHandling, FBWebRTCCallLogDetailViewControllerDelegate;
@class FBWebRTCCallLogView, UITableView, FBWebRTCCallCellData, FBWebRTCCallLogViewModel, MNProfileImageViewController, MNThreadImageManager, FBWebRTCCallStarter, NSMutableArray, MNDateFormatter, FBWebRTCCallButtonImageProvider, NSIndexPath, FBWebRTCVoicemailPlayerView, FBWebRTCVoicemailPlayerController, NSString;

@interface FBWebRTCCallLogDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MNPresenceUpdateListening, FBWebRTCCallLogViewDelegate, FBWebRTCDetailCallCellDelegate, FBWebRTCDetailUserInfoCellDelegate, FBClassProvidable> {

	FBWebRTCCallLogView* _callLogView;
	UITableView* _tableView;
	FBWebRTCCallCellData* _currentCallsData;
	FBWebRTCCallLogViewModel* _currentCallLogViewModel;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	FBWebRTCCallStarter* _callStarter;
	NSMutableArray* _recentCallsList;
	long long _curentVisibleDays;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	FBWebRTCCallButtonImageProvider* _cellButtonProvider;
	BOOL _isVoicemailPlayerActive;
	NSIndexPath* _curentVoicemailIndexPath;
	FBWebRTCVoicemailPlayerView* _voicemailPlayerView;
	FBWebRTCVoicemailPlayerController* _voicemailController;
	BOOL _isCurrentUserOnline;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	NSString* _presenceListenerActiveForFBID;
	id<MNViewPreviewingHandling> _tableViewPreviewingHandler;
	id<FBWebRTCCallLogDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallLogDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_registerForPreviewing;
-(void)didReceivePresenceUpdate:(id)arg1 ;
-(id)initWithAvatarImageDecoration:(id)arg1 dateFormatter:(id)arg2 callButtonImageProvider:(id)arg3 profileImageViewController:(id)arg4 threadImageManager:(id)arg5 callStarter:(id)arg6 audioCache:(id)arg7 webAudioManager:(id)arg8 presenceSubscription:(id)arg9 tableViewPreviewingHandler:(id)arg10 ;
-(void)_setupNavigationBar;
-(void)_startPresenceListener;
-(void)_stopPresenceListener;
-(void)_refreshRecentCallsPerDayList;
-(void)_startCallToContact:(id)arg1 isVideoCall:(BOOL)arg2 withSource:(unsigned long long)arg3 ;
-(void)_openThreadForContact:(id)arg1 ;
-(void)_configureVoicemailPlayerStartForCell:(id)arg1 ;
-(BOOL)_isUserInfoSection:(long long)arg1 ;
-(BOOL)_isGoPreviousSection:(long long)arg1 ;
-(BOOL)_isDetailSection:(long long)arg1 ;
-(id)_recentCallsForSection:(long long)arg1 ;
-(id)_makeUserInfoCell;
-(id)_makeShowPreviousCell;
-(id)_makeDetailCallCellForRowAtIndexPath:(id)arg1 ;
-(id)_detailSectionHeaderForSection:(long long)arg1 ;
-(void)_commitDeleteCellAtIndexPath:(id)arg1 ;
-(id)_logEntryForIndexPath:(id)arg1 ;
-(void)_closeControllerAnimated:(BOOL)arg1 ;
-(void)_divideMissedAndVocemailCalls:(id)arg1 ;
-(void)didTapAudioCallButtonForContact:(id)arg1 userInfoCell:(id)arg2 ;
-(void)didTapVideoCallButtonForContact:(id)arg1 userInfoCell:(id)arg2 ;
-(void)didTapThreadButtonForContact:(id)arg1 userInfoCell:(id)arg2 ;
-(void)_closeVoicemailPlayer;
-(void)updateWithCallCellData:(id)arg1 callLogModel:(id)arg2 ;
-(void)callLogViewCoverTapped:(id)arg1 ;
-(BOOL)_isDate:(id)arg1 sameDayAsDate:(id)arg2 ;
-(void)didTapPlayVoicemailButtonForDetailCallCell:(id)arg1 ;
-(void)setDelegate:(id<FBWebRTCCallLogDetailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<FBWebRTCCallLogDetailViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
@end

