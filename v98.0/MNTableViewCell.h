/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MNTableViewCellStyle, UIView, UILabel, UIImageView;

@interface MNTableViewCell : UITableViewCell {

	MNTableViewCellStyle* _cellStyle;
	UIView* _lineSeparator;
	UILabel* _mainLabel;
	UILabel* _iconLabel;
	UIImageView* _mainImageView;

}

@property (nonatomic,readonly) UILabel * mainLabel;                      //@synthesize mainLabel=_mainLabel - In the implementation block
@property (nonatomic,readonly) UILabel * iconLabel;                      //@synthesize iconLabel=_iconLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * mainImageView;              //@synthesize mainImageView=_mainImageView - In the implementation block
@property (assign,nonatomic) BOOL showsLineSeparator; 
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsLineSeparator:(BOOL)arg1 ;
-(UIImageView *)mainImageView;
-(UILabel *)iconLabel;
-(BOOL)showsLineSeparator;
-(void)_updateCellColors;
-(void)_updateCellBackground;
-(void)setMainImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)mainLabel;
-(void)setCellStyle:(id)arg1 ;
@end
