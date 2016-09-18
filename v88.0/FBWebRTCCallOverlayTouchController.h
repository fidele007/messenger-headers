/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBWebRTCCallOverlayTouchControllerDelegate;
@class POPSpringAnimation, UITapGestureRecognizer, UIPanGestureRecognizer, UIView, NSString;

@interface FBWebRTCCallOverlayTouchController : NSObject <UIGestureRecognizerDelegate> {

	BOOL _positionValid;
	CGPoint _initialDragPosition;
	POPSpringAnimation* _moveToFinalPositionAnimation;
	unsigned long long _lastDragTime;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _dragRecognizer;
	BOOL _enabled;
	id<FBWebRTCCallOverlayTouchControllerDelegate> _delegate;
	UIView* _overlayView;
	CGRect _layoutBounds;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallOverlayTouchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) CGRect layoutBounds;                                                         //@synthesize layoutBounds=_layoutBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isDragging;
-(void)_viewTapped;
-(void)setLayoutBounds:(CGRect)arg1 ;
-(void)updateOverlayPositionFromOverlaySize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)_viewDragged:(id)arg1 ;
-(CGPoint)_adjustOverlayViewCenter:(CGPoint)arg1 fromOverlayViewSize:(CGSize)arg2 toOverlayViewSize:(CGSize)arg3 fromOverallBounds:(CGRect)arg4 toOverallBounds:(CGRect)arg5 ;
-(CGPoint)_defaultOverlayPosition;
-(void)_cancelMoveToFinalAnimation;
-(CGPoint)_adjustOverlayViewCenter:(CGPoint)arg1 overlayViewSize:(CGSize)arg2 toStayWithinBounds:(CGRect)arg3 ;
-(BOOL)enabled;
-(void)setDelegate:(id<FBWebRTCCallOverlayTouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBWebRTCCallOverlayTouchControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
-(CGRect)layoutBounds;
@end
