/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBTableViewSectionDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBTableViewMutating;
@class UITableViewCell, NSString;

@interface MNOptionalSingleCellDataSource : NSObject <UITableViewDataSource, FBTableViewSectionDataSource, UITableViewDelegate> {

	id<FBTableViewMutating> _tableViewMutator;
	UITableViewCell* _cellToDisplay;

}

@property (nonatomic,retain) UITableViewCell * cellToDisplay;                       //@synthesize cellToDisplay=_cellToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)setCellToDisplay:(UITableViewCell *)arg1 ;
-(UITableViewCell *)cellToDisplay;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

