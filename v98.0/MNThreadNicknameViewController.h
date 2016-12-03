/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNThreadNicknameEditControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol FBProvider, MNAuthenticationManager;
@class MNThreadViewModel, MNThreadParticipantNameFormatter, FBUserSession, NSArray, UITableView, MNThreadNicknameEditController, NSIndexPath, MNPeopleCellFactory, FBMobileConfigContextManager, NSString;

@interface MNThreadNicknameViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNThreadNicknameEditControllerDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	MNThreadViewModel* _threadViewModel;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBUserSession* _session;
	NSArray* _threadParticipantsIds;
	UITableView* _tableView;
	id<FBProvider> _threadNicknameEditControllerProvider;
	MNThreadNicknameEditController* _threadNicknameEditController;
	NSIndexPath* _selectedIndexPath;
	MNPeopleCellFactory* _peopleCellFactory;
	FBMobileConfigContextManager* _configManager;
	id<MNAuthenticationManager> _authManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)contactWithIndex:(unsigned long long)arg1 ;
-(void)_configureParticipantIds;
-(void)threadNicknameEditControllerDidDismissAlertView:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
@end

