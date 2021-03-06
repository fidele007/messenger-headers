/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MKMapViewDelegate;
@class MNCommerceDeliveryUpdateMapViewModel, MKMapView;

@interface MNCommerceDeliveryUpdateMapView : UIView {

	MNCommerceDeliveryUpdateMapViewModel* _viewModel;
	MKMapView* _mapView;
	id<MKMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setUpMap;
-(void)setDelegate:(id<MKMapViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MKMapViewDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end

