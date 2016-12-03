/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer, POPBasicAnimation, UIColor;

@interface FBWebRTCProgressRingView : UIView {

	CAShapeLayer* _backCircle;
	CAShapeLayer* _frontCircle;
	POPBasicAnimation* _progressAnimation;
	double _progress;
	double _strokeWidth;
	UIColor* _backColor;
	UIColor* _color;

}

@property (assign,nonatomic) double progress;                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double strokeWidth;               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * backColor;              //@synthesize backColor=_backColor - In the implementation block
@property (nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
-(void)setProgress:(double)arg1 animationDuration:(double)arg2 ;
-(id)progressAnimation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setProgress:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_updatePath;
-(double)progress;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
-(UIColor *)backColor;
-(void)setBackColor:(UIColor *)arg1 ;
@end
