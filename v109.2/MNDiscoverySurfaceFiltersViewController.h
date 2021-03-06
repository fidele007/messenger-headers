/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNDiscoverySurfaceFiltersViewDelegate.h>

@class MNDiscoverySurfaceFiltersView, NSMutableArray, NSArray, NSString;

@interface MNDiscoverySurfaceFiltersViewController : UIViewController <MNDiscoverySurfaceFiltersViewDelegate> {

	MNDiscoverySurfaceFiltersView* _filtersView;
	NSMutableArray* _selectedFilterIDs;
	NSArray* _filters;

}

@property (nonatomic,copy) NSArray * filters;                       //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)filtersView:(id)arg1 didSelectFilterWithFBID:(id)arg2 ;
-(void)_updateFiltersViewWithFilters:(id)arg1 selectedFilterIDs:(id)arg2 ;
-(void)_toggleSelectionForFilterWithFBID:(id)arg1 ;
-(void)loadView;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
@end

