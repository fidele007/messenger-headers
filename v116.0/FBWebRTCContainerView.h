/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBWebRTCContainerView : UIView {

	UIView* _grayOutOverlayView;
	BOOL _isGrayedOut;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(CGRect)_viewPortRect;
-(void)setGrayOut:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)mn_setBottomContentInset:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setBackgroundColor:(id)arg1 ;
@end

