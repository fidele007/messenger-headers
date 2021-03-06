/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface MNMontageCameraLivePreviewView : UIView {

	UIView* _rotationOverlayView;
	UIView* _livePreviewView;

}

@property (nonatomic,retain) UIView * livePreviewView;              //@synthesize livePreviewView=_livePreviewView - In the implementation block
-(UIView *)livePreviewView;
-(void)setLivePreviewView:(UIView *)arg1 ;
-(void)setPreviewViewRotationAngle:(double)arg1 ;
-(void)setRotationOverlayViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

