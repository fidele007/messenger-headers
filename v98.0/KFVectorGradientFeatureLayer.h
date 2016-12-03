/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/KFVectorAnimationLayer.h>
#import <Messenger/KFVectorFeatureLayerInterface.h>

@class KFVectorFeature, NSArray, CAGradientLayer, KFVectorFeatureLayer, NSMutableArray;

@interface KFVectorGradientFeatureLayer : KFVectorAnimationLayer <KFVectorFeatureLayerInterface> {

	KFVectorFeature* _feature;
	NSArray* _keyFramePaths;
	NSArray* _keyTimes;
	CAGradientLayer* _gradientLayer;
	KFVectorFeatureLayer* _gradientMaskLayer;
	CGSize _canvasSize;
	NSMutableArray* _animations;

}
-(void)setAnimations:(id)arg1 scaleToCanvas:(CGPoint)arg2 scaleToLayer:(CGPoint)arg3 ;
-(void)setFeature:(id)arg1 canvasSize:(CGSize)arg2 ;
-(void)_addAnimations;
-(void)_addColorsAnimations;
-(void)_addRampStartPointAnimation;
-(void)_addRampEndPointAnimation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)resetAnimations;
@end

