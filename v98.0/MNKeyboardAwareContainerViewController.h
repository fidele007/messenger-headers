/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNContainerViewController.h>

@class UIViewController, MNKeyboardAwareContainerView, FBKeyboardObserver, FBKeyboardResettingTracker, NSString;

@interface MNKeyboardAwareContainerViewController : FBContainerViewController <FBKeyboardObserverDelegate, MNContainerViewController> {

	UIViewController* _contentViewController;
	MNKeyboardAwareContainerView* _containerView;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	CGRect _keyboardFrame;
	BOOL _keyboardAware;

}

@property (assign,getter=isKeyboardAware,nonatomic) BOOL keyboardAware;              //@synthesize keyboardAware=_keyboardAware - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)initWithContentViewController:(id)arg1 keyboardResettingTracker:(id)arg2 ;
-(id)mn_visibleContentViewControllers;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(BOOL)isKeyboardAware;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)preferredFocusedView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)setKeyboardAware:(BOOL)arg1 ;
@end

