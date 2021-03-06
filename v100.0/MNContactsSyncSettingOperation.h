/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNNonFriendsDeletionDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNContactsSyncSettingOperationDelegate, MNContactsSyncLock, MNNonFriendsDeleting;
@class MNNavigationCoordinator, FBMessengerSyncEngineManager, FBContactStore, MNCancellableOperationDialog, FBNetworkerRequest, MNUserSettings, UIAlertView, NSString;

@interface MNContactsSyncSettingOperation : NSObject <UIAlertViewDelegate, MNNonFriendsDeletionDelegate, FBClassProvidable> {

	BOOL _running;
	BOOL _contactImportingPreviouslyAllowedByUser;
	BOOL _dialogAlertViewIsDismissing;
	id<MNContactsSyncSettingOperationDelegate> _delegate;
	MNNavigationCoordinator* _navigationCoordinator;
	id<MNContactsSyncLock> _contactsSyncLock;
	FBMessengerSyncEngineManager* _syncEngineManager;
	FBContactStore* _contactStore;
	MNCancellableOperationDialog* _dialog;
	FBNetworkerRequest* _request;
	MNUserSettings* _userSettings;
	UIAlertView* _alertView;
	id<MNNonFriendsDeleting> _deletionRunner;

}

@property (nonatomic,retain) MNNavigationCoordinator * navigationCoordinator;                                        //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) id<MNContactsSyncLock> contactsSyncLock;                                                //@synthesize contactsSyncLock=_contactsSyncLock - In the implementation block
@property (nonatomic,retain) FBMessengerSyncEngineManager * syncEngineManager;                                       //@synthesize syncEngineManager=_syncEngineManager - In the implementation block
@property (nonatomic,retain) FBContactStore * contactStore;                                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) MNCancellableOperationDialog * dialog;                                                  //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,retain) FBNetworkerRequest * request;                                                           //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) MNUserSettings * userSettings;                                                          //@synthesize userSettings=_userSettings - In the implementation block
@property (assign,nonatomic) BOOL running;                                                                           //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL contactImportingPreviouslyAllowedByUser;                                           //@synthesize contactImportingPreviouslyAllowedByUser=_contactImportingPreviouslyAllowedByUser - In the implementation block
@property (assign,nonatomic) BOOL dialogAlertViewIsDismissing;                                                       //@synthesize dialogAlertViewIsDismissing=_dialogAlertViewIsDismissing - In the implementation block
@property (nonatomic,retain) UIAlertView * alertView;                                                                //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) id<MNNonFriendsDeleting> deletionRunner;                                                //@synthesize deletionRunner=_deletionRunner - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactsSyncSettingOperationDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPresentingConfirmationDialog,nonatomic,readonly) BOOL presentingConfirmationDialog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(MNNavigationCoordinator *)navigationCoordinator;
-(BOOL)isPresentingConfirmationDialog;
-(id)initWithNavigationCoordinator:(id)arg1 contactsSyncLock:(id)arg2 userSettings:(id)arg3 deletionRunner:(id)arg4 ;
-(void)_willBeCancelled;
-(void)_sendRequest;
-(void)deleteRunnerDidDeleteNonFriends:(id)arg1 ;
-(void)setNavigationCoordinator:(MNNavigationCoordinator *)arg1 ;
-(id<MNContactsSyncLock>)contactsSyncLock;
-(void)setContactsSyncLock:(id<MNContactsSyncLock>)arg1 ;
-(FBMessengerSyncEngineManager *)syncEngineManager;
-(void)setSyncEngineManager:(FBMessengerSyncEngineManager *)arg1 ;
-(BOOL)contactImportingPreviouslyAllowedByUser;
-(void)setContactImportingPreviouslyAllowedByUser:(BOOL)arg1 ;
-(BOOL)dialogAlertViewIsDismissing;
-(void)setDialogAlertViewIsDismissing:(BOOL)arg1 ;
-(id<MNNonFriendsDeleting>)deletionRunner;
-(void)setDeletionRunner:(id<MNNonFriendsDeleting>)arg1 ;
-(void)setDelegate:(id<MNContactsSyncSettingOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactsSyncSettingOperationDelegate>)delegate;
-(FBNetworkerRequest *)request;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)start;
-(void)_cleanup;
-(void)setRequest:(FBNetworkerRequest *)arg1 ;
-(FBContactStore *)contactStore;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
-(MNCancellableOperationDialog *)dialog;
-(void)setContactStore:(FBContactStore *)arg1 ;
-(void)_showErrorAlert;
-(MNUserSettings *)userSettings;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)setDialog:(MNCancellableOperationDialog *)arg1 ;
@end

