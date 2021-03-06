/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class NSString;

@interface MNMultiMontageInteractionController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	double _progress;
	BOOL _direction;

}

@property (assign,nonatomic) BOOL direction;                            //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(CGAffineTransform)_transformForToViewControllerViewWithProgress:(double)arg1 transitionContext:(id)arg2 ;
-(void)_applyRoundedCornersToView:(id)arg1 ;
-(CGAffineTransform)_transformForFromViewControllerViewWithProgress:(double)arg1 transitionContext:(id)arg2 ;
-(void)_removeRoundedCornersFromView:(id)arg1 ;
-(void)_completeTransition;
-(id)init;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)setDirection:(BOOL)arg1 ;
-(BOOL)direction;
@end

