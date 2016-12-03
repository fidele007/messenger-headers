/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNEventsReminderDetailViewControllerDelegate;
@class FBUserSession, UITableView, MNThreadViewModel, MNEventsReminderAttendeesDataSource, FBMemMessengerEventReminder, MNThreadUpdateService, FBMobileConfigContextManager, NSString;

@interface MNEventsReminderDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	FBUserSession* _userSession;
	UITableView* _tableView;
	MNThreadViewModel* _threadViewModel;
	MNEventsReminderAttendeesDataSource* _eventsReminderAttendeesDataSource;
	FBMemMessengerEventReminder* _reminder;
	MNThreadUpdateService* _threadUpdateService;
	FBMobileConfigContextManager* _configManager;
	id<MNEventsReminderDetailViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderDetailViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)updateReminder:(id)arg1 ;
-(id)initWithEventsReminderAttendeesDataSource:(id)arg1 userSession:(id)arg2 configManager:(id)arg3 threadUpdateService:(id)arg4 ;
-(void)_fetchReminder;
-(void)_deleteReminderThreadUpdateWithEventId:(id)arg1 ;
-(id)currentReminderSummary;
-(long long)_rowForIndexPath:(id)arg1 ;
-(id)_rowConfiguration;
-(id)_locationCellForTableView:(id)arg1 ;
-(id)_locationMapCellForTableView:(id)arg1 ;
-(id)_mnTableViewCellForTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_cellTextForIndexPath:(id)arg1 ;
-(id)_cellStyleForIndexPath:(id)arg1 ;
-(long long)_currentUserRSVPStatus;
-(void)_presentLocationSelector;
-(void)_presentCalendarPrompt;
-(void)setDelegate:(id<MNEventsReminderDetailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNEventsReminderDetailViewControllerDelegate>)delegate;
-(void)loadView;
-(void)_dismissViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_showErrorAlert;
-(void)_updateTitle;
@end

