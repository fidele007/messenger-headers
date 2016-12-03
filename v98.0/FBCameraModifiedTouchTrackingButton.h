/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

