/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning, MNComposerDragAnimatorDelegate;
@class UIView, NSString;

@interface MNComposerDragAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _activeTransitionContext;
	CGPoint _dragStartLocation;
	UIView* _dragStartView;
	BOOL _interactiveTransition;
	id<MNComposerDragAnimatorDelegate> _delegate;
	UIView* _keyboardAccessoryView;

}

@property (assign,nonatomic,__weak) id<MNComposerDragAnimatorDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isInteractiveTransition,nonatomic) BOOL interactiveTransition;              //@synthesize interactiveTransition=_interactiveTransition - In the implementation block
@property (nonatomic,retain) UIView * keyboardAccessoryView;                                         //@synthesize keyboardAccessoryView=_keyboardAccessoryView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)keyboardAccessoryViewFrameInContainerView;
-(id)initWithDragStartLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(double)progressWithGestureRecognizer:(id)arg1 ;
-(void)transitionKeyboardAccessoryView;
-(UIView *)keyboardAccessoryView;
-(void)setKeyboardAccessoryView:(UIView *)arg1 ;
-(void)didBeginAnimation;
-(void)willCompleteAnimation:(BOOL)arg1 ;
-(void)didCompleteAnimation:(BOOL)arg1 ;
-(CGPoint)dragStartLocationInView:(id)arg1 ;
-(void)setDelegate:(id<MNComposerDragAnimatorDelegate>)arg1 ;
-(id<MNComposerDragAnimatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setInteractiveTransition:(BOOL)arg1 ;
-(BOOL)isInteractiveTransition;
-(void)willBeginAnimation;
@end

