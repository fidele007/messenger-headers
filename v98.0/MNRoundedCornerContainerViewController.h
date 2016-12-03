/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <Messenger/MNRoundedCornerContainerViewDelegate.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@protocol MNRoundedCornerContainerViewControllerDelegate;
@class MNRoundedCornerContainerView, UIViewController, MNRoundedCornerContainerConfig, UIPanGestureRecognizer, MNRoundedCornerContainerTransitionController, FBKeyboardObserver, NSString;

@interface MNRoundedCornerContainerViewController : FBContainerViewController <MNRoundedCornerContainerViewDelegate, FBKeyboardObserverDelegate> {

	MNRoundedCornerContainerView* _roundedCornerContainerView;
	UIViewController* _contentViewController;
	MNRoundedCornerContainerConfig* _roundedCornerContainerConfig;
	UIPanGestureRecognizer* _panGestureRecognizer;
	MNRoundedCornerContainerTransitionController* _transitionController;
	FBKeyboardObserver* _keyboardObserver;
	id<MNRoundedCornerContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRoundedCornerContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_updateKeyboardFrame:(CGRect)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(id)initWithContentViewController:(id)arg1 config:(id)arg2 ;
-(void)roundedCornerContainerViewDidTapDismissButton:(id)arg1 ;
-(void)roundedCornerContainerViewDidTapTopRightButton:(id)arg1 ;
-(BOOL)_shouldDismissWithTranslation:(CGPoint)arg1 ;
-(void)_handleDismissWithGestureRecognizer:(id)arg1 translation:(CGPoint)arg2 ;
-(BOOL)_shouldExpandWithTranslation:(CGPoint)arg1 ;
-(void)_handleExpandWithGestureRecognizer:(id)arg1 translation:(CGPoint)arg2 ;
-(void)_startInteractiveDismissWithGestureRecognizer:(id)arg1 ;
-(void)setDelegate:(id<MNRoundedCornerContainerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRoundedCornerContainerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_handlePan:(id)arg1 ;
@end
