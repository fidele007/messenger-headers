/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAnimatedTransitionDelegate <NSObject>
@optional
-(void)animatedTransition:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 willBeginInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3;
-(void)animatedTransition:(id)arg1 didEndWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 completedSuccessfully:(BOOL)arg4;
-(void)animatedTransition:(id)arg1 didEndInteractivelyWithTransitionType:(unsigned long long)arg2 transitionContext:(id)arg3 shouldCommit:(BOOL)arg4;

@required
-(id)transitionContextForTransitionType:(unsigned long long)arg1;
-(BOOL)animatedTransition:(id)arg1 shouldBeginForTransitionType:(unsigned long long)arg2 point:(CGPoint)arg3;

@end

