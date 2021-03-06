/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCRingGroupNoticeViewDelegate;
@class UILabel, FBButton;

@interface FBWebRTCRingGroupNoticeView : UIView {

	UILabel* _sharingVideoLabel;
	UILabel* _detailsLabel;
	FBButton* _ringButton;
	BOOL _animatedIn;
	unsigned long long _noticeMode;
	id<FBWebRTCRingGroupNoticeViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long noticeMode;                                        //@synthesize noticeMode=_noticeMode - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebRTCRingGroupNoticeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL topLabelHidden; 
@property (assign,nonatomic) BOOL animatedIn;                                                      //@synthesize animatedIn=_animatedIn - In the implementation block
-(void)setTopLabelHidden:(BOOL)arg1 ;
-(unsigned long long)noticeMode;
-(void)_didTapRingButton:(id)arg1 ;
-(void)_didTapBackground;
-(BOOL)topLabelHidden;
-(BOOL)animatedIn;
-(void)setNoticeMode:(unsigned long long)arg1 ;
-(void)setAnimatedIn:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBWebRTCRingGroupNoticeViewDelegate>)arg1 ;
-(id<FBWebRTCRingGroupNoticeViewDelegate>)delegate;
-(void)startAnimation;
@end

