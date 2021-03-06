/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNLocationPickerViewDelegate.h>
#import <Messenger/MNLocationPickerNearbyPlacesViewControllerDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Messenger/MNLocationPickerViewControlling.h>

@protocol MNLocationPickerViewControllerDelegate;
@class MNLocationPickerView, MNLocationPickerViewControllerConfig, MNLocationPickerNearbyPlacesViewController, CLLocation, UISearchDisplayController, UISearchBar, FBKeyboardObserver, FBNearbyPlace, NSTimer, NSString;

@interface MNLocationPickerViewController : FBContainerViewController <MNLocationPickerViewDelegate, MNLocationPickerNearbyPlacesViewControllerDelegate, UISearchDisplayDelegate, FBKeyboardObserverDelegate, UISearchBarDelegate, MNLocationPickerViewControlling> {

	MNLocationPickerView* _locationPickerView;
	MNLocationPickerViewControllerConfig* _config;
	MNLocationPickerNearbyPlacesViewController* _nearbyPlacesController;
	CLLocation* _currentLocation;
	UISearchDisplayController* _searchDisplayController;
	UISearchBar* _searchBar;
	FBKeyboardObserver* _keyboardObserver;
	FBNearbyPlace* _selectedPlace;
	unsigned long long _selectedLocationType;
	NSTimer* _enableSendingForInaccurateLocationTimer;
	/*^block*/id _dismissBlock;
	id<MNLocationPickerViewControllerDelegate> _locationPickerViewControllerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                                                                       //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MNLocationPickerViewControllerDelegate> locationPickerViewControllerDelegate;              //@synthesize locationPickerViewControllerDelegate=_locationPickerViewControllerDelegate - In the implementation block
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)setDismissBlock:(id)arg1 ;
-(long long)dismissButtonItem;
-(long long)dismissButtonPosition;
-(id)dismissBlock;
-(void)updateWithCurrentLocation:(id)arg1 ;
-(void)locationUpdateFailedWithError:(id)arg1 ;
-(id<MNLocationPickerViewControllerDelegate>)locationPickerViewControllerDelegate;
-(void)setLocationPickerViewControllerDelegate:(id<MNLocationPickerViewControllerDelegate>)arg1 ;
-(void)locationPickerView:(id)arg1 didChangeSelectedLocationType:(unsigned long long)arg2 ;
-(void)_updateSearchResultsTableViewContentInset;
-(void)_setupNavigationBarRightButton;
-(void)_enableSendingForInaccurateLocationTimerDidFire;
-(void)_loadDefaultState;
-(void)_updateSendButtonState;
-(void)_fetchNearbyPlacesIfPossible;
-(void)_setMapCenterCoordinateIfPossible;
-(void)_didTapSend;
-(void)_updateSendButtonStateForCurrentLocation;
-(void)_setSendButtonEnabled:(BOOL)arg1 ;
-(BOOL)_hasGoodEnoughCurrentLocation;
-(CLLocationCoordinate2D)_coordinateToSend;
-(void)_logLocationSend;
-(id)_currentLocationToSend;
-(void)_updateLocationPickerViewWithSelectedLocation;
-(id)_createLocationPickerViewModel;
-(void)_searchNearbyPlacesWithQuery:(id)arg1 ;
-(void)_setSelectedLocationType:(unsigned long long)arg1 selectedPlace:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFinishSearchingWithQuery:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFailSearchingWithError:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFetchPlacesWihtLocation:(id)arg2 ;
-(void)nearbyPlacesViewController:(id)arg1 didFailFetchingPlacesWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 config:(id)arg2 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
@end

