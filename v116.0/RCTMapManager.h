/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTViewManager.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSString;

@interface RCTMapManager : RCTViewManager <MKMapViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propConfig_onChange;
+(id)propConfig_showsUserLocation;
+(id)propConfig_showsPointsOfInterest;
+(id)propConfig_showsCompass;
+(id)propConfig_showsAnnotationCallouts;
+(id)propConfig_followUserLocation;
+(id)propConfig_zoomEnabled;
+(id)propConfig_rotateEnabled;
+(id)propConfig_pitchEnabled;
+(id)propConfig_scrollEnabled;
+(id)propConfig_maxDelta;
+(id)propConfig_minDelta;
+(id)propConfig_legalLabelInsets;
+(id)propConfig_mapType;
+(id)propConfig_annotations;
+(id)propConfig_overlays;
+(id)propConfig_onAnnotationDragStateChange;
+(id)propConfig_onAnnotationFocus;
+(id)propConfig_onAnnotationBlur;
+(id)propConfig_onPress;
+(id)propConfig_region;
+(id)moduleName;
+(void)load;
-(void)_regionChanged:(id)arg1 ;
-(void)_onTick:(id)arg1 ;
-(void)_emitRegionChangeEvent:(id)arg1 continuous:(BOOL)arg2 ;
-(void)set_region:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(id)view;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
@end

