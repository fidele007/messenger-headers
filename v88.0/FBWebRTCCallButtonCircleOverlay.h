/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface FBWebRTCCallButtonCircleOverlay : UIView {

	BOOL _animating;
	BOOL _runningInForeground;
	CGSize _layoutSize;
	NSArray* _shapeLayers;
	unsigned long long _animationType;

}

@property (assign,nonatomic) unsigned long long animationType;              //@synthesize animationType=_animationType - In the implementation block
-(id)_createShapeLayer;
-(void)_updateDefaultCirclePaths;
-(void)_stopAnimationIfNeeded;
-(void)_startAnimationIfNeeded;
-(void)_addCircleAnimationToLayer:(id)arg1 delayed:(BOOL)arg2 ;
-(double)_maxCircleWidth;
-(BOOL)_isCompact;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)setAnimationType:(unsigned long long)arg1 ;
-(unsigned long long)animationType;
@end

