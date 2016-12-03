/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class UIColor, NSArray;

@interface MNStarSliderControl : UIControl {

	unsigned long long _value;
	unsigned long long _maxValue;
	UIColor* _tintColor;
	NSArray* _starButtons;

}

@property (assign,nonatomic) unsigned long long maxValue;              //@synthesize maxValue=_maxValue - In the implementation block
@property (nonatomic,copy) NSArray * starButtons;                      //@synthesize starButtons=_starButtons - In the implementation block
@property (assign,nonatomic) unsigned long long value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                      //@synthesize tintColor=_tintColor - In the implementation block
-(NSArray *)starButtons;
-(id)initWithFrame:(CGRect)arg1 maxValue:(unsigned long long)arg2 ;
-(id)starButtonArrayWithCount:(long long)arg1 ;
-(void)highlightStars;
-(void)setValueForTouch:(id)arg1 ;
-(void)configureStarEmptyImage:(id)arg1 starFilledImage:(id)arg2 ;
-(void)setStarButtons:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setMaxValue:(unsigned long long)arg1 ;
-(unsigned long long)maxValue;
@end
