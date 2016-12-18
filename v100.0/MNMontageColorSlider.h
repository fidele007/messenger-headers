/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageColorSliderDelegate;
@class UISlider, UIImage, UIImageView, UIColor;

@interface MNMontageColorSlider : UIView {

	UISlider* _slider;
	UIImage* _sliderImage;
	UIImageView* _imageView;
	UIEdgeInsets _colorToValueTable[30];
	id<MNMontageColorSliderDelegate> _delegate;
	UIColor* _currentColor;

}

@property (assign,nonatomic,__weak) id<MNMontageColorSliderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * currentColor;                                        //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) float value; 
-(void)_initColorToValueTable;
-(void)_colorChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageColorSliderDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMontageColorSliderDelegate>)delegate;
-(float)value;
-(void)setValue:(float)arg1 ;
-(UIColor *)currentColor;
-(void)setCurrentColor:(UIColor *)arg1 ;
@end
