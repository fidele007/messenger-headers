/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Messenger/MNContactSearchResultDisplaying.h>

@protocol MNContactSearchDataPreparing, MNContactSearchResultFiltering, MNContactSearchResultPartitioning, MNContactSearchResultRanking;
@class UITableView, MNContactSearchPreppedResultDataSet, NSArray, NSString;

@interface MNContactSearchTableViewDisplayController : NSObject <UITableViewDataSource, MNContactSearchResultDisplaying> {

	id<MNContactSearchDataPreparing> _dataPreparer;
	id<MNContactSearchResultFiltering> _filter;
	id<MNContactSearchResultPartitioning> _partitioner;
	id<MNContactSearchResultRanking> _rankingScheme;
	UITableView* _tableView;
	MNContactSearchPreppedResultDataSet* _preppedData;
	NSArray* _displayedSections;
	NSArray* _rankedSectionResults;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataPreparer:(id)arg1 filter:(id)arg2 partitioner:(id)arg3 rankingScheme:(id)arg4 ;
-(void)bindToTableView:(id)arg1 ;
-(void)displayResults:(id)arg1 ;
-(void)_displayResults:(id)arg1 withPreppedData:(id)arg2 ;
-(void)unbindTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
@end

