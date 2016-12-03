/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIVisualEffectView;

@interface MNDayCameraContainerView : UIView {

	UIView* _underlayView;
	UIView* _interlayView;
	UIView* _overlayView;
	UIView* _interlayHeaderView;
	UIView* _interlayHeaderBackgroundView;
	UIVisualEffectView* _interlayIndicatorBar;
	UIView* _overlayContainerView;
	UIView* _underlayContainerView;
	UIView* _interlayContainerView;
	UIView* _interlayHeaderContainerView;

}

@property (nonatomic,readonly) UIView * underlayContainerView;                    //@synthesize underlayContainerView=_underlayContainerView - In the implementation block
@property (nonatomic,readonly) UIView * interlayContainerView;                    //@synthesize interlayContainerView=_interlayContainerView - In the implementation block
@property (nonatomic,readonly) UIView * interlayHeaderContainerView;              //@synthesize interlayHeaderContainerView=_interlayHeaderContainerView - In the implementation block
@property (assign,nonatomic) double interlayOriginY; 
-(void)_layoutUnderlayView;
-(id)initWithUnderlayView:(id)arg1 interlayView:(id)arg2 interlayHeaderView:(id)arg3 overlayView:(id)arg4 ;
-(void)setInterlayOriginY:(double)arg1 ;
-(double)interlayOriginY;
-(void)setUnderlayOriginY:(double)arg1 ;
-(void)setUnderlayTransformWithScaleXY:(double)arg1 ;
-(void)setUnderlayCornerRadius:(double)arg1 ;
-(void)setInterlayIndicatorBarHidden:(BOOL)arg1 ;
-(void)setInterlayHeaderAlpha:(double)arg1 ;
-(BOOL)isInterlayHeaderOpaque;
-(UIView *)underlayContainerView;
-(UIView *)interlayContainerView;
-(UIView *)interlayHeaderContainerView;
-(void)layoutSubviews;
@end
