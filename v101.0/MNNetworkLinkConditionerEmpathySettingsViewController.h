/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class MNNetworkLinkConditionerEmpathyService, NSOrderedSet;

@interface MNNetworkLinkConditionerEmpathySettingsViewController : UITableViewController {

	MNNetworkLinkConditionerEmpathyService* _service;
	NSOrderedSet* _sections;

}
-(id)initWithEmpathyService:(id)arg1 ;
-(id)_populateSections;
-(long long)_sectionFromIndex:(long long)arg1 ;
-(void)_initializeCell:(id)arg1 forSection:(long long)arg2 ;
-(void)_updateCell:(id)arg1 inSection:(long long)arg2 atIndexPath:(id)arg3 ;
-(void)_onOffSwitchDidChanged:(id)arg1 ;
-(id)_formatBandwidth:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
@end

