/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNCameraViewLayout.h>

@protocol MNCameraPreviewViewDelegate;
@class UIView, UIImageView, CAGradientLayer, UIButton, UIImage, NSString;

@interface MNCameraPreviewView : UIView <MNCameraViewLayout> {

	UIView* _videoPlayingView;
	UIImageView* _imagePreviewView;
	UIView* _buttonBarView;
	UIView* _buttonBarGradientView;
	CAGradientLayer* _gradientLayer;
	UIButton* _retakeButton;
	UIButton* _sendButton;
	UIButton* _sendButtonOnRight;
	UIView* _photoEditingControlsView;
	double _previewImageRotationAngle;
	double _currentRotationAngle;
	unsigned long long _layoutGravity;
	BOOL _reverseLayoutOrder;
	long long _sendButtonPosition;
	id<MNCameraPreviewViewDelegate> _delegate;
	UIImage* _previewImage;

}

@property (assign,nonatomic,__weak) id<MNCameraPreviewViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * previewImage;                                       //@synthesize previewImage=_previewImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterfaceRotationAngle:(double)arg1 ;
-(void)_sendPressed:(id)arg1 ;
-(id)initWithSendButtonPosition:(long long)arg1 ;
-(void)setLayoutGravity:(unsigned long long)arg1 ;
-(void)setReverseLayoutOrder:(BOOL)arg1 ;
-(void)setPreviewImageRotationAngle:(double)arg1 ;
-(void)setPhotoEditingControlsView:(id)arg1 ;
-(void)setVideoPlayingView:(id)arg1 ;
-(void)showSendButton:(BOOL)arg1 ;
-(void)_retakePressed:(id)arg1 ;
-(void)_updateImagePreviewViewRotationAngle;
-(void)_updateVideoPlayingViewRotationAngle;
-(void)_prepareVideoPreview;
-(void)_prepareImagePreview;
-(void)_setSendEnabled:(BOOL)arg1 ;
-(void)hideAllControls:(BOOL)arg1 ;
-(void)_setupSubviewsSizesForLayoutGravity:(unsigned long long)arg1 ;
-(void)_layoutSubviewsForLayoutGravity:(unsigned long long)arg1 reverseLayoutOrder:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNCameraPreviewViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNCameraPreviewViewDelegate>)delegate;
-(void)reset;
-(void)setPreviewImage:(UIImage *)arg1 ;
-(UIImage *)previewImage;
@end

