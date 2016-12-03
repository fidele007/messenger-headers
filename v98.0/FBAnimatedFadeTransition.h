/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnimatedTransition.h>

@class NSMapTable;

@interface FBAnimatedFadeTransition : FBAnimatedTransition {

	NSMapTable* _transitionContextToAnimationGroupMap;
	unsigned long long _navigationDirection;

}
-(void)presentWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(/*^block*/id)_completionBlockForPresentationAnimationWithTransitionType:(unsigned long long)arg1 transitionContext:(id)arg2 ;
-(void)dismissWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(void)cancelWithTransitionContext:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFadeDirection:(unsigned long long)arg1 ;
-(BOOL)allowsInteraction;
-(id)interactiveGestureRecognizer;
@end

