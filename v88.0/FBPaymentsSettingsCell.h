/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, FBFourRoundedCornerView, UILabel, UIImageView;

@interface FBPaymentsSettingsCell : UITableViewCell {

	UIView* _lineSeparator;
	FBFourRoundedCornerView* roundedCornerView;
	UILabel* _mainLabel;
	UIImageView* _mainImageView;
	unsigned long long _displayLayoutMode;

}

@property (nonatomic,readonly) UILabel * mainLabel;                             //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * mainImageView;                     //@synthesize mainImageView=_mainImageView - In the implementation block
@property (assign,nonatomic) unsigned long long displayLayoutMode;              //@synthesize displayLayoutMode=_displayLayoutMode - In the implementation block
-(UIImageView *)mainImageView;
-(void)_updateBackgroundColorForHighlighted:(BOOL)arg1 ;
-(unsigned long long)displayLayoutMode;
-(void)setDisplayLayoutMode:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)mainLabel;
@end

