/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNSearchBarDelegate.h>
#import <Messenger/MNMainTabNullStateViewDelegate.h>
#import <Messenger/MNFloatingPeopleSearchViewControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/MNScrollViewScrollingListener.h>

@protocol MNPeopleViewDelegate;
@class FBListViewScrollManager, MNFloatingPeopleSearchViewController, MNLoadingView, MNPeopleViewNuxConfiguration, MNMainTabNullStateView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView, MNSearchToolbar, UITableView, UISegmentedControl, NSString;

@interface MNPeopleView : UIView <MNSearchBarDelegate, MNMainTabNullStateViewDelegate, MNFloatingPeopleSearchViewControllerDelegate, UISearchBarDelegate, MNScrollViewScrollingListener> {

	FBListViewScrollManager* _scrollManager;
	MNFloatingPeopleSearchViewController* _searchBarViewController;
	MNLoadingView* _loadingView;
	MNPeopleViewNuxConfiguration* _nuxConfig;
	MNMainTabNullStateView* _nullStateView;
	UISwipeGestureRecognizer* _swipeDimmingViewGesture;
	UITapGestureRecognizer* _tapDimmingViewGesture;
	UIView* _searchResultsDimmingView;
	unsigned long long _selectedSegmentType;
	MNSearchToolbar* _searchBar;
	BOOL _isSearching;
	BOOL _isSearchBarVisible;
	BOOL _enableSearch;
	BOOL _showsLoadingIndicator;
	UITableView* _messengerTableView;
	UITableView* _facebookTableView;
	UITableView* _searchResultsTableView;
	UISegmentedControl* _segmentedControl;
	id<MNPeopleViewDelegate> _delegate;
	unsigned long long _nuxState;
	UIView* _headerView;

}

@property (nonatomic,retain) UITableView * messengerTableView;                      //@synthesize messengerTableView=_messengerTableView - In the implementation block
@property (nonatomic,retain) UITableView * facebookTableView;                       //@synthesize facebookTableView=_facebookTableView - In the implementation block
@property (nonatomic,readonly) UITableView * searchResultsTableView;                //@synthesize searchResultsTableView=_searchResultsTableView - In the implementation block
@property (nonatomic,readonly) UISegmentedControl * segmentedControl;               //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (assign,nonatomic,__weak) id<MNPeopleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long nuxState;                           //@synthesize nuxState=_nuxState - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                            //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (nonatomic,readonly) BOOL showsPeopleNux; 
@property (assign,nonatomic) BOOL showsSearchBar; 
@property (nonatomic,retain) UIView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchBarActionButtonPressed:(id)arg1 ;
-(BOOL)showsSearchBar;
-(void)mainTabNullStateDidTapCallToAction:(id)arg1 ;
-(void)mainTabNullStateDidTapSubtitleLink:(id)arg1 withResult:(id)arg2 ;
-(void)_tappedDimmingView;
-(void)_swipedDimmingView;
-(CGRect)_searchBarFrame;
-(void)_layoutHeaderView;
-(void)_layoutTableViews;
-(void)_layoutNullState;
-(void)_updateTableViewContentInset;
-(void)_layoutLoadingIndicatorView;
-(CGRect)_searchResultsTableViewFrame;
-(void)setShowsLoadingIndicator:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowsSearchBar:(BOOL)arg1 dimBackground:(BOOL)arg2 ;
-(void)_updateScrollToTopForTableViews;
-(id)visibleTableView;
-(void)_scrollTableViewToTop:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateTableVisibilityForCurrentNuxState;
-(void)reloadSelectedTableView;
-(void)setShowsSearchBar:(BOOL)arg1 ;
-(void)resignSearchBarFocus;
-(BOOL)showsPeopleNux;
-(void)floatingPeopleSearchViewControllerDidSelectCancel:(id)arg1 ;
-(id)initWithNuxConfiguration:(id)arg1 searchBarConfiguration:(id)arg2 shouldEnableSearchInPeopleView:(BOOL)arg3 ;
-(unsigned long long)getSegmentTypeForTableView:(id)arg1 ;
-(void)setNuxState:(unsigned long long)arg1 ;
-(void)setSelectedSegment:(unsigned long long)arg1 animated:(BOOL)arg2 scrollToTop:(BOOL)arg3 ;
-(BOOL)_pullDownSearchBarEnabled;
-(UITableView *)messengerTableView;
-(void)setMessengerTableView:(UITableView *)arg1 ;
-(UITableView *)facebookTableView;
-(void)setFacebookTableView:(UITableView *)arg1 ;
-(unsigned long long)nuxState;
-(void)setDelegate:(id<MNPeopleViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id<MNPeopleViewDelegate>)delegate;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(UITableView *)searchResultsTableView;
-(UISegmentedControl *)segmentedControl;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
@end

