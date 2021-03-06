/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGameScoreShareEditViewDelegate;
@class FBInstantGameUIMetrics, UIButton, UIView, UIImageView;

@interface FBInstantGameScoreShareEditView : UIView {

	FBInstantGameUIMetrics* _metrics;
	UIButton* _backButton;
	UIButton* _saveButton;
	UIButton* _drawToggleButton;
	UIButton* _sendButton;
	UIView* _drawingDimmingView;
	BOOL _isDrawing;
	id<FBInstantGameScoreShareEditViewDelegate> _delegate;
	UIView* _drawView;
	UIImageView* _screenShotImageView;

}

@property (assign,nonatomic,__weak) id<FBInstantGameScoreShareEditViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * drawView;                                                        //@synthesize drawView=_drawView - In the implementation block
@property (nonatomic,readonly) UIImageView * screenShotImageView;                                      //@synthesize screenShotImageView=_screenShotImageView - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                                  //@synthesize sendButton=_sendButton - In the implementation block
-(void)_didTapBackButton:(id)arg1 ;
-(void)_didTapSaveButton:(id)arg1 ;
-(void)_didTapSendButton:(id)arg1 ;
-(void)_didToggleDrawButton:(id)arg1 ;
-(id)initWithScreenshot:(id)arg1 ;
-(void)setDrawView:(UIView *)arg1 ;
-(void)animateOutScoreShareEditViewWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)drawView;
-(UIImageView *)screenShotImageView;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInstantGameScoreShareEditViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<FBInstantGameScoreShareEditViewDelegate>)delegate;
-(UIButton *)sendButton;
@end

