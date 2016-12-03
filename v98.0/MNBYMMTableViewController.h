/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBTableViewSectionDataSource.h>

@protocol FBProvider, FBTableViewMutating;
@class FBUserSession, NSArray, MNThreadCollectionViewController, MNThreadImageManager, NSString;

@interface MNBYMMTableViewController : NSObject <FBClassProvidable, FBTableViewSectionDataSource> {

	FBUserSession* _session;
	NSArray* _pages;
	id<FBProvider> _threadViewControllerProvider;
	MNThreadCollectionViewController* _threadViewController;
	MNThreadImageManager* _threadImageManager;
	id<FBTableViewMutating> _tableViewMutator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id)initWithSession:(id)arg1 bymmViewControllerProvider:(id)arg2 threadImageManager:(id)arg3 ;
-(void)_handleFetchedViewer:(id)arg1 ;
-(void)fetchBYMM;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

