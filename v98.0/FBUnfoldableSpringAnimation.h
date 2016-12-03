/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/POPSpringAnimation.h>

@class CALayer, NSString, NSNumber;

@interface FBUnfoldableSpringAnimation : POPSpringAnimation {

	id _previousVelocityUpdateToValue;
	double _previousVelocityUpdateTime;
	CALayer* _animatingLayer;
	NSString* _animatingKey;
	NSNumber* _velocityCacheKey;

}

@property (nonatomic,readonly) CALayer * animatingLayer;              //@synthesize animatingLayer=_animatingLayer - In the implementation block
@property (nonatomic,readonly) NSString * animatingKey;               //@synthesize animatingKey=_animatingKey - In the implementation block
+(id)unfoldableSpringAnimationForLayer:(id)arg1 key:(id)arg2 ;
-(CALayer *)animatingLayer;
-(NSString *)animatingKey;
-(void)_restoreVelocityMetadataFromCache;
-(void)_saveVelocityMetadataToCache;
-(void)setToValue:(id)arg1 ;
@end
