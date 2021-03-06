/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDimmingViewDelegate.h>
#import <Messenger/FBKeyCommandSource.h>
#import <Messenger/POPAnimationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol FBPopoverAnimationProvider, FBPopoverControllerDelegate;
@class UIPanGestureRecognizer, _FBPopoverControllerTouchDownGestureRecognizer, NSArray, UIViewController, UIView, FBPopoverView, FBDimmingView, UIColor, NSString;

@interface FBPopoverController : NSObject <FBDimmingViewDelegate, FBKeyCommandSource, POPAnimationDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	CGSize _contentSize;
	CGPoint _popoverArrowPoint;
	id<FBPopoverAnimationProvider> _animationProvider;
	unsigned long long _supportedDismissalInteractions;
	unsigned long long _currentDismissInteraction;
	CGPoint _closeGestureStartingTouch;
	UIPanGestureRecognizer* _closeGesture;
	_FBPopoverControllerTouchDownGestureRecognizer* _touchDownRecognizer;
	BOOL _closeGestureIgnoreNextCancelled;
	NSArray* _keyCommands;
	CGRect _keyboardCurrentFrame;
	long long _animationActiveCount;
	FBCameraComponentViewControllerConfiguration _delegateRespondsTo;
	FBCameraComponentViewControllerConfiguration _animationProviderRespondsTo;
	BOOL _popoverVisible;
	BOOL _canDismissOnScrollAtTopForArrowDirectionNone;
	BOOL _dismissOnResize;
	UIViewController* _contentViewController;
	id<FBPopoverControllerDelegate> _delegate;
	UIView* _hostingView;
	unsigned long long _allowedArrowDirections;
	double _arrowPointOffset;
	FBPopoverView* _popoverView;
	FBDimmingView* _overlayView;
	UIView* _presentationView;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _popoverInset;

}

@property (nonatomic,readonly) FBPopoverView * popoverView;                                  //@synthesize popoverView=_popoverView - In the implementation block
@property (nonatomic,readonly) FBDimmingView * overlayView;                                  //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * presentationView;                             //@synthesize presentationView=_presentationView - In the implementation block
@property (nonatomic,readonly) CGPoint popoverArrowPoint;                                    //@synthesize popoverArrowPoint=_popoverArrowPoint - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;                       //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBPopoverControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * hostingView;                                    //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,readonly) BOOL popoverVisible;                                          //@synthesize popoverVisible=_popoverVisible - In the implementation block
@property (assign,nonatomic) unsigned long long allowedArrowDirections;                      //@synthesize allowedArrowDirections=_allowedArrowDirections - In the implementation block
@property (nonatomic,readonly) unsigned long long popoverArrowDirection; 
@property (assign,nonatomic) BOOL canDismissOnScrollAtTopForArrowDirectionNone;              //@synthesize canDismissOnScrollAtTopForArrowDirectionNone=_canDismissOnScrollAtTopForArrowDirectionNone - In the implementation block
@property (assign,nonatomic) double arrowPointOffset;                                        //@synthesize arrowPointOffset=_arrowPointOffset - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,copy) NSArray * highlightedRegions; 
@property (assign,nonatomic) UIEdgeInsets contentInset;                                      //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets popoverInset;                                      //@synthesize popoverInset=_popoverInset - In the implementation block
@property (assign,nonatomic) CATransform3D popoverTransform; 
@property (assign,nonatomic) double backgroundAlpha; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) UIColor * arrowColor; 
@property (assign,nonatomic) BOOL dismissOnResize;                                           //@synthesize dismissOnResize=_dismissOnResize - In the implementation block
@property (assign,nonatomic) unsigned long long supportedDismissalInteractions; 
@property (assign,nonatomic) CGSize contentSize;                                             //@synthesize contentSize=_contentSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fb_keyCommands;
-(void)setPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(void)setSupportedDismissalInteractions:(unsigned long long)arg1 ;
-(void)setCanDismissOnScrollAtTopForArrowDirectionNone:(BOOL)arg1 ;
-(void)setAllowedArrowDirections:(unsigned long long)arg1 ;
-(void)setHostingView:(UIView *)arg1 ;
-(unsigned long long)supportedDismissalInteractions;
-(void)presentPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIView *)hostingView;
-(CGPoint)pointInView:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(void)setPoint:(CGPoint)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)popoverVisible;
-(void)setPopoverInset:(UIEdgeInsets)arg1 ;
-(void)setArrowPointOffset:(double)arg1 ;
-(void)setDismissOnResize:(BOOL)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)allowedArrowDirections;
-(void)_keyboardWillChangeFrameWithNotification:(id)arg1 ;
-(double)arrowPointOffset;
-(UIEdgeInsets)popoverInset;
-(void)overlayViewDidDismiss:(id)arg1 ;
-(BOOL)_delegateShouldDismiss;
-(void)setHighlightedRegions:(NSArray *)arg1 ;
-(NSArray *)highlightedRegions;
-(id)initWithBackgroundViewClass:(Class)arg1 ;
-(void)_handleDismissInteraction:(id)arg1 ;
-(void)_windowSizeDidChange:(id)arg1 ;
-(CGPoint)_arrowPointInParent;
-(/*^block*/id)_animationCompletionBlockPreparingAnimationForCompletion:(/*^block*/id)arg1 ;
-(void)_touchDown:(id)arg1 ;
-(void)_didTouchDownOutsidePopover;
-(void)_startListeningForTouchEventsIfNecessary;
-(void)dismissPopoverAnimated:(BOOL)arg1 scaleVelocity:(double)arg2 translationVelocity:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)_stopListeningForTouchEvents;
-(void)_delegateDidDismiss;
-(void)_delegateWillDismiss;
-(void)setContentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transition:(BOOL)arg1 withView:(id)arg2 duration:(double)arg3 animations:(/*^block*/id)arg4 options:(unsigned long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)_animate:(BOOL)arg1 duration:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handleDragDismissInteraction:(id)arg1 ;
-(void)_delegateCloseWithScaleVelocity:(double)arg1 translationVelocity:(double)arg2 ;
-(unsigned long long)_determineDismissInteraction;
-(BOOL)pointInsidePopover:(CGPoint)arg1 inView:(id)arg2 ;
-(void)passthroughViewsMoved;
-(void)_escapePressed;
-(CATransform3D)popoverTransform;
-(void)setPopoverTransform:(CATransform3D)arg1 ;
-(BOOL)canDismissOnScrollAtTopForArrowDirectionNone;
-(BOOL)dismissOnResize;
-(CGPoint)popoverArrowPoint;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<FBPopoverControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPopoverControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)contentSize;
-(UIEdgeInsets)contentInset;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layout;
-(UIViewController *)contentViewController;
-(FBPopoverView *)popoverView;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)stopAnimating;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)popoverArrowDirection;
-(double)backgroundAlpha;
-(FBDimmingView *)overlayView;
-(UIView *)presentationView;
-(UIColor *)arrowColor;
-(void)setArrowColor:(UIColor *)arg1 ;
@end

