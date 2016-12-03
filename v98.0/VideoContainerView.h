/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBShadowLayer, FBVideoPlaybackController;

@interface VideoContainerView : UIView {

	FBShadowLayer* _shadowLayer;
	BOOL _showRoundedBorder;
	FBVideoPlaybackController* _controller;
	CGRect _videoViewFrame;

}

@property (assign,nonatomic) CGRect videoViewFrame;                                        //@synthesize videoViewFrame=_videoViewFrame - In the implementation block
@property (nonatomic,__weak,readonly) FBVideoPlaybackController * controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) BOOL showShadow; 
@property (assign,nonatomic) BOOL showRoundedBorder;                                       //@synthesize showRoundedBorder=_showRoundedBorder - In the implementation block
-(BOOL)showShadow;
-(void)setShowShadow:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 ;
-(void)setShowRoundedBorder:(BOOL)arg1 ;
-(CGRect)videoViewFrame;
-(void)setVideoViewFrame:(CGRect)arg1 ;
-(BOOL)showRoundedBorder;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(FBVideoPlaybackController *)controller;
-(BOOL)isAccessibilityElement;
@end

