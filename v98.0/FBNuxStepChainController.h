/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:06 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FBNUXWindowDelegate.h>
#import <Messenger/FBNUXViewControllerDelegate.h>

@protocol FBNuxStepViewController, FBNuxStepChainControllerDelegate, FBNuxStep;
@class FBPopoverController, UIViewController, UIView, FBKVOController, NSMutableArray, UINavigationController, FBFlyUpViewController, UIGestureRecognizer, FBNUXWindow, NSString;

@interface FBNuxStepChainController : NSObject <FBPopoverControllerDelegate, FBNUXWindowDelegate, FBNUXViewControllerDelegate> {

	FBPopoverController* _popoverController;
	UIViewController*<FBNuxStepViewController> _stepViewController;
	UIView* _nuxView;
	FBKVOController* _KVOController;
	unsigned long long _currentPageIndicatorIndex;
	NSMutableArray* _stepChain;
	NSMutableArray* _subSteps;
	UINavigationController* _navigationController;
	BOOL _didCancel;
	FBFlyUpViewController* _flyUpViewController;
	UIGestureRecognizer* _fullscreenTapRecognizer;
	BOOL _isFIGEnabled;
	unsigned long long _indexOfCurrentStep;
	id<FBNuxStepChainControllerDelegate> _delegate;
	id<FBNuxStep> _currentStep;
	unsigned long long _interfaceOrientationMask;
	FBNUXWindow* _window;

}

@property (nonatomic,retain) id<FBNuxStep> currentStep;                                         //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) FBNUXWindow * window;                                              //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL isFIGEnabled;                                                 //@synthesize isFIGEnabled=_isFIGEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) unsigned long long indexOfCurrentStep;                           //@synthesize indexOfCurrentStep=_indexOfCurrentStep - In the implementation block
@property (assign,nonatomic,__weak) id<FBNuxStepChainControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientationMask;                       //@synthesize interfaceOrientationMask=_interfaceOrientationMask - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_closeNUX;
-(void)showNUX;
-(id)initWithFirstStep:(id)arg1 ;
-(void)endNUXAnimated:(BOOL)arg1 ;
-(BOOL)isFIGEnabled;
-(void)setIsFIGEnabled:(BOOL)arg1 ;
-(unsigned long long)indexOfCurrentStep;
-(void)_onTextEditingEvent:(id)arg1 ;
-(BOOL)nuxWindow:(id)arg1 shouldPassThroughHitTest:(CGPoint)arg2 event:(id)arg3 ;
-(id)_nextStep;
-(void)nuxViewControllerWasDismissedForward:(id)arg1 ;
-(void)nuxViewControllerWasDismissedBackward:(id)arg1 ;
-(void)_transitionToStep:(id)arg1 ;
-(void)_notifyDelegateOfTransition;
-(void)arrowPositionForCurrentStepInWindowDidChange;
-(void)_unobserveCurrentStep;
-(void)_observeCurrentStep;
-(id)_substepsFromStep:(id)arg1 ;
-(void)_insertStepOrSubStepsForStep:(id)arg1 ;
-(void)_unravelStepsAndSubSteps;
-(void)_notifyDelegateOfCancel;
-(void)_onTapWindow:(id)arg1 ;
-(void)_makeWindow;
-(id)_viewControllerForStep:(id)arg1 ;
-(id)_freshPopoverControllerForStep:(id)arg1 ;
-(void)setCurrentStep:(id<FBNuxStep>)arg1 ;
-(void)_configureForCurrentStep;
-(void)_cleanUpWindowAndCloseNUX;
-(void)_updateStepCountIndicatorForward:(BOOL)arg1 ;
-(void)_cleanUpPresentingControllers;
-(void)_openNextStep;
-(void)_openPreviousStep;
-(void)nuxViewControllerWasCanceled;
-(void)endNUX;
-(void)setDelegate:(id<FBNuxStepChainControllerDelegate>)arg1 ;
-(void)dealloc;
-(FBNUXWindow *)window;
-(id<FBNuxStepChainControllerDelegate>)delegate;
-(void)setWindow:(FBNUXWindow *)arg1 ;
-(void)_cleanup;
-(BOOL)isVisible;
-(id<FBNuxStep>)currentStep;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end

