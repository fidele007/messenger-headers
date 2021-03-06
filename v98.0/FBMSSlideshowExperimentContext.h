/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBMSSlideshowExperimentContext : FBExperimentContext {

	double _delayBetweenAnimations;
	double _delayBeforeFirstAnimation;
	double _animationDuration;

}

@property (assign,nonatomic) double delayBetweenAnimations;                 //@synthesize delayBetweenAnimations=_delayBetweenAnimations - In the implementation block
@property (assign,nonatomic) double delayBeforeFirstAnimation;              //@synthesize delayBeforeFirstAnimation=_delayBeforeFirstAnimation - In the implementation block
@property (assign,nonatomic) double animationDuration;                      //@synthesize animationDuration=_animationDuration - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(double)delayBeforeFirstAnimation;
-(double)delayBetweenAnimations;
-(void)setDelayBetweenAnimations:(double)arg1 ;
-(void)setDelayBeforeFirstAnimation:(double)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(double)animationDuration;
@end

