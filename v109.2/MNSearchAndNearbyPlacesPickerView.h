/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, MNLoadingView, UITableView, UISearchBar;

@interface MNSearchAndNearbyPlacesPickerView : UIView {

	UIView* _nearbyPlacesView;
	MNLoadingView* _loadingView;
	UITableView* _searchResultsTableView;
	UISearchBar* _searchBar;

}

@property (nonatomic,retain) UITableView * searchResultsTableView;              //@synthesize searchResultsTableView=_searchResultsTableView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                           //@synthesize searchBar=_searchBar - In the implementation block
-(void)setSearchResultsTableView:(UITableView *)arg1 ;
-(id)initWithNearbyPlacesView:(id)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(UITableView *)searchResultsTableView;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)showSpinner;
-(void)hideSpinner;
@end

