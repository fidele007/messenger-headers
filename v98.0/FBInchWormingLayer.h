/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class FBSmartStrokeLayer, FBTrackLayer, UIBezierPath, UIColor;

@interface FBInchWormingLayer : CALayer {

	FBSmartStrokeLayer* _movingLayer;
	FBTrackLayer* _trackLayer;
	BOOL _animating;
	UIBezierPath* _path;
	double _wormWidth;
	UIColor* _wormColor;

}

@property (nonatomic,retain) UIBezierPath * path;                            //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) double wormWidth;                               //@synthesize wormWidth=_wormWidth - In the implementation block
@property (nonatomic,retain) UIColor * wormColor;                            //@synthesize wormColor=_wormColor - In the implementation block
@property (assign,nonatomic) double trackBorderWidth; 
@property (nonatomic,retain) UIColor * trackColor; 
@property (nonatomic,retain) UIColor * trackBorderColor; 
@property (nonatomic,retain) UIColor * trackShadowColor; 
@property (assign,nonatomic) double trackShadowBlurRadius; 
@property (assign,getter=isAnimating,nonatomic) BOOL animating;              //@synthesize animating=_animating - In the implementation block
-(void)setTrackColor:(UIColor *)arg1 ;
-(void)setTrackBorderColor:(UIColor *)arg1 ;
-(void)setTrackBorderWidth:(double)arg1 ;
-(void)setTrackShadowColor:(UIColor *)arg1 ;
-(void)setTrackShadowBlurRadius:(double)arg1 ;
-(UIColor *)trackColor;
-(UIColor *)trackBorderColor;
-(double)trackBorderWidth;
-(UIColor *)trackShadowColor;
-(double)trackShadowBlurRadius;
-(void)setWormWidth:(double)arg1 ;
-(void)setWormColor:(UIColor *)arg1 ;
-(double)wormWidth;
-(void)stopAnimating:(/*^block*/id)arg1 ;
-(UIColor *)wormColor;
-(id)_continuousMotionAnimationForProperty:(id)arg1 ;
-(void)_continuouslyInchPropertyForward:(id)arg1 repeatDelay:(double)arg2 ;
-(void)_startInching;
-(void)rev;
-(id)init;
-(UIBezierPath *)path;
-(BOOL)isAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)layoutSublayers;
@end

