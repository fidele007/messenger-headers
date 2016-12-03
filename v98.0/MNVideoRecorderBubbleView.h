/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBShapeView.h>
#import <Messenger/MNCancelableBubbleSupporting.h>

@class UIBezierPath, CAShapeLayer, UIView, UIImageView, CALayer, UIImage;

@interface MNVideoRecorderBubbleView : FBShapeView <MNCancelableBubbleSupporting> {

	CAShapeLayer* _maskLayer;
	UIView* _maskedBaseView;
	UIView* _previewView;
	UIImageView* _thumbnailImageView;
	UIView* _progressOverlayView;
	UIView* _progressFillView;
	BOOL _canceling;
	BOOL _flashingProgress;
	CALayer* _previewLayer;
	UIImage* _thumbnailImage;
	double _progress;

}

@property (nonatomic,retain) CALayer * previewLayer;                                       //@synthesize previewLayer=_previewLayer - In the implementation block
@property (nonatomic,retain) UIImage * thumbnailImage;                                     //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,getter=isShowingProgress,nonatomic) BOOL showingProgress; 
@property (assign,nonatomic) double progress;                                              //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isFlashingProgress,nonatomic) BOOL flashingProgress;              //@synthesize flashingProgress=_flashingProgress - In the implementation block
@property (nonatomic,readonly) UIBezierPath * bubblePath; 
@property (nonatomic,readonly) BOOL cancelButtonCanOverlay; 
@property (assign,getter=isCanceling,nonatomic) BOOL canceling;                            //@synthesize canceling=_canceling - In the implementation block
-(void)setCanceling:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCanceling;
-(void)setProgress:(double)arg1 animated:(BOOL)arg2 animationInterval:(double)arg3 ;
-(void)setFlashingProgress:(BOOL)arg1 ;
-(void)setShowingProgress:(BOOL)arg1 ;
-(void)setPreviewRotationAngle:(double)arg1 ;
-(CGRect)_progressFillViewFrameWithFullFrame:(CGRect)arg1 ;
-(id)compatibleCirclePathWithDiameter:(double)arg1 ;
-(UIBezierPath *)bubblePath;
-(BOOL)cancelButtonCanOverlay;
-(void)setCanceling:(BOOL)arg1 ;
-(id)_normalStateFillColor;
-(BOOL)isFlashingProgress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)setPreviewLayer:(CALayer *)arg1 ;
-(UIImage *)thumbnailImage;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(BOOL)isShowingProgress;
-(CALayer *)previewLayer;
@end

