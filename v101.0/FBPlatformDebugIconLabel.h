/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface FBPlatformDebugIconLabel : UIView {

	UIImageView* _imageView;
	UILabel* _label;

}

@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 fontWeight:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageView:(UIImageView *)arg1 ;
@end
