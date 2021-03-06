/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSyncCellControllerDelegate.h>
#import <Messenger/MNPeoplePickerAccessoryDataSource.h>

@protocol FBMobileConfigContext, MNPeoplePickerAccessoryDataSourceDelegate;
@class NSArray, MNContactSyncCellController, MNContactSyncTableViewCell, FBUserSession, NSString;

@interface MNMessengerPeoplePickerAccessoryDataSource : NSObject <MNContactSyncCellControllerDelegate, MNPeoplePickerAccessoryDataSource> {

	NSArray* _accessoryCells;
	MNContactSyncCellController* _contactSyncCellController;
	MNContactSyncTableViewCell* _contactSyncCell;
	FBUserSession* _session;
	id<FBMobileConfigContext> _config;
	id<MNPeoplePickerAccessoryDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPeoplePickerAccessoryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)contactSyncCellControllerCellNeedsUpdate:(id)arg1 ;
-(void)contactSyncCellController:(id)arg1 didInitiateContactsImportingWithAction:(id)arg2 ;
-(id)initWithContactSyncCellController:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<MNPeoplePickerAccessoryDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNPeoplePickerAccessoryDataSourceDelegate>)delegate;
@end

