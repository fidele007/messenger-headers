/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNativeArticleTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/POPAnimationDelegate.h>

@protocol FBNativeArticleTransitionDriverDelegate;
@class FBNativeArticleInteractionRegistry, FBLinkedDictionary, FBRichStoryBlock, UIView, UIPanGestureRecognizer, UITapGestureRecognizer, UIPinchGestureRecognizer, FBTransitionFrameSetter, NSString;

@interface FBNativeArticleTransitionDriver : NSObject <FBNativeArticleTransitionDelegate, UIGestureRecognizerDelegate, POPAnimationDelegate> {

	FBNativeArticleInteractionRegistry* _interactionRegistry;
	FBLinkedDictionary* _ongoingTransitions;
	BOOL _trackingTouches;
	BOOL _trackBlockCenter;
	BOOL _trackingHasSettled;
	FBRichStoryBlock* _currentTrackingBlock;
	CGPoint _currentTrackingPoint;
	CGRect _originTrackingFrame;
	CGRect _destinationTrackingFrame;
	UIView* _transitionCoordinateView;
	UIView* _gestureView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	id<FBNativeArticleTransitionDriverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNativeArticleTransitionDriverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isDrivingTransition; 
@property (nonatomic,readonly) UIView * transitionCoordinateView;                                      //@synthesize transitionCoordinateView=_transitionCoordinateView - In the implementation block
@property (nonatomic,readonly) FBTransitionFrameSetter * transitionLayout; 
@property (nonatomic,readonly) BOOL isTrackingTouches; 
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                      //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionDriverWithInteractionRegistry:(id)arg1 gestureView:(id)arg2 transitionCoordinateView:(id)arg3 ;
+(double)_transitionScaleDeltaForOriginFrame:(CGRect)arg1 destinationFrame:(CGRect)arg2 ;
+(double)_transitionVelocityForPinchVelocity:(double)arg1 originFrame:(CGRect)arg2 destinationFrame:(CGRect)arg3 ;
+(BOOL)_shouldCommitPinchWithVelocity:(double)arg1 pinchScale:(double)arg2 transitionScaleDelta:(double)arg3 transitionVelocity:(double)arg4 ;
-(void)pop_animationDidApply:(id)arg1 ;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)stopTrackingTouches;
-(UIView *)transitionCoordinateView;
-(BOOL)isDrivingTransition;
-(id)eligiblePresentationAttributesFromAttributes:(id)arg1 forTransitioningStoryBlock:(id)arg2 ;
-(void)performTransitionToPresentationAttributes:(id)arg1 onBlock:(id)arg2 animation:(SCD_Struct_FB70)arg3 ;
-(id)initWithInteractionRegistry:(id)arg1 gestureView:(id)arg2 transitionCoordinateView:(id)arg3 ;
-(void)_handlePanFromGestureRecognizer:(id)arg1 ;
-(void)_handleTapFromGestureRecognizer:(id)arg1 ;
-(void)_handlePinchFromGestureRecognizer:(id)arg1 ;
-(id)_eligibleTransitionPresentationAttributesForGestureInDirection:(long long)arg1 onBlock:(id)arg2 ;
-(id)_topmostTransition;
-(void)_beginTransitionToPresentationAttributes:(id)arg1 forStoryBlock:(id)arg2 withGestureRecognizer:(id)arg3 gestureDirection:(long long)arg4 animated:(BOOL)arg5 ;
-(void)_finishTransitionForStoryBlock:(id)arg1 withTrackingVelocity:(CGPoint)arg2 animation:(SCD_Struct_FB70)arg3 ;
-(void)_beginTransitionForStoryBlock:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(void)_finishTransitionForStoryBlock:(id)arg1 withTrackingVelocity:(CGPoint)arg2 transitionVelocity:(double)arg3 ;
-(void)_updatePinchTransitionWithGestureRecognizer:(id)arg1 ;
-(id)_transitionForStoryBlock:(id)arg1 ;
-(CGPoint)_locationFromGestureRecognizer:(id)arg1 ;
-(void)_endTransitionForStoryBlock:(id)arg1 ;
-(SCD_Struct_FB70)_transitionAnimationConfigurationForStoryBlock:(id)arg1 withVelocity:(double)arg2 ;
-(void)_setCurrentTrackingPoint:(CGPoint)arg1 ;
-(void)_animateTrackingPointToPoint:(CGPoint)arg1 velocity:(CGPoint)arg2 forTransition:(id)arg3 ;
-(void)_didFinishTransitionAnimationForBlock:(id)arg1 ;
-(void)_settleTrackingIfNecessary;
-(void)transition:(id)arg1 didUpdateWithProgress:(double)arg2 ;
-(void)transitionDidBeginToSettle:(id)arg1 ;
-(void)setDelegate:(id<FBNativeArticleTransitionDriverDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNativeArticleTransitionDriverDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(FBTransitionFrameSetter *)transitionLayout;
-(BOOL)isTrackingTouches;
@end

