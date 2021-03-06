/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBModalAnimatedTransitioning.h>

@protocol FBModalAnimatedTransitioning <NSObject>
@optional
-(void)animationEnded:(BOOL)arg1;

@required
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3;
-(double)animationDuration;

@end


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
-(id)initForPresentation:(BOOL)arg1 withAnimation:(id)arg2 ;
-(void)animateTransition:(id)arg1 withAnimationGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<FBModalAnimation>)animation;
-(double)animationDuration;
-(BOOL)isPresenting;
@end

