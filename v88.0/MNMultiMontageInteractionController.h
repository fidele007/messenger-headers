/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(void)animateTransition:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(double)arg1 ;
-(void)setDirection:(BOOL)arg1 ;
-(BOOL)direction;
@end

