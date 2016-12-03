/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBParticleAnimationValues : FBValueObject <NSCopying> {

	double _imageSizeToContainerSizeRatio;
	unsigned long long _minimumParticles;
	unsigned long long _particleAmountVariance;
	double _minimumTimeToAnimate;
	double _maximumTimeToAnimate;

}

@property (nonatomic,readonly) double imageSizeToContainerSizeRatio;                   //@synthesize imageSizeToContainerSizeRatio=_imageSizeToContainerSizeRatio - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumParticles;                    //@synthesize minimumParticles=_minimumParticles - In the implementation block
@property (nonatomic,readonly) unsigned long long particleAmountVariance;              //@synthesize particleAmountVariance=_particleAmountVariance - In the implementation block
@property (nonatomic,readonly) double minimumTimeToAnimate;                            //@synthesize minimumTimeToAnimate=_minimumTimeToAnimate - In the implementation block
@property (nonatomic,readonly) double maximumTimeToAnimate;                            //@synthesize maximumTimeToAnimate=_maximumTimeToAnimate - In the implementation block
-(id)initWithImageSizeToContainerSizeRatio:(double)arg1 minimumParticles:(unsigned long long)arg2 particleAmountVariance:(unsigned long long)arg3 minimumTimeToAnimate:(double)arg4 maximumTimeToAnimate:(double)arg5 ;
-(double)imageSizeToContainerSizeRatio;
-(unsigned long long)particleAmountVariance;
-(unsigned long long)minimumParticles;
-(double)minimumTimeToAnimate;
-(double)maximumTimeToAnimate;
@end

