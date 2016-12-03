/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNLocationPickerMapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MNLocationPickerMapViewDelegate;
@class MKMapView, UIButton, UIImageView, MNLocationPickerMapGestureRecognizer, CLLocation, NSString;

@interface MNLocationPickerMapView : UIView <MNLocationPickerMapGestureRecognizerDelegate, MKMapViewDelegate> {

	MKMapView* _mapView;
	BOOL _shouldDisableCurrentLocationSending;
	UIButton* _mapResetButton;
	BOOL _shouldHidePin;
	UIImageView* _pinImageView;
	CLLocationCoordinate2D _manuallySetCenterCoordinate;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	id<MNLocationPickerMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) CLLocation * userLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resetButtonTapped;
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(id)initWithInitialUserLocation:(id)arg1 shouldDisableCurrentLocationSending:(BOOL)arg2 ;
-(void)setUserTrackingEnabled:(BOOL)arg1 ;
-(void)setResetButtonHidden:(BOOL)arg1 ;
-(void)setLocationPickerPinHidden:(BOOL)arg1 ;
-(BOOL)_shouldShowResetButton;
-(void)_layoutPinImageView;
-(BOOL)_shouldSetRegionWhenSettingMapCenter;
-(void)_setUserTrackingModeFollow;
-(void)_setUserTrackingModeNone;
-(BOOL)_shouldAlwaysShowUserLocationOnMap;
-(void)setDelegate:(id<MNLocationPickerMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNLocationPickerMapViewDelegate>)delegate;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
@end

