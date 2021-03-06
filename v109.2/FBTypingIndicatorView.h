/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:43 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray;

@interface FBTypingIndicatorView : UIView {

	NSMutableArray* _dotLayers;
	NSMutableArray* _animations;
	double _typingDotSize;
	double _maxAmplitude;
	unsigned long long _bubbleDotType;

}
+(CGSize)preferredSize;
-(id)initWithTypingDotSize:(double)arg1 typingDotType:(unsigned long long)arg2 maxAmplitude:(double)arg3 animated:(BOOL)arg4 ;
-(void)_initLayers;
-(void)_initAnimations;
-(void)_updateAnimationState;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)_isAnimating;
-(void)_stopAnimation;
-(void)_startAnimation;
-(void)_appWillEnterForeground;
@end

