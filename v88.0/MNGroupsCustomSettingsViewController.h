/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNGroupsCustomSettingsCellDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdateListener.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>

@protocol MNNewGroupThreadSummaryUpdateRunning;
@class MNGroupsCustomSettingsView, NSArray, MNNewGroupThreadSummary, NSString;

@interface MNGroupsCustomSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MNGroupsCustomSettingsCellDelegate, MNNewGroupThreadSummaryUpdateListener, FBClassProvidable, MNNewGroupThreadSummaryUpdating> {

	MNGroupsCustomSettingsView* _customSettingsView;
	NSArray* _settingsItems;
	MNNewGroupThreadSummary* _groupThreadSummary;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)customSettingsCellDidToggleSwitch:(id)arg1 isON:(BOOL)arg2 ;
-(void)_initializeGroupSettingsItems;
-(void)_didChangeCustomSetting:(unsigned long long)arg1 isON:(BOOL)arg2 ;
-(void)newGroupThreadSummaryUpdated:(id)arg1 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end
