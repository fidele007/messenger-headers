/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class UIView, FBKeyboardObserver, NSString;

@interface MNPreLoginContainerView : UIView <FBKeyboardObserverDelegate> {

	UIView* _contentView;
	FBKeyboardObserver* _keyboardObserver;
	CGRect _keyboardFrame;
	BOOL _isKeyboardShown;
	BOOL _displayContentWithPadding;

}

@property (assign,nonatomic) BOOL displayContentWithPadding;              //@synthesize displayContentWithPadding=_displayContentWithPadding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_layoutSubviewsInternal;
-(CGRect)_frameForContentView;
-(void)_handleKeyboardActionWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duraion:(double)arg3 curve:(long long)arg4 ;
-(void)_animateContentWithDuration:(double)arg1 curve:(long long)arg2 ;
-(void)setDisplayContentWithPadding:(BOOL)arg1 ;
-(BOOL)displayContentWithPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setContentView:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end

