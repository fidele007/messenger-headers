/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIView, CAShapeLayer, UIImage, FBPartialHeadingInfo, FBUserSession;

@interface FB360HeadingIndicatorView : UIControl {

	UIImageView* _backgroundImageView;
	UIView* _compassWrapper;
	UIImageView* _compassImageView;
	CAShapeLayer* _fovLayer;
	CAShapeLayer* _poiMarker;
	UIImage* _compassFilledImageForPartialDegree;
	UIImage* _compassImageForPartialDegree;
	BOOL _dimmed;
	double _heading;
	double _fieldOfView;
	double _pointOfInterestHeading;
	FBPartialHeadingInfo* _partialHeadingInfo;
	FBUserSession* _session;
	UIEdgeInsets _hitTestSlop;

}

@property (assign,nonatomic) double heading;                                         //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double fieldOfView;                                     //@synthesize fieldOfView=_fieldOfView - In the implementation block
@property (assign,nonatomic) double pointOfInterestHeading;                          //@synthesize pointOfInterestHeading=_pointOfInterestHeading - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                            //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestSlop;                               //@synthesize hitTestSlop=_hitTestSlop - In the implementation block
@property (nonatomic,retain) FBPartialHeadingInfo * partialHeadingInfo;              //@synthesize partialHeadingInfo=_partialHeadingInfo - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                //@synthesize session=_session - In the implementation block
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(void)setPointOfInterestHeading:(double)arg1 animated:(BOOL)arg2 ;
-(void)setPartialHeadingInfo:(FBPartialHeadingInfo *)arg1 ;
-(void)_setAlphasForViewDimmed:(BOOL)arg1 ;
-(UIEdgeInsets)hitTestSlop;
-(void)_updateVisibleRegionShape;
-(void)_updatePointOfInterestMarkerShape;
-(void)_updateCompassForPartialAngles;
-(void)_calculateCompassImages;
-(FBPartialHeadingInfo *)partialHeadingInfo;
-(void)_updateCompassImage;
-(void)setPointOfInterestHeading:(double)arg1 ;
-(double)pointOfInterestHeading;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)heading;
-(void)setSelected:(BOOL)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)setHeading:(double)arg1 ;
-(void)_handleTap;
-(FBUserSession *)session;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setFieldOfView:(double)arg1 ;
-(double)fieldOfView;
@end

