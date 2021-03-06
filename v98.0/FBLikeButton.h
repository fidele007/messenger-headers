/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage, UIImageView;

@interface FBLikeButton : UIButton {

	UIImage* _iconImageNormal;
	UIImage* _iconImageSelected;
	UIImageView* _iconImageView;

}
-(void)_initializeContent;
-(void)_updateIconForState;
-(CGSize)_sizeWithTitleSize:(CGSize)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForHeight:(double)arg1 ;
-(UIEdgeInsets)_contentEdgeInsetsForContentHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
@end

