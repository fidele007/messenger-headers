/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class FBCameraModifiedTouchTrackingButtonListenerAnnouncer;

@interface FBCameraModifiedTouchTrackingButton : UIButton {

	FBCameraModifiedTouchTrackingButtonListenerAnnouncer* _announcer;
	double _boundsExtensionForTracking;

}

@property (assign,nonatomic) double boundsExtensionForTracking;              //@synthesize boundsExtensionForTracking=_boundsExtensionForTracking - In the implementation block
-(void)setBoundsExtensionForTracking:(double)arg1 ;
-(void)addModifiedTouchTrackingButtonListener:(id)arg1 ;
-(void)removeModifiedTouchTrackingButtonListener:(id)arg1 ;
-(CGRect)_extendedBounds;
-(double)boundsExtensionForTracking;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

