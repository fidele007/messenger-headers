/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/CAAnimationDelegate.h>

@protocol FBUINavigationContainerViewDelegate;
@class UINavigationBar, NSString;

@interface FBUINavigationContainerView : UIView <CAAnimationDelegate> {

	Class _navigationBarClass;
	UINavigationBar* _navigationBar;
	BOOL _navigationBarHidden;
	id<FBUINavigationContainerViewDelegate> _delegate;
	UIEdgeInsets _navigationBarInsets;

}

@property (assign,nonatomic,__weak) id<FBUINavigationContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UINavigationBar * navigationBar; 
@property (assign,nonatomic) UIEdgeInsets navigationBarInsets;                                     //@synthesize navigationBarInsets=_navigationBarInsets - In the implementation block
@property (assign,getter=isNavigationBarHidden,nonatomic) BOOL navigationBarHidden;                //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutNavigationBar;
-(id)initWithNavigationBarClass:(Class)arg1 ;
-(void)setNavigationBarInsets:(UIEdgeInsets)arg1 ;
-(void)prepareNavigationBarForTransitionOfType:(unsigned long long)arg1 transitionContext:(id)arg2 isInteractive:(BOOL)arg3 ;
-(void)setDelegate:(id<FBUINavigationContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBUINavigationContainerViewDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(BOOL)isNavigationBarHidden;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(UIEdgeInsets)navigationBarInsets;
@end

