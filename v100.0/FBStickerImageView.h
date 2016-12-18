/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <Messenger/CAAnimationDelegate.h>

@class NSString;

@interface FBStickerImageView : UIImageView <CAAnimationDelegate> {

	unsigned long long _finiteAnimationState;
	BOOL _hasFiniteAnimation;
	unsigned long long _finiteAnimationLastFrameIndex;

}

@property (assign,nonatomic) BOOL hasFiniteAnimation;                                       //@synthesize hasFiniteAnimation=_hasFiniteAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long finiteAnimationLastFrameIndex;              //@synthesize finiteAnimationLastFrameIndex=_finiteAnimationLastFrameIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHasFiniteAnimation:(BOOL)arg1 ;
-(void)setFiniteAnimationLastFrameIndex:(unsigned long long)arg1 ;
-(void)_startFiniteAnimatePhaseOne;
-(id)_animationWithImages:(id)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3 ;
-(void)_startFiniteAnimatePhaseTwo;
-(BOOL)hasFiniteAnimation;
-(unsigned long long)finiteAnimationLastFrameIndex;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
@end
