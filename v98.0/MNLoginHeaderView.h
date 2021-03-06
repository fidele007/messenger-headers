/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFormHeaderView.h>

@class UIImage, UIImageView, UILabel;

@interface MNLoginHeaderView : MNFormHeaderView {

	/*^block*/id _titleGenerator;
	UIImage* _logoImage;
	unsigned long long _type;
	UIImageView* _imageView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
-(void)transitionToState:(unsigned long long)arg1 animateWithDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(void)setType:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithType:(unsigned long long)arg1 titleGenerator:(/*^block*/id)arg2 logoImage:(id)arg3 ;
-(void)layoutSubviews;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)_layout;
-(void)_setup;
@end

