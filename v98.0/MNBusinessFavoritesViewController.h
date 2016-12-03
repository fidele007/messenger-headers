/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol FBIntentHandler;
@class FBUserSession, NSString, MNProfileImageViewController, FBImageDownloader, MNUserStore, MNBusinessCTAHandler, FBMUserInvalidator, FBMUser, MNBusinessFavoritesView, MNLoadingIndicator, MNPageFavoritesFetcher, FBMessengerExtensionFavoriteItemUpdater, NSMutableArray;

@interface MNBusinessFavoritesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	FBUserSession* _session;
	NSString* _pageID;
	MNProfileImageViewController* _profileImageViewController;
	id<FBIntentHandler> _intentHandler;
	FBImageDownloader* _imageDownloader;
	MNUserStore* _userStore;
	MNBusinessCTAHandler* _ctaHandler;
	FBMUserInvalidator* _userInvalidator;
	FBMUser* _page;
	MNBusinessFavoritesView* _favoritesView;
	MNLoadingIndicator* _loadingIndicator;
	MNPageFavoritesFetcher* _favoritesFetcher;
	FBMessengerExtensionFavoriteItemUpdater* _favoriteItemUpdater;
	NSMutableArray* _favoriteCellViewModels;
	BOOL _isFetchingPageUser;
	BOOL _hasUpdatedFavoriteItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_showLoadingIndicator;
-(id)initWithPageID:(id)arg1 session:(id)arg2 profileImageViewController:(id)arg3 intentHandler:(id)arg4 imageDownloader:(id)arg5 ctaHandler:(id)arg6 userStore:(id)arg7 userInvalidator:(id)arg8 ;
-(void)_fetchPageUser;
-(void)_fetchFavoritesItems;
-(void)_invalidatePageUser;
-(id)_cellViewModelAtIndex:(long long)arg1 ;
-(void)_removeItemAtIndexPath:(id)arg1 ;
-(void)_handleSuccessfulPageFavoritesFetchWithFavoriteItems:(id)arg1 ;
-(void)_handleFailedPageFavoritesFetchWithError:(id)arg1 ;
-(void)_updateFavoritesView;
-(void)_updatePageOnSuccessfulUserFetch:(id)arg1 ;
-(void)_handleFailedUserFetch;
-(id)_favoritesNullStateViewModelFromUser:(id)arg1 ;
-(void)_handleFailedFavoriteItemRemovalWithError:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_hideLoadingIndicator;
@end
