/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSString;

@interface MNCommerceDeliveryUpdateMapViewHelper : NSObject <MKMapViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_overlaysForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)_viewModelLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 ;
-(id)_annotationsForLocations:(id)arg1 ;
-(id)_blueLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)_lineWithLocations:(id)arg1 color:(id)arg2 alpha:(double)arg3 ;
-(id)_greyLineLocationsForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 ;
-(id)mapViewModelForOrigin:(id)arg1 destination:(id)arg2 intermediateLocations:(id)arg3 packageWasDelivered:(BOOL)arg4 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
@end
