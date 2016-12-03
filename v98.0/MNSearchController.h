/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <Messenger/MNScrollViewScrollingListener.h>

@protocol MNSearchControllerDelegateMNSearchResultUpdating;
@class UISearchController, UIView, UISearchBar, UIViewController, UITableView, NSString;

@interface MNSearchController : NSObject <UISearchControllerDelegate, UISearchResultsUpdating, MNScrollViewScrollingListener> {

	UISearchController* _searchController;
	UIView* _statusBarBackgroundView;
	BOOL _searchControllerDidDismiss;
	BOOL _shouldDisplayNullState;
	id<MNSearchControllerDelegate><MNSearchResultUpdating> _delegate;
	UISearchBar* _searchBar;
	UIViewController* _searchResultsController;

}

@property (assign,nonatomic,__weak) id<MNSearchControllerDelegate><MNSearchResultUpdating> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UISearchBar * searchBar;                                                           //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) UITableView * resultsTableView; 
@property (nonatomic,readonly) BOOL shouldDisplayNullState;                                                       //@synthesize shouldDisplayNullState=_shouldDisplayNullState - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,readonly) UIViewController * searchResultsController;                                        //@synthesize searchResultsController=_searchResultsController - In the implementation block
@property (assign,nonatomic) BOOL hidesNavigationBarDuringPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureDisplaysSearchBarInNavigationBar;
-(void)configureTableViewHeader:(id)arg1 ;
-(UITableView *)resultsTableView;
-(void)_setUpSearchBarWithPlaceholderString:(id)arg1 ;
-(void)_setFontForSearchBar;
-(id)initWithSearchResultsController:(id)arg1 localizedPlaceholderString:(id)arg2 shouldDisplayNullState:(BOOL)arg3 ;
-(BOOL)shouldDisplayNullState;
-(void)setDelegate:(id<MNSearchControllerDelegate><MNSearchResultUpdating>)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<MNSearchControllerDelegate><MNSearchResultUpdating>)delegate;
-(BOOL)isActive;
-(UISearchBar *)searchBar;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)hidesNavigationBarDuringPresentation;
-(UIViewController *)searchResultsController;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setHidesNavigationBarDuringPresentation:(BOOL)arg1 ;
@end

