/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Messenger/MNLocationPickerMapGestureRecognizerDelegate.h>

@protocol MNRideServiceMapViewDelegate;
@class MKMapView, UIButton, UIImageView, CLLocation, MNRideServiceMapLocationAnnotation, MNLocationPickerMapGestureRecognizer, NSString;

@interface MNRideServiceMapView : UIView <MKMapViewDelegate, MNLocationPickerMapGestureRecognizerDelegate> {

	MKMapView* _mapView;
	UIButton* _mapResetButton;
	UIImageView* _sourcePinImage;
	CLLocation* _sourcePinLocation;
	CLLocation* _destinationPinLocation;
	CLLocation* _driverLocation;
	MNRideServiceMapLocationAnnotation* _sourcePinAnnotation;
	MNRideServiceMapLocationAnnotation* _destinationPinAnnotation;
	MNRideServiceMapLocationAnnotation* _driverAnnotation;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	BOOL _isLocationPickerModeOn;
	BOOL _initialUserLocationFetchComplete;
	BOOL _didFinishInitialAnimation;
	id<MNRideServiceMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRideServiceMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * userLocation; 
@property (nonatomic,readonly) CLLocation * centerLocation; 
@property (nonatomic,readonly) BOOL didFinishInitialAnimation;                              //@synthesize didFinishInitialAnimation=_didFinishInitialAnimation - In the implementation block
@property (nonatomic,readonly) BOOL isLocationPickerModeOn;                                 //@synthesize isLocationPickerModeOn=_isLocationPickerModeOn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsLocationPickerModeOn:(BOOL)arg1 ;
-(void)animateDriverLocationChange:(id)arg1 ;
-(void)setDriverLocation:(id)arg1 ;
-(void)centerMapOnUserAndDriver;
-(void)setSourcePinLocation:(id)arg1 ;
-(void)setDestinationPinLocation:(id)arg1 ;
-(void)_resetButtonTapped;
-(CLLocation *)centerLocation;
-(void)_removeAllAnnotations;
-(void)_addAllAnnotations;
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(void)setUserTrackingModeEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)centerMapOnPins;
-(void)updateLocationPickerMode;
-(BOOL)didFinishInitialAnimation;
-(BOOL)isLocationPickerModeOn;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNRideServiceMapViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRideServiceMapViewDelegate>)delegate;
-(CLLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
@end

