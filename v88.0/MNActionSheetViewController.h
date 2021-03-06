/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNActionSheetViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>
#import <Messenger/MNActionSheetPresentationDelegate.h>

@protocol MNActionSheetPresenting, MNActionSheetViewControllerDelegate;
@class UIViewController, MNActionSheetView, FBKeyboardObserver, FBKeyboardResettingTracker, NSString;

@interface MNActionSheetViewController : FBContainerViewController <MNActionSheetViewDelegate, FBKeyboardObserverDelegate, MNActionSheetPresentationDelegate> {

	UIViewController*<MNActionSheetPresenting> _contentViewController;
	MNActionSheetView* _actionSheetView;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardResettingTracker* _keyboardResettingTracker;
	CGRect _keyboardFrame;
	BOOL _keyboardAware;
	id<MNActionSheetViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNActionSheetViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserverKeyboardDidHide:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(id)initWithContentViewController:(id)arg1 keyboardResettingTracker:(id)arg2 keyboardAware:(BOOL)arg3 ;
-(void)presentWithMaxHeightRatio:(double)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)occludesScreen;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(void)viewContollerNeedsResize:(id)arg1 animated:(BOOL)arg2 ;
-(void)actionSheetViewDidDismiss:(id)arg1 ;
-(void)resizeAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<MNActionSheetViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNActionSheetViewControllerDelegate>)delegate;
-(void)loadView;
-(id)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

