/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalPresentationStackViewController.h>
#import <Messenger/FBWebRTCRecentCallerViewModelListener.h>
#import <Messenger/FBWebRTCCallLogViewModelDelegate.h>
#import <Messenger/FBWebRTCCallCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBModallyPresentableItem.h>

@protocol MNAvatarImageDecorating, FBProvider, MNPresenceSubscribing, FBWebRTCRecentCallsViewControllerDelegate;
@class UIView, UIViewController, FBWebRTCCallLogViewModel, NSMutableArray, FBWebRTCRecentCallerViewModel, FBWebRTCCallController, FBWebRTCCallLogView, UINavigationBar, UINavigationItem, UITableView, UIBarButtonItem, FBMobileConfigContextManager, MNDateFormatter, FBWebRTCCallButtonImageProvider, NSString;

@interface FBWebRTCRecentCallsViewController : FBModalPresentationStackViewController <FBWebRTCRecentCallerViewModelListener, FBWebRTCCallLogViewModelDelegate, FBWebRTCCallCellDelegate, UITableViewDataSource, UITableViewDelegate, FBClassProvidable, FBModallyPresentableItem> {

	FBWebRTCCallLogViewModel* _callLogViewModel;
	NSMutableArray* _calllogViewModelSnapshot;
	FBWebRTCRecentCallerViewModel* _recentCallerViewModel;
	FBWebRTCCallController* _callController;
	FBWebRTCCallLogView* _callLogView;
	UINavigationBar* _navigationBar;
	UINavigationItem* _navigationItem;
	UITableView* _tableView;
	UIBarButtonItem* _buttonBack;
	FBMobileConfigContextManager* _configManager;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNDateFormatter* _dateFormatter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	id<FBProvider> _callStatusBarViewControllerProvider;
	id<MNPresenceSubscribing> _presenceSubscriptionService;
	id<FBWebRTCRecentCallsViewControllerDelegate> _delegateParent;

}

@property (assign,nonatomic,__weak) id<FBWebRTCRecentCallsViewControllerDelegate> delegateParent;              //@synthesize delegateParent=_delegateParent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * modalPresentationView; 
@property (nonatomic,readonly) UIViewController * modalPresentationViewController; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegateParent:(id<FBWebRTCRecentCallsViewControllerDelegate>)arg1 ;
-(void)_setUpNullStateIfNeeded;
-(void)voiceMailControllerActive:(BOOL)arg1 setVoiceMailSeen:(BOOL)arg2 cell:(id)arg3 callEntry:(id)arg4 ;
-(id)_viewableCalls;
-(void)_deleteCallsLogViewModelEntry:(id)arg1 ;
-(void)_setImageForTableViewCell:(id)arg1 indexPath:(id)arg2 ;
-(void)recentCallerViewModelDidFinishFetching:(id)arg1 ;
-(void)callLogViewModelDidChange:(id)arg1 hasUnseenMissedCalls:(BOOL)arg2 ;
-(void)callCell:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithCallLogViewModel:(id)arg1 recentCallerViewModel:(id)arg2 callController:(id)arg3 avatarImageDecoration:(id)arg4 dateFormatter:(id)arg5 callStatusBarViewControllerProvider:(id)arg6 callButtonImageProvider:(id)arg7 presenceSubscriptionService:(id)arg8 configManager:(id)arg9 ;
-(void)closeRecent;
-(void)_refreshView:(BOOL)arg1 forceReloadTableView:(BOOL)arg2 ;
-(id<FBWebRTCRecentCallsViewControllerDelegate>)delegateParent;
-(UIView *)modalPresentationView;
-(UIViewController *)modalPresentationViewController;
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
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end

