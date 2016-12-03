/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCSelfVideoOverlayViewDelegate;
@class UIView, UITapGestureRecognizer, UIPanGestureRecognizer, POPSpringAnimation, FBWebRTCSelfViewSize;

@interface FBWebRTCSelfVideoOverlayView : UIView {

	BOOL _ongoingInteraction;
	UIView* _selfView;
	CGPoint _initialDragPosition;
	UITapGestureRecognizer* _tapRecognizer;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UIPanGestureRecognizer* _moveSelfViewRecognizer;
	POPSpringAnimation* _moveToAnchorAnimation;
	id<FBWebRTCSelfVideoOverlayViewDelegate> _delegate;
	unsigned long long _selfViewAnchor;
	double _topLeftInset;
	FBWebRTCSelfViewSize* _selfViewSize;
	UIView* _selfVideoView;
	double _selfVideoAspectRatio;
	UIEdgeInsets _selfViewInsets;

}

@property (assign,nonatomic,__weak) id<FBWebRTCSelfVideoOverlayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long selfViewAnchor;                                     //@synthesize selfViewAnchor=_selfViewAnchor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selfViewInsets;                                           //@synthesize selfViewInsets=_selfViewInsets - In the implementation block
@property (assign,nonatomic) double topLeftInset;                                                   //@synthesize topLeftInset=_topLeftInset - In the implementation block
@property (nonatomic,copy) FBWebRTCSelfViewSize * selfViewSize;                                     //@synthesize selfViewSize=_selfViewSize - In the implementation block
@property (nonatomic,retain) UIView * selfVideoView;                                                //@synthesize selfVideoView=_selfVideoView - In the implementation block
@property (assign,nonatomic) double selfVideoAspectRatio;                                           //@synthesize selfVideoAspectRatio=_selfVideoAspectRatio - In the implementation block
-(UIView *)selfVideoView;
-(void)setSelfVideoView:(UIView *)arg1 ;
-(void)_moveSelfView:(id)arg1 ;
-(void)_tapSelfView;
-(void)_doubleTapSelfView;
-(void)_cancelExistingAnimation;
-(CGPoint)_positionOfAnchor:(unsigned long long)arg1 ;
-(void)_notifyDelegateOfEvent:(long long)arg1 ;
-(unsigned long long)_closestAnchorToPoint:(CGPoint)arg1 ;
-(void)setSelfViewAnchor:(unsigned long long)arg1 ;
-(void)setSelfViewInsets:(UIEdgeInsets)arg1 ;
-(void)setSelfViewSize:(FBWebRTCSelfViewSize *)arg1 ;
-(void)setSelfVideoAspectRatio:(double)arg1 ;
-(unsigned long long)selfViewAnchor;
-(UIEdgeInsets)selfViewInsets;
-(double)topLeftInset;
-(void)setTopLeftInset:(double)arg1 ;
-(FBWebRTCSelfViewSize *)selfViewSize;
-(double)selfVideoAspectRatio;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebRTCSelfVideoOverlayViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBWebRTCSelfVideoOverlayViewDelegate>)delegate;
@end

