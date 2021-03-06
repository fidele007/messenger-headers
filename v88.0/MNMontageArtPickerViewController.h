/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/MNMontageArtPickerHeaderTableViewCellDelegate.h>
#import <Messenger/MNMontageArtPickerCarouselTableViewCellDelegate.h>
#import <Messenger/MNMontageArtPickerSectionViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMontageArtPickerViewControllerDelegate;
@class FBUserSession, MNMontageArtPickerDataProvider, NSArray, MNMontageArtPickerSearchResultsViewModel, NSString, MNMontageArtPickerStateListenerAnnouncer, UISearchBar, FBTimeThrottler, FBCache, FBDirectionalPanGestureRecognizer;

@interface MNMontageArtPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, MNMontageArtPickerHeaderTableViewCellDelegate, MNMontageArtPickerCarouselTableViewCellDelegate, MNMontageArtPickerSectionViewControllerDelegate, FBClassProvidable> {

	FBUserSession* _session;
	MNMontageArtPickerDataProvider* _dataProvider;
	NSArray* _models;
	MNMontageArtPickerSearchResultsViewModel* _searchResultsViewModel;
	id<FBProvider> _artPickerHeaderCellProvider;
	id<FBProvider> _artPickerCarouselCellProvider;
	id<FBProvider> _artPickerSectionViewControllerProvider;
	NSString* _selectedCompositionId;
	NSString* _focusedArtPickerSectionId;
	MNMontageArtPickerStateListenerAnnouncer* _artPickerStateAnnouncer;
	UISearchBar* _searchBar;
	FBTimeThrottler* _searchThrottler;
	FBCache* _viewStateCache;
	FBDirectionalPanGestureRecognizer* _panGestureRecognizer;
	id<MNMontageArtPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageArtPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_cancelSearch;
-(void)_performSearch;
-(void)_setupSearch;
-(id)artPickerView;
-(void)addArtPickerStateListener:(id)arg1 ;
-(void)setFocusedArtPickerSectionId:(id)arg1 withComposition:(id)arg2 ;
-(void)resetSelectedCompositionId;
-(void)didTapSeeAllInCell:(id)arg1 ;
-(void)montageArtPickerSectionViewController:(id)arg1 didSelectStickerItem:(id)arg2 ;
-(void)montageArtPickerSectionViewController:(id)arg1 didSelectComposition:(id)arg2 ;
-(id)initWithSession:(id)arg1 dataProvider:(id)arg2 artPickerHeaderCellProvider:(id)arg3 artPickerCarouselCellProvider:(id)arg4 artPickerSectionViewControllerProvider:(id)arg5 ;
-(void)_setupTableView;
-(void)_setArtPickerState:(id)arg1 ;
-(void)_fetchDataIfNecessary;
-(CGPoint)_contentOffsetForState:(id)arg1 ;
-(void)_updateModels:(id)arg1 ;
-(void)_collapseToFocusedSectionIfNeeded;
-(void)_fetchArtItemsForComposition:(id)arg1 ;
-(void)_setSelectedCompositionId:(id)arg1 ;
-(id)_modelsToDisplay;
-(id)_modelAtSection:(long long)arg1 ;
-(id)_viewStateForSection:(id)arg1 ;
-(void)_updateVisibilityOnCell:(id)arg1 forState:(id)arg2 isFocused:(BOOL)arg3 ;
-(BOOL)_isSearchActive;
-(void)_collapseArtPickerToCell:(id)arg1 ;
-(void)_expandArtPickerIfNeeded;
-(void)_updateModel:(id)arg1 withModel:(id)arg2 ;
-(void)_resignSearchBar;
-(void)_didPan;
-(void)_resetViewStateCache;
-(void)_fetchData;
-(void)_updateModelsWithViewModels:(id)arg1 ;
-(void)_updateSearchModelsWithViewModels:(id)arg1 searchTerm:(id)arg2 ;
-(void)_updateViewsForState:(id)arg1 ;
-(void)_fadeNonFocusedCellsForState:(id)arg1 ;
-(double)_contentOffsetYForFocusedSectionInExpandedState;
-(double)_contentOffsetYForFocusedSectionInCollapsedState;
-(double)_contentOffsetYForFocusedSectionInDismissedState;
-(CGPoint)_collapsedOffsetForFocusedSection;
-(id)_indexPathForFocusedSection;
-(void)_transitionToCollapsedState;
-(void)_didFetchArtItems:(id)arg1 ;
-(void)_animateToExpandedState;
-(void)carouselCell:(id)arg1 didSelectStickerItem:(id)arg2 ;
-(void)carouselCell:(id)arg1 didSelectComposition:(id)arg2 ;
-(void)carouselCell:(id)arg1 didRequestNextPageForModel:(id)arg2 andViewState:(id)arg3 ;
-(void)setDelegate:(id<MNMontageArtPickerViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNMontageArtPickerViewControllerDelegate>)delegate;
-(void)reset;
-(void)loadView;
-(id)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)clearContent;
@end

