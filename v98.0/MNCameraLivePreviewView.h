/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNCameraViewLayout.h>

@class UIView, UIImageView, CALayer, UIImage, UILabel, NSString;

@interface MNCameraLivePreviewView : UIView <MNCameraViewLayout> {

	UIView* _cancelOverlayView;
	BOOL _enableVideo;
	UIImageView* _freezeImageView;
	UIView* _overlayView;
	BOOL _resizePreviewLayer;
	BOOL _showInstructionLabelBelowBounds;
	double _transitionProgress;
	double _freezeImageRotationAngle;
	unsigned long long _layoutGravity;
	BOOL _reverseLayoutOrder;
	double _instructionLabelRotationAngle;
	double _interfaceRotationAngle;
	CALayer* _livePreviewLayer;
	UIImage* _freezeImage;
	UILabel* _captureInstructionsLabel;
	UILabel* _cancelSendHelpLabel;
	UIEdgeInsets _instructionLabelInsets;

}

@property (nonatomic,retain) CALayer * livePreviewLayer;                        //@synthesize livePreviewLayer=_livePreviewLayer - In the implementation block
@property (nonatomic,readonly) UIView * cancelOverlayView;                      //@synthesize cancelOverlayView=_cancelOverlayView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets instructionLabelInsets;               //@synthesize instructionLabelInsets=_instructionLabelInsets - In the implementation block
@property (nonatomic,retain) UIImage * freezeImage;                             //@synthesize freezeImage=_freezeImage - In the implementation block
@property (nonatomic,readonly) UILabel * captureInstructionsLabel;              //@synthesize captureInstructionsLabel=_captureInstructionsLabel - In the implementation block
@property (nonatomic,readonly) UILabel * cancelSendHelpLabel;                   //@synthesize cancelSendHelpLabel=_cancelSendHelpLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterfaceRotationAngle:(double)arg1 ;
-(void)setPreviewRotationAngle:(double)arg1 ;
-(void)setLivePreviewLayer:(CALayer *)arg1 ;
-(CALayer *)livePreviewLayer;
-(void)setLayoutGravity:(unsigned long long)arg1 ;
-(void)setReverseLayoutOrder:(BOOL)arg1 ;
-(void)_layoutHelpAndInstructionLabels;
-(UIEdgeInsets)instructionLabelInsets;
-(void)_updateLabelVisibility;
-(id)initWithFrame:(CGRect)arg1 enableVideo:(BOOL)arg2 overlayView:(id)arg3 resizePreviewLayer:(BOOL)arg4 showInstructionLabelBelowBounds:(BOOL)arg5 ;
-(void)setFreezeImage:(UIImage *)arg1 ;
-(void)setInstructionLabelInsets:(UIEdgeInsets)arg1 ;
-(void)setFreezeImageRotationAngle:(double)arg1 ;
-(void)setInstructionLabelRotationAngle:(double)arg1 animated:(BOOL)arg2 ;
-(void)setInstructionLabelRotationAngle:(double)arg1 ;
-(UIView *)cancelOverlayView;
-(UIImage *)freezeImage;
-(UILabel *)captureInstructionsLabel;
-(UILabel *)cancelSendHelpLabel;
-(void)layoutSubviews;
-(void)setTransitionProgress:(double)arg1 ;
@end

