/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/KFVectorAnimationLayer.h>
#import <Messenger/KFVectorFeatureLayerInterface.h>

@class NSArray, CAKeyframeAnimation;

@interface KFVectorFeatureLayer : KFVectorAnimationLayer <KFVectorFeatureLayerInterface> {

	NSArray* _keyFramePaths;
	NSArray* _keyTimes;
	NSArray* _timingFunctions;
	CAKeyframeAnimation* _pathAnimation;

}
-(void)setFeature:(id)arg1 canvasSize:(CGSize)arg2 ;
-(void)_addAnimations;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)resetAnimations;
@end
