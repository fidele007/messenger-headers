/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIButton, UILabel, UIScrollView, MNPhotoView, UITapGestureRecognizer;

@interface MNPhotoOverlayView : UIView {

	UIView* _photoStripBackgroundView;
	UIView* _photoStripBorderView;
	UIView* _photoStripView;
	UIButton* _shareButton;
	UIButton* _albumViewButton;
	UIView* _newPhotoNotificationView;
	UILabel* _newPhotoLabel;
	BOOL _photoControlsEnabled;
	UIScrollView* _photoViewContainerView;
	UIButton* _prevButton;
	UIButton* _nextButton;
	UIButton* _closeButton;
	MNPhotoView* _notificationPhotoView;
	UIButton* _notificationReplyButton;
	UITapGestureRecognizer* _notificationTapRecognizer;
	CGRect _buttonLayoutFrame;

}

@property (nonatomic,readonly) UIButton * shareButton;                                          //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,readonly) UIButton * prevButton;                                           //@synthesize prevButton=_prevButton - In the implementation block
@property (nonatomic,readonly) UIButton * nextButton;                                           //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;                                          //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) CGRect buttonLayoutFrame;                                          //@synthesize buttonLayoutFrame=_buttonLayoutFrame - In the implementation block
@property (nonatomic,readonly) UIButton * albumViewButton;                                      //@synthesize albumViewButton=_albumViewButton - In the implementation block
@property (nonatomic,readonly) MNPhotoView * notificationPhotoView;                             //@synthesize notificationPhotoView=_notificationPhotoView - In the implementation block
@property (nonatomic,readonly) UIButton * notificationReplyButton;                              //@synthesize notificationReplyButton=_notificationReplyButton - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * notificationTapRecognizer;              //@synthesize notificationTapRecognizer=_notificationTapRecognizer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 photoStripView:(id)arg2 photoNotificationEnabled:(BOOL)arg3 enabledButtonTypes:(unsigned long long)arg4 ;
-(void)_hideNewPhotoNotification;
-(void)_layoutButtonsWithFrame:(CGRect)arg1 ;
-(void)_layoutNotification;
-(void)_layoutPhotoStrip;
-(void)_setupPhotoContainerView;
-(CGPoint)_calculateContentOffset;
-(void)setButtonLayoutFrame:(CGRect)arg1 ;
-(void)setPhotoControlsEnabled:(BOOL)arg1 duration:(double)arg2 ;
-(void)showNewPhotoNotificationWithPhotoCount:(unsigned long long)arg1 ;
-(UIButton *)prevButton;
-(CGRect)buttonLayoutFrame;
-(UIButton *)albumViewButton;
-(MNPhotoView *)notificationPhotoView;
-(UIButton *)notificationReplyButton;
-(UITapGestureRecognizer *)notificationTapRecognizer;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIButton *)nextButton;
-(UIButton *)closeButton;
-(UIButton *)shareButton;
@end

