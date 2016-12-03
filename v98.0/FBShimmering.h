/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBShimmering <NSObject>
@property (assign,getter=isShimmering,nonatomic) BOOL shimmering; 
@property (assign,nonatomic) double shimmeringPauseDuration; 
@property (assign,nonatomic) double shimmeringAnimationOpacity; 
@property (assign,nonatomic) double shimmeringOpacity; 
@property (assign,nonatomic) double shimmeringSpeed; 
@property (assign,nonatomic) double shimmeringHighlightLength; 
@property (assign,setter=setShimmeringHighlightLength:,getter=shimmeringHighlightLength,nonatomic) double shimmeringHighlightWidth; 
@property (assign,nonatomic) long long shimmeringDirection; 
@property (assign,nonatomic) long long shimmeringGradientType; 
@property (assign,nonatomic) double shimmeringBeginFadeDuration; 
@property (assign,nonatomic) double shimmeringEndFadeDuration; 
@property (nonatomic,readonly) double shimmeringFadeTime; 
@property (assign,nonatomic) double shimmeringBeginTime; 
@required
-(void)setShimmeringPauseDuration:(double)arg1;
-(void)setShimmeringSpeed:(double)arg1;
-(void)setShimmeringOpacity:(double)arg1;
-(void)setShimmeringAnimationOpacity:(double)arg1;
-(void)setShimmeringHighlightLength:(double)arg1;
-(void)setShimmeringEndFadeDuration:(double)arg1;
-(void)setShimmering:(BOOL)arg1;
-(BOOL)isShimmering;
-(double)shimmeringPauseDuration;
-(double)shimmeringAnimationOpacity;
-(double)shimmeringOpacity;
-(double)shimmeringSpeed;
-(double)shimmeringHighlightLength;
-(long long)shimmeringDirection;
-(void)setShimmeringDirection:(long long)arg1;
-(long long)shimmeringGradientType;
-(void)setShimmeringGradientType:(long long)arg1;
-(double)shimmeringBeginFadeDuration;
-(void)setShimmeringBeginFadeDuration:(double)arg1;
-(double)shimmeringEndFadeDuration;
-(double)shimmeringFadeTime;
-(double)shimmeringBeginTime;
-(void)setShimmeringBeginTime:(double)arg1;

@end
