/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Messenger/FBNativeArticleTrackerPerfSectionViewDelegate.h>

@class NSMutableSet, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface FBNativeArticleTrackerPerfViewController : UITableViewController <FBNativeArticleTrackerPerfSectionViewDelegate> {

	NSMutableSet* _expandedSections;
	NSMutableOrderedSet* _sectionToTrackerID;
	NSMutableDictionary* _trackerIDToTrackerState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(id)arg1 forTracker:(id)arg2 ;
-(void)_setState:(id)arg1 forTracker:(id)arg2 ;
-(void)headerViewDidRequestExpansion:(id)arg1 ;
-(void)headerViewDidRequestCollapse:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
@end

