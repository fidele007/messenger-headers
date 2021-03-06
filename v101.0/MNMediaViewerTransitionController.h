/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>
#import <Messenger/FBStateMachineDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol MNMediaViewerTransitionContextProviding, MNMediaViewerTransitionControllerDelegate;
@class _MNMediaViewerTransitionControllerAnimationContext, FBStateMachine, MNMediaViewerTransitionListenerAnnouncer, NSString;

@interface MNMediaViewerTransitionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, FBStateMachineDelegate, UIViewControllerTransitioningDelegate> {

	BOOL _isPresenting;
	_MNMediaViewerTransitionControllerAnimationContext* _animationContext;
	CGPoint _interactiveStartingPosition;
	FBStateMachine* _transitionStateMachine;
	MNMediaViewerTransitionListenerAnnouncer* _announcer;
	id<MNMediaViewerTransitionContextProviding> _closedTransitionContextProvider;
	id<MNMediaViewerTransitionContextProviding> _openedTransitionContextProvider;
	id<MNMediaViewerTransitionControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaViewerTransitionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long transitionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(id)initWithClosedTransitionContextProvider:(id)arg1 openedTransitionContextProvider:(id)arg2 ;
-(void)addTransitionListener:(id)arg1 ;
-(void)handlePanForInteractiveDismissal:(id)arg1 ;
-(void)_beginInteractiveTransition;
-(void)_updateInteractiveTransitionWithTranslation:(CGPoint)arg1 ;
-(void)_endInteractiveTransitionWithTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)_setupAnimationWithTransitionContext:(id)arg1 ;
-(void)_executingOpeningAnimationWithVelocity:(CGPoint)arg1 ;
-(void)_executingClosingAnimationWithVelocity:(CGPoint)arg1 ;
-(void)_animateAnimationViewToFrame:(CGRect)arg1 velocity:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(void)_didFinishOpeningAnimation;
-(void)_cleanUpAnimation;
-(void)_didFinishClosingAnimation;
-(void)stateMachine:(id)arg1 didTransitionFromState:(id)arg2 toState:(id)arg3 ;
-(void)removeTransitionListener:(id)arg1 ;
-(void)setDelegate:(id<MNMediaViewerTransitionControllerDelegate>)arg1 ;
-(id<MNMediaViewerTransitionControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(long long)transitionState;
@end

