/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNSettingsSectionFooterViewDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNSecureMessagingDeviceInformation, MNSecureThreadServiceControlling;
@class UITableView, MNThreadViewModel, MNThreadParticipantNameFormatter, NSString, MNSettingsSectionFooterView, FBLocaleMap;

@interface MNSecureMessagingIdentityKeyViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNSettingsSectionFooterViewDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	UITableView* _tableView;
	MNThreadViewModel* _threadViewModel;
	MNThreadParticipantNameFormatter* _nameFormatter;
	NSString* _otherParticipantShortName;
	NSString* _otherParticipantIdentityKey;
	NSString* _ourIdentityKey;
	MNSettingsSectionFooterView* _descriptionView;
	id<MNSecureMessagingDeviceInformation> _secureMessagingDeviceInfoController;
	id<MNSecureThreadServiceControlling> _secureThreadServiceControlling;
	FBLocaleMap* _localeMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(void)_loadIdentityKeys;
-(id)_webViewControllerForLearnMore;
-(void)_updateOtherParticipantIdentityKey:(id)arg1 ;
-(void)settingsSectionFooterViewDidTapSubtitleLink:(id)arg1 withResult:(id)arg2 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

