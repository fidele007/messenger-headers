/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UISlider, NSString;

@interface FBSettingsSliderSpecifierTableViewCell : UITableViewCell {

	UILabel* _minLabel;
	UILabel* _maxLabel;
	UISlider* _slider;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UISlider * slider;              //@synthesize slider=_slider - In the implementation block
-(void)setCellTitle:(id)arg1 ;
-(void)updateTitleValue;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setMaxValue:(long long)arg1 ;
-(void)setMinValue:(long long)arg1 ;
-(UISlider *)slider;
-(void)setSliderValue:(long long)arg1 ;
@end

