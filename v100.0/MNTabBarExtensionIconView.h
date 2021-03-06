/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(UIColor *)selectedBackgroundColor;
-(void)_updateMaskView;
-(void)setSelectedBackgroundColor:(UIColor *)arg1 ;
-(BOOL)usesCircularMask;
-(void)setUsesCircularMask:(BOOL)arg1 ;
-(void)setIconColor:(UIColor *)arg1 ;
-(void)setShouldShowDot:(BOOL)arg1 ;
-(void)mn_setIconController:(id)arg1 ;
-(MNComposerExtensionIconController *)mn_iconController;
-(UIColor *)iconColor;
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(long long)renderingMode;
-(UIImage *)image;
-(UIImage *)selectedImage;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setRenderingMode:(long long)arg1 ;
@end

