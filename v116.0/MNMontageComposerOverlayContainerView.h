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

@interface MNMontageComposerOverlayContainerView : UIView {

	UIView* _leftTopMaskView;
	UIView* _rightBottomMaskView;
	UIView* _overlayView;
	CGSize _overlayViewSize;
	CGSize _overlayContentSize;

}

@property (nonatomic,retain) UIView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) CGSize overlayViewSize;                 //@synthesize overlayViewSize=_overlayViewSize - In the implementation block
@property (assign,nonatomic) CGSize overlayContentSize;              //@synthesize overlayContentSize=_overlayContentSize - In the implementation block
-(void)setOverlayContentSize:(CGSize)arg1 ;
-(void)setOverlayViewSize:(CGSize)arg1 ;
-(CGSize)overlayViewSize;
-(CGSize)overlayContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

