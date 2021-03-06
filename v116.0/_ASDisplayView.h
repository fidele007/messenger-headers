/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:01 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class ASDisplayNode, NSArray;

@interface _ASDisplayView : UIView {

	ASDisplayNode* _node;
	BOOL _inHitTest;
	BOOL _inPointInside;
	NSArray* _accessibleElements;
	ASDisplayNode* _keepalive_node;

}

@property (assign,nonatomic) ASDisplayNode * asyncdisplaykit_node;              //@synthesize node=_node - In the implementation block
@property (nonatomic,retain) ASDisplayNode * keepalive_node;                    //@synthesize keepalive_node=_keepalive_node - In the implementation block
+(Class)layerClass;
-(void)setAsyncdisplaykit_node:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)asyncdisplaykit_node;
-(void)setKeepalive_node:(ASDisplayNode *)arg1 ;
-(void)asyncdisplaykit_asyncTransactionContainerStateDidChange;
-(void)__forwardTouchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)__forwardTouchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)__forwardTouchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)__forwardTouchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(ASDisplayNode *)keepalive_node;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setNeedsLayout;
-(void)setNeedsDisplay;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(id)description;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)contentMode;
-(BOOL)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)canResignFirstResponder;
@end

