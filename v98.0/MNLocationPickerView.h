/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNLocationPickerMapViewDelegate.h>

@protocol MNLocationPickerViewDelegate;
@class UISearchBar, UIView, MNLocationPickerMapView, MNLocationPickerSelectedLocationView, MNLoadingView, MNLocationPickerErrorView, NSString;

@interface MNLocationPickerView : UIView <MNLocationPickerMapViewDelegate> {

	UISearchBar* _searchBar;
	UIView* _searchSeparatorView;
	MNLocationPickerMapView* _mapView;
	UIView* _mapSeparatorView;
	MNLocationPickerSelectedLocationView* _selectedLocationView;
	UIView* _nearbyPlacesView;
	unsigned long long _viewState;
	MNLoadingView* _loadingView;
	MNLocationPickerErrorView* _errorView;
	id<MNLocationPickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D mapCenterCoordinate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mn_setBottomContentInset:(double)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)_showLoadingIndicator;
-(void)setUserTrackingEnabled:(BOOL)arg1 ;
-(void)_hideErrorView;
-(void)_showErrorView;
-(void)locationPickerMapView:(id)arg1 didChangeSelectedLocationType:(unsigned long long)arg2 ;
-(void)locationPickerMapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)initWithInitialUserLocation:(id)arg1 nearbyPlacesView:(id)arg2 searchBar:(id)arg3 shouldDisableCurrentLocationSending:(BOOL)arg4 ;
-(CLLocationCoordinate2D)mapCenterCoordinate;
-(void)setMapCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MNLocationPickerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNLocationPickerViewDelegate>)delegate;
-(void)_hideLoadingIndicator;
-(void)setSelectedLocation:(id)arg1 ;
-(id)userLocation;
@end
