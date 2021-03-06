/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/MNNavigationListener.h>
#import <Messenger/MNInboxHiddenMontageAuthorsStoreListener.h>
#import <Messenger/MNInboxTabBadgeCountSourceTracking.h>
#import <Messenger/MNInboxAppearanceEventListener.h>

@protocol FBCancelable;
@class MNThreadSummarySubscribingAnnouncer, MNThreadStore, MNBadgeCountSourceAdapter, MNUserSettings, MNNavigationCoordinator, FBMLoggedInUserInfoManager, FBMobileConfigContextManager, MNInboxHiddenMontageAuthorsStore, FBTimeThrottler, NSString;

@interface MNMontageInboxBadgeCounter : NSObject <MNThreadSummarySubscribing, MNNavigationListener, MNInboxHiddenMontageAuthorsStoreListener, MNInboxTabBadgeCountSourceTracking, MNInboxAppearanceEventListener> {

	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	MNThreadStore* _threadStore;
	MNBadgeCountSourceAdapter* _badgeCountAdapter;
	MNUserSettings* _userSettings;
	MNNavigationCoordinator* _navigationCoordinator;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;
	FBMobileConfigContextManager* _configManager;
	MNInboxHiddenMontageAuthorsStore* _hiddenMontageAuthorsStore;
	id<FBCancelable> _montageThreadListRequest;
	FBTimeThrottler* _updateBadgeCountThrottler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)inboxDidDisplayThreadList;
-(void)inboxDidLoadThreadListDataModel;
-(void)inboxDidFailToLoadThreadListDataModel;
-(void)inboxViewAppearanceStateDidChangeTo:(unsigned long long)arg1 ;
-(void)_updateBadgeCountThrottled;
-(void)_setBadgeCountAdapter:(id)arg1 ;
-(void)_updateBadgeCountWithThreadListResponse:(id)arg1 ;
-(void)_resetBadgeCount;
-(BOOL)_isSelfMontageThreadSummary:(id)arg1 ;
-(BOOL)_isHiddenMontageThreadSummary:(id)arg1 ;
-(void)_updateInboxSeenTime;
-(void)inboxHiddenMontageAuthorsStoreDidUpdateHiddenAuthors:(id)arg1 ;
-(void)inboxWillLoadMontageCamera;
-(void)inboxDidLoadMontageCamera;
-(id)initWithThreadStore:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 badgeCountUpdateService:(id)arg3 userSettings:(id)arg4 navigationCoordinator:(id)arg5 loggedInUserInfoManager:(id)arg6 configManager:(id)arg7 hiddenMontageAuthorsStore:(id)arg8 ;
-(void)startListening;
-(void)stopListening;
-(void)_updateBadgeCount;
-(long long)badgeCount;
@end

