/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBMemoryProfilerMovableViewController;
@class UIViewController, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface FBMemoryProfilerContainerViewController : UIViewController {

	UIViewController*<FBMemoryProfilerMovableViewController> _presentedViewController;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	double _heightOnPinch;
	CGPoint _previousPinchingPoint;
	CGSize _size;

}
-(void)presentViewController:(id)arg1 withSize:(CGSize)arg2 ;
-(void)dismissCurrentViewController;
-(void)_pan;
-(void)_pinch:(id)arg1 ;
-(void)_pushPresentedViewAboveKeyboard:(double)arg1 ;
-(id)_viewControllerDecidingAboutRotations;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
@end

