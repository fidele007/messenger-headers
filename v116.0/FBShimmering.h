/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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
-(void)setShimmering:(BOOL)arg1;
-(void)setShimmeringPauseDuration:(double)arg1;
-(void)setShimmeringSpeed:(double)arg1;
-(void)setShimmeringOpacity:(double)arg1;
-(void)setShimmeringAnimationOpacity:(double)arg1;
-(void)setShimmeringHighlightLength:(double)arg1;
-(void)setShimmeringEndFadeDuration:(double)arg1;
-(BOOL)isShimmering;
-(double)shimmeringSpeed;
-(double)shimmeringPauseDuration;
-(double)shimmeringAnimationOpacity;
-(double)shimmeringOpacity;
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

