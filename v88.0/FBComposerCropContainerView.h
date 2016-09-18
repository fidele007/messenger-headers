/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBPhotoCropInfo, FBCropConstraintView, UIView;

@interface FBComposerCropContainerView : UIView {

	UIImageView* _imageView;
	FBPhotoCropInfo* _cropInfo;
	FBCropConstraintView* _cropConstraintView;
	UIView* _privacyMessageView;

}

@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) FBPhotoCropInfo * cropInfo;                             //@synthesize cropInfo=_cropInfo - In the implementation block
@property (nonatomic,retain) FBCropConstraintView * cropConstraintView;              //@synthesize cropConstraintView=_cropConstraintView - In the implementation block
@property (nonatomic,retain) UIView * privacyMessageView;                            //@synthesize privacyMessageView=_privacyMessageView - In the implementation block
-(FBPhotoCropInfo *)cropInfo;
-(CGSize)maxImageSizeForImageOrientation:(long long)arg1 ;
-(CGRect)constraintFrameFromCropInfo:(id)arg1 ;
-(void)_resetLayout;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 cropInfo:(id)arg3 style:(unsigned long long)arg4 privacyMessageView:(id)arg5 ;
-(void)setCropInfo:(FBPhotoCropInfo *)arg1 ;
-(FBCropConstraintView *)cropConstraintView;
-(void)setCropConstraintView:(FBCropConstraintView *)arg1 ;
-(UIView *)privacyMessageView;
-(void)setPrivacyMessageView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
@end
