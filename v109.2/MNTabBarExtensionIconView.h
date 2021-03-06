/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIColor, MNComposerExtensionIconController, UIImage;

@interface MNTabBarExtensionIconView : UIView {

	UIImageView* _imageView;
	UIImageView* _maskImageView;
	UIImageView* _dotImageView;
	BOOL _usesCircularMask;
	BOOL _shouldShowDot;
	BOOL _onlyTintSelectedIcon;
	long long _renderingMode;
	UIColor* _selectedBackgroundColor;
	UIColor* _iconColor;

}

@property (setter=mn_setIconController:,nonatomic,retain) MNComposerExtensionIconController * mn_iconController; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (assign,nonatomic) long long renderingMode;                                                                         //@synthesize renderingMode=_renderingMode - In the implementation block
@property (assign,nonatomic) BOOL usesCircularMask;                                                                           //@synthesize usesCircularMask=_usesCircularMask - In the implementation block
@property (assign,nonatomic) BOOL shouldShowDot;                                                                              //@synthesize shouldShowDot=_shouldShowDot - In the implementation block
@property (nonatomic,retain) UIColor * selectedBackgroundColor;                                                               //@synthesize selectedBackgroundColor=_selectedBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * iconColor;                                                                             //@synthesize iconColor=_iconColor - In the implementation block
@property (assign,nonatomic) BOOL onlyTintSelectedIcon;                                                                       //@synthesize onlyTintSelectedIcon=_onlyTintSelectedIcon - In the implementation block
-(void)_updateMaskView;
-(BOOL)usesCircularMask;
-(void)setUsesCircularMask:(BOOL)arg1 ;
-(void)setIconColor:(UIColor *)arg1 ;
-(UIColor *)iconColor;
-(void)setShouldShowDot:(BOOL)arg1 ;
-(void)mn_setIconController:(id)arg1 ;
-(MNComposerExtensionIconController *)mn_iconController;
-(long long)_imageRenderingModeForIcon;
-(long long)_imageRenderingModeForSelectedIcon;
-(void)_updateImageRenderingModes;
-(void)_updateMaskViewVisibility;
-(void)_updateDotViewVisibility;
-(void)_updateDotViewWithColor:(id)arg1 ;
-(void)_initMaskViewIfNeeded;
-(void)_initDotViewIfNeeded;
-(void)setOnlyTintSelectedIcon:(BOOL)arg1 ;
-(BOOL)shouldShowDot;
-(BOOL)onlyTintSelectedIcon;
-(UIColor *)selectedBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)reset;
-(UIImage *)image;
-(long long)renderingMode;
-(UIImage *)selectedImage;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setRenderingMode:(long long)arg1 ;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
@end

