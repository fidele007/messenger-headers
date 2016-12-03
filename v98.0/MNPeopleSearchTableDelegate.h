/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/MNPeopleTableCellVisibilityAnnouncer.h>

@protocol MNPeopleSearchTableSelectionDelegate, MNPeopleSearchTableViewDataProvider;
@class FBMobileConfigContextManager, NSMutableSet, MNScrollViewScrollingListenerAnnouncer, NSString;

@interface MNPeopleSearchTableDelegate : NSObject <UITableViewDelegate, MNPeopleTableCellVisibilityAnnouncer> {

	FBMobileConfigContextManager* _configManager;
	BOOL _canCreateTopResultCell;
	NSMutableSet* _weakObservers;
	MNScrollViewScrollingListenerAnnouncer* _scrollingAnnouncer;
	id<MNPeopleSearchTableSelectionDelegate> _delegate;
	id<MNPeopleSearchTableViewDataProvider> _tableViewDataProvider;

}

@property (assign,nonatomic,__weak) id<MNPeopleSearchTableSelectionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleSearchTableViewDataProvider> tableViewDataProvider;              //@synthesize tableViewDataProvider=_tableViewDataProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)addScrollingListener:(id)arg1 ;
-(id)initWithConfigManager:(id)arg1 canCreateTopResultCell:(BOOL)arg2 ;
-(void)setTableViewDataProvider:(id<MNPeopleSearchTableViewDataProvider>)arg1 ;
-(void)addPeopleTableObserver:(id)arg1 ;
-(BOOL)removePeopleTableObserver:(id)arg1 ;
-(void)removeScrollingListener:(id)arg1 ;
-(id<MNPeopleSearchTableViewDataProvider>)tableViewDataProvider;
-(void)setDelegate:(id<MNPeopleSearchTableSelectionDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
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
-(id<MNPeopleSearchTableSelectionDelegate>)delegate;
@end

