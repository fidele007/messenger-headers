/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

