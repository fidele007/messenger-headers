/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalAnimatedTransitioning.h>

@protocol FBModalAnimation;
@class NSString;

@interface FBModalAnimatedTransitioning : NSObject <FBModalAnimatedTransitioning> {

	id<FBModalAnimation> _animation;
	BOOL _isPresenting;

}

@property (nonatomic,readonly) BOOL isPresenting;                           //@synthesize isPresenting=_isPresenting - In the implementation block
@property (nonatomic,readonly) id<FBModalAnimation> animation;              //@synthesize animation=_animation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initForPresentation:(BOOL)arg1 withAnimation:(id)arg2 ;
-(id<FBModalAnimation>)animation;
-(double)animationDuration;
-(BOOL)isPresenting;
@end
