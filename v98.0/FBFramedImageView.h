/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class FLAnimatedImageView, UIImage, UIImageView;

@interface FBFramedImageView : UIControl {

	FLAnimatedImageView* _imageView;
	FBFramedImageViewConstraint _constraint;

}

@property (nonatomic,readonly) UIImage * resizedImage; 
@property (nonatomic,readonly) UIImageView * currentImageView; 
-(void)_resizeImageBasedOnConstraint:(id)arg1 animatedImage:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(UIImageView *)currentImageView;
-(void)setResizingImage:(id)arg1 animatedImage:(id)arg2 constraint:(FBFramedImageViewConstraint)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isAccessibilityElement;
-(UIImage *)resizedImage;
@end

