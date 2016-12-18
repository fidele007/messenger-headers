/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBNAPinnedOverlayGestureControllerDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, UIView, NSString;

@interface FBNAPinnedOverlayGestureController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _enabled;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	id<FBNAPinnedOverlayGestureControllerDelegate> _delegate;
	UIView* _overlayView;

}

@property (nonatomic,readonly) UITapGestureRecognizer * tapGestureRecognizer;                             //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                             //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<FBNAPinnedOverlayGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOverlayView:(id)arg1 delegate:(id)arg2 ;
-(void)setDelegate:(id<FBNAPinnedOverlayGestureControllerDelegate>)arg1 ;
-(id<FBNAPinnedOverlayGestureControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(UIView *)overlayView;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
@end
