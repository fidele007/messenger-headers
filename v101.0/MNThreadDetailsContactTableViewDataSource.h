/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNInviteEligibilityChecking, MNAuthenticationManager, MNThreadDetailsContactTableViewDataSourceDelegate;
@class MNThreadViewModel, FBMUser, FBWebRTCCallStarter, FBWebRTCCallButtonImageProvider, MNThreadDetailsPageConfiguration, MNBlockFeatureConfiguration, FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNThreadDetailsContactTableViewDataSource : NSObject <UITableViewDataSource, MNThreadViewModelConfigurable> {

	MNThreadViewModel* _threadViewModel;
	FBMUser* _currentContact;
	FBWebRTCCallStarter* _callStarter;
	FBWebRTCCallButtonImageProvider* _callButtonImageProvider;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;
	MNThreadDetailsPageConfiguration* _threadDetailsPageConfig;
	id<MNAuthenticationManager> _authManager;
	MNBlockFeatureConfiguration* _blockFeatureConfiguration;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;
	id<MNThreadDetailsContactTableViewDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNThreadDetailsContactTableViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(id)_viewer;
-(unsigned long long)otherActionsRowWithOtherActionsRowIndex:(unsigned long long)arg1 ;
-(id)initWithContact:(id)arg1 callStarter:(id)arg2 callButtonImageProvider:(id)arg3 inviteEligibilityChecker:(id)arg4 threadDetailsPageConfig:(id)arg5 authManager:(id)arg6 blockFeatureConfiguration:(id)arg7 session:(id)arg8 configManager:(id)arg9 ;
-(unsigned long long)settingsRowWithSettingsRowIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNThreadDetailsContactTableViewDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNThreadDetailsContactTableViewDataSourceDelegate>)delegate;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
@end
