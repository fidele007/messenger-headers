/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol InAppNotificationContainerViewDelegate, InAppNotificationContentView;
@class UIView, UIButton, UITapGestureRecognizer, NSTimer, NSString;

@interface InAppNotificationContainerView : UIView <UIGestureRecognizerDelegate> {

	UIView* _slidingView;
	UIButton* _closeButton;
	double _upY;
	double _downY;
	double _lastStatusBarHeight;
	BOOL _isShowing;
	UITapGestureRecognizer* _singleTap;
	id<InAppNotificationContainerViewDelegate> _delegate;
	UIView*<InAppNotificationContentView> _contentView;
	double _height;
	NSTimer* _timer;
	NSTimer* _statusBarPollTimer;

}

@property (assign,nonatomic) double height;                                                           //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                         //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSTimer * statusBarPollTimer;                                            //@synthesize statusBarPollTimer=_statusBarPollTimer - In the implementation block
@property (assign,nonatomic,__weak) id<InAppNotificationContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<InAppNotificationContentView> contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAnchorPoint:(CGPoint)arg1 forView:(id)arg2 ;
-(void)closePressed:(id)arg1 ;
-(void)applyTransform;
-(void)invalidateTimers;
-(void)scheduleDismissAfterDelay:(double)arg1 ;
-(void)slideOut;
-(void)checkStatusBarHeight;
-(void)setStatusBarPollTimer:(NSTimer *)arg1 ;
-(void)showInView:(id)arg1 dismissalDelayInSeconds:(double)arg2 ;
-(void)slideInView:(id)arg1 dismissalDelayInSeconds:(double)arg2 ;
-(NSTimer *)statusBarPollTimer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView*<InAppNotificationContentView>)arg1 ;
-(void)layoutSubviews;
-(UIView*<InAppNotificationContentView>)contentView;
-(void)hide;
-(void)setDelegate:(id<InAppNotificationContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<InAppNotificationContainerViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)height;
-(void)showInView:(id)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(void)fadeOut;
-(void)didRotate:(id)arg1 ;
-(void)updateFrame;
-(void)setHeight:(double)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)removeFromView;
@end

