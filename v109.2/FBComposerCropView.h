/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImage, FBMediaGallerySecondaryBar, FBMediaTopNavigationBar, FBComposerCropContainerView, FBMediaGalleryTopBar, UIButton;

@interface FBComposerCropView : UIView {

	UIView* _bannerView;
	double _imageFrameWidth;
	UIImage* _imageToCrop;
	UIView* _privacyMessageView;
	FBMediaGallerySecondaryBar* _secondaryBar;
	unsigned long long _style;
	FBMediaTopNavigationBar* _cropTopBar;
	FBComposerCropContainerView* _containerView;
	FBMediaGalleryTopBar* _mediaGalleryTopBar;
	UIButton* _originalCropButton;
	UIButton* _rotationButton;
	UIButton* _squareCropButton;
	UIView* _lineView;
	double _topLayoutGuideLength;

}

@property (nonatomic,readonly) FBMediaTopNavigationBar * cropTopBar;                     //@synthesize cropTopBar=_cropTopBar - In the implementation block
@property (nonatomic,readonly) FBComposerCropContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) FBMediaGalleryTopBar * mediaGalleryTopBar;                //@synthesize mediaGalleryTopBar=_mediaGalleryTopBar - In the implementation block
@property (nonatomic,readonly) UIButton * originalCropButton;                            //@synthesize originalCropButton=_originalCropButton - In the implementation block
@property (nonatomic,readonly) UIButton * rotationButton;                                //@synthesize rotationButton=_rotationButton - In the implementation block
@property (nonatomic,readonly) UIButton * squareCropButton;                              //@synthesize squareCropButton=_squareCropButton - In the implementation block
@property (nonatomic,readonly) UIView * lineView;                                        //@synthesize lineView=_lineView - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(void)_addButtonsToSecondaryBar;
-(FBMediaTopNavigationBar *)cropTopBar;
-(FBMediaGalleryTopBar *)mediaGalleryTopBar;
-(void)setImageFrameWidth:(double)arg1 ;
-(UIButton *)originalCropButton;
-(UIButton *)squareCropButton;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 imageFrameWidth:(double)arg3 cropInfo:(id)arg4 style:(unsigned long long)arg5 topBarConfiguration:(id)arg6 bannerView:(id)arg7 privacyMessageView:(id)arg8 ;
-(UIButton *)rotationButton;
-(double)topLayoutGuideLength;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)layoutSubviews;
-(FBComposerCropContainerView *)containerView;
-(UIView *)lineView;
-(id)_topBar;
@end

