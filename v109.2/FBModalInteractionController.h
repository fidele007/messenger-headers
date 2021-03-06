/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol FBModalInteractionControllerDelegate, UIViewControllerContextTransitioning;
@class FBModalInteractiveAnimationController, NSString;

@interface FBModalInteractionController : NSObject <UIViewControllerInteractiveTransitioning> {

	id<FBModalInteractionControllerDelegate> _delegate;
	FBModalInteractiveAnimationController* _animationController;
	id<UIViewControllerContextTransitioning> _transitionContext;

}

@property (assign,nonatomic,__weak) id<FBModalInteractionControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBModalInteractiveAnimationController * animationController;               //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)cancelInteractiveTransitionWithCompletion:(/*^block*/id)arg1 ;
-(void)finishInteractiveTransitionWithAnimation:(id)arg1 ;
-(void)_resetContext;
-(void)setDelegate:(id<FBModalInteractionControllerDelegate>)arg1 ;
-(id<FBModalInteractionControllerDelegate>)delegate;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)setAnimationController:(FBModalInteractiveAnimationController *)arg1 ;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(FBModalInteractiveAnimationController *)animationController;
-(void)updateInteractiveTransition:(double)arg1 ;
@end

