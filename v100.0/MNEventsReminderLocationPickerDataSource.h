/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <UIKit/UITableViewDataSource.h>

@protocol MNEventsReminderLocationPickerDataSourceDelegate;
@class FBUserSession, NSArray, FBViewerCoordinates, NSString;

@interface MNEventsReminderLocationPickerDataSource : NSObject <FBClassProvidable, UITableViewDataSource> {

	FBUserSession* _session;
	NSArray* _locationResults;
	FBViewerCoordinates* _viewerCoordinates;
	NSString* _currentQueryString;
	id<MNEventsReminderLocationPickerDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEventsReminderLocationPickerDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)fetchResultsWithQueryString:(id)arg1 ;
-(void)_handleSuccessfulResponse:(id)arg1 ;
-(void)fetchInitialResultsForLocation:(id)arg1 ;
-(id)reminderLocationAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<MNEventsReminderLocationPickerDataSourceDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNEventsReminderLocationPickerDataSourceDelegate>)delegate;
-(id)titleForHeaderInSection:(long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_showErrorAlert;
@end

