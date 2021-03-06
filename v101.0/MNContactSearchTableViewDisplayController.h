/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNContactSearchResultDisplaying.h>

@protocol MNContactSearchProcessingPipeline, MNContactSearchTableViewCellProviding, MNContactSearchTableViewSelectionDelegate;
@class UITableView, MNContactSearchIndexedPreppedDataSet, NSArray, MNScrollViewScrollingListenerAnnouncer, NSString;

@interface MNContactSearchTableViewDisplayController : NSObject <UITableViewDataSource, UITableViewDelegate, MNContactSearchResultDisplaying> {

	id<MNContactSearchProcessingPipeline> _pipeline;
	id<MNContactSearchTableViewCellProviding> _cellProvider;
	UITableView* _tableView;
	BOOL _showLoadingIndicators;
	MNContactSearchIndexedPreppedDataSet* _preppedDataSet;
	NSArray* _displayedSections;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	id<MNContactSearchTableViewSelectionDelegate> _selectionDelegate;

}

@property (nonatomic,copy,readonly) NSArray * currentlyDisplayedResults; 
@property (assign,nonatomic,__weak) id<MNContactSearchTableViewSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindToTableView:(id)arg1 ;
-(void)displayResults:(id)arg1 ;
-(void)displayPartialResults:(id)arg1 ;
-(void)unbindFromTableView;
-(void)addScrollingListener:(id)arg1 ;
-(void)removeScrollingListener:(id)arg1 ;
-(BOOL)isBoundToTableView:(id)arg1 ;
-(NSArray *)currentlyDisplayedResults;
-(id)initWithProcessingPipeline:(id)arg1 cellProvider:(id)arg2 ;
-(void)_didReceiveProcessingResult:(id)arg1 stillSearching:(BOOL)arg2 ;
-(BOOL)_isLoadingIndicatorSection:(long long)arg1 ;
-(id)_resultForIndexPath:(id)arg1 ;
-(BOOL)_shouldShowHeaderForSection:(long long)arg1 inTable:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNContactSearchTableViewSelectionDelegate>)selectionDelegate;
-(void)setSelectionDelegate:(id<MNContactSearchTableViewSelectionDelegate>)arg1 ;
@end

