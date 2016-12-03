/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CAAnimationDelegate.h>
#import <Messenger/FBPullToRefreshContentViewProtocol.h>

@class CAGradientLayer, CAShapeLayer, CALayer, UIActivityIndicatorView, NSString;

@interface FBPullToRefreshContentView : UIView <CAAnimationDelegate, FBPullToRefreshContentViewProtocol> {

	long long _uiState;
	CAGradientLayer* _gradientLayer;
	CAShapeLayer* _shapeLayerForGradient;
	CAShapeLayer* _shapeLayer;
	CALayer* _gradientAndShapeLayer;
	UIActivityIndicatorView* _spinner;
	BOOL _visible;
	BOOL _isInitialized;
	CGPoint _velocity;
	BOOL _isLoading;
	double _height;
	double _triggerThreshold;
	UIEdgeInsets _contentInsets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isVisible,nonatomic) BOOL visible;              //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double triggerThreshold;                    //@synthesize triggerThreshold=_triggerThreshold - In the implementation block
+(void)initialize;
-(id)initWithTintColor:(id)arg1 ;
-(void)startAnimatingSpinnerWithShouldBounce:(BOOL)arg1 shouldStartFast:(BOOL)arg2 ;
-(void)startAnimationZoomout;
-(void)restoreVisualState;
-(double)spinnerRotationInRads;
-(void)stopAnimatingSpinner;
-(void)stopAnimatingSpinnerScale;
-(id)animationForRefreshBounce;
-(void)setSpinnerRotationInRads:(double)arg1 ;
-(double)spinnerScale;
-(id)animationForRefreshCompletedZoomoutFromScale:(double)arg1 ;
-(void)ensureIsInitialized;
-(void)updateInitiatingStateWithScrolledAmount:(double)arg1 ;
-(void)scrollViewDidScroll:(double)arg1 withVelocity:(CGPoint)arg2 isUserInitiated:(BOOL)arg3 ;
-(void)setLoading:(BOOL)arg1 isUserInitiated:(BOOL)arg2 ;
-(double)triggerThreshold;
-(void)setTriggerThreshold:(double)arg1 ;
-(CATransform3D)spinnerTransform;
-(id)animationForRefreshRotationSlowdown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(double)height;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setHeight:(double)arg1 ;
-(void)setState:(long long)arg1 animated:(BOOL)arg2 ;
-(double)scrollSpeed;
@end
