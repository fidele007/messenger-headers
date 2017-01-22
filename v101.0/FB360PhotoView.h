/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FB360PhotoRendererLoopDelegate.h>
#import <Messenger/FB360OrientationTrackerDelegate.h>
#import <Messenger/FBSwipeNavigationIntervening.h>
#import <Messenger/FB360IndicatorViewDelegate.h>
#import <libobjc.A.dylib/GLKViewDelegate.h>

@protocol FB360PhotoViewDelegate, FB360PhotoRendererProtocol;
@class EAGLContext, GLKView, FB360PhotoPresenter, FB360PhotoRendererLoop, FB360ViewParams, FB360OrientationTracker, FB360IndicatorView, FBTimer, UIPanGestureRecognizer, FBDirectionalPanGestureRecognizer, UIPinchGestureRecognizer, FBUserSession, NSString, FB360InitialViewParams;

@interface FB360PhotoView : UIView <FB360PhotoRendererLoopDelegate, FB360OrientationTrackerDelegate, FBSwipeNavigationIntervening, FB360IndicatorViewDelegate, GLKViewDelegate> {

	EAGLContext* _context;
	GLKView* _glView;
	FB360PhotoPresenter* _photoPresenter;
	FB360PhotoRendererLoop* _loop;
	FB360ViewParams* _viewParams;
	FB360OrientationTracker* _orientationTracker;
	FB360IndicatorView* _indicatorView;
	FBTimer* _showPhonePanAnimationTimer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	FBDirectionalPanGestureRecognizer* _horizontalPanGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	FBUserSession* _session;
	BOOL _isLockGyroAvailable;
	BOOL _didSendDragStartMetric;
	BOOL _didSendPinchStartMetric;
	BOOL _didSendSignificantChangeMetric;
	BOOL _isDirectionalPanningAllowed;
	double _minimumMoveDegreeToFireMetric;
	BOOL _enableMotionUpdates;
	BOOL _canShowPhonePanAnimation;
	BOOL _allowPanning;
	BOOL _allowHorizontalPanning;
	BOOL _allowZoom;
	unsigned long long _photoSize;
	NSString* _analyticsModule;
	NSString* _analyticsSurface;
	NSString* _photoId;
	FB360InitialViewParams* _initialViewParams;
	id<FB360PhotoViewDelegate> _delegate;
	id<FB360PhotoRendererProtocol> _currentRenderer;

}

@property (assign,nonatomic,__weak) id<FB360PhotoRendererProtocol> currentRenderer;              //@synthesize currentRenderer=_currentRenderer - In the implementation block
@property (nonatomic,readonly) FB360PhotoPresenter * photoPresenter;                             //@synthesize photoPresenter=_photoPresenter - In the implementation block
@property (nonatomic,readonly) unsigned long long photoSize;                                     //@synthesize photoSize=_photoSize - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                           //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy) NSString * analyticsSurface;                                          //@synthesize analyticsSurface=_analyticsSurface - In the implementation block
@property (nonatomic,copy) NSString * photoId;                                                   //@synthesize photoId=_photoId - In the implementation block
@property (nonatomic,retain) FB360InitialViewParams * initialViewParams;                         //@synthesize initialViewParams=_initialViewParams - In the implementation block
@property (assign,nonatomic) BOOL enableMotionUpdates;                                           //@synthesize enableMotionUpdates=_enableMotionUpdates - In the implementation block
@property (assign,nonatomic) BOOL canShowPhonePanAnimation;                                      //@synthesize canShowPhonePanAnimation=_canShowPhonePanAnimation - In the implementation block
@property (assign,nonatomic) BOOL allowPanning;                                                  //@synthesize allowPanning=_allowPanning - In the implementation block
@property (assign,nonatomic) BOOL allowHorizontalPanning;                                        //@synthesize allowHorizontalPanning=_allowHorizontalPanning - In the implementation block
@property (assign,nonatomic) BOOL allowZoom;                                                     //@synthesize allowZoom=_allowZoom - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutInsets; 
@property (assign,nonatomic,__weak) id<FB360PhotoViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)setPhotoPresenter:(id)arg1 withSize:(unsigned long long)arg2 ;
-(void)startGyroAnimations:(BOOL)arg1 ;
-(void)pauseGyroAnimations;
-(void)setEnableMotionUpdates:(BOOL)arg1 ;
-(void)resumeGyroAnimations;
-(void)setInitialViewParams:(FB360InitialViewParams *)arg1 ;
-(void)resetDeviceAttitude;
-(void)setAllowZoom:(BOOL)arg1 ;
-(void)setAllowPanning:(BOOL)arg1 ;
-(void)_sendRenderLogsIfNeeded;
-(void)_cancelPhonePanAnimation;
-(void)_stopRender;
-(void)_startRenderWithRenderer:(id)arg1 ;
-(void)_schedulePhoneAnimation;
-(void)setLayoutInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutInsets;
-(BOOL)_is360GyroLockAvailable:(id)arg1 ;
-(void)_cancelAnimationsBecauseOfInteractions;
-(void)three60PhotoRendererLoopWillRender:(id)arg1 ;
-(void)three60PhotoRendererLoopDidRender:(id)arg1 ;
-(BOOL)prefersSwipeByEdgeOnly;
-(void)indicatorViewDidShowPhonePanAnimation:(id)arg1 ;
-(void)indicatorViewDidTapHeadingIndicator:(id)arg1 ;
-(void)setAllowHorizontalPanning:(BOOL)arg1 ;
-(void)_disableGyroIndicatorView;
-(FB360PhotoPresenter *)photoPresenter;
-(NSString *)analyticsSurface;
-(void)setAnalyticsSurface:(NSString *)arg1 ;
-(FB360InitialViewParams *)initialViewParams;
-(BOOL)enableMotionUpdates;
-(BOOL)canShowPhonePanAnimation;
-(void)setCanShowPhonePanAnimation:(BOOL)arg1 ;
-(BOOL)allowPanning;
-(BOOL)allowHorizontalPanning;
-(BOOL)allowZoom;
-(id<FB360PhotoRendererProtocol>)currentRenderer;
-(void)setCurrentRenderer:(id<FB360PhotoRendererProtocol>)arg1 ;
-(void)_updateOrientationTrackerFoVValues;
-(void)_updateInitialViewParamsIfAvailable;
-(void)three60OrientationTrackerDidMoveSignificantly:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FB360PhotoViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(id<FB360PhotoViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)removeAllAnimations;
-(void)glkView:(id)arg1 drawInRect:(CGRect)arg2 ;
-(NSString *)photoId;
-(void)setPhotoId:(NSString *)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(unsigned long long)photoSize;
-(BOOL)_isReadyToRender;
-(void)_handlePinch:(id)arg1 ;
-(void)setSession:(id)arg1 ;
@end
