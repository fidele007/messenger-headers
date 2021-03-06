/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/POPAnimationDelegate.h>

@class CAKeyframeAnimation, UIView, NSString;

@interface MNComposingLikeStickerAnimator : NSObject <POPAnimationDelegate> {

	CAKeyframeAnimation* _growingRotateAnimation;
	CAKeyframeAnimation* _growingScaleAnimation;
	double _growingStartTime;
	double _growingStartScale;
	double _growingScaleBase;
	float _releaseProgress;
	UIView* _rotatingView;
	UIView* _scalingView;

}

@property (assign,nonatomic) float releaseProgress;                 //@synthesize releaseProgress=_releaseProgress - In the implementation block
@property (nonatomic,retain) UIView * rotatingView;                 //@synthesize rotatingView=_rotatingView - In the implementation block
@property (nonatomic,retain) UIView * scalingView;                  //@synthesize scalingView=_scalingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_computeGrowingAnimationsWithMaxDuration:(double)arg1 startScale:(double)arg2 finalScale:(double)arg3 ;
-(double)_rotationForGrowingLikeStickerAfter:(double)arg1 ;
-(double)_scaleForGrowingLikeStickerAfter:(double)arg1 ;
-(float)releaseProgress;
-(void)setReleaseProgress:(float)arg1 ;
-(UIView *)scalingView;
-(UIView *)rotatingView;
-(id)initWithRotatingView:(id)arg1 scalingView:(id)arg2 ;
-(void)startGrowingAnimationWithMaxDuration:(double)arg1 startScale:(double)arg2 finalScale:(double)arg3 ;
-(void)startReleaseAnimationWithFinalScale:(double)arg1 overshootScaleFactor:(double)arg2 overshootMaxRotation:(double)arg3 ;
-(void)setRotatingView:(UIView *)arg1 ;
-(void)setScalingView:(UIView *)arg1 ;
@end

