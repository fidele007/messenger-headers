/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface FBExperimentGroupTableViewCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,copy) NSString * titleString; 
@property (nonatomic,copy) NSString * descriptionString; 
+(double)_labelLeftHorizontalPadding;
+(double)_labelRightHorizontalPadding;
+(double)_labelVerticalPadding;
-(double)_contentHorizontalPadding;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setDescriptionString:(NSString *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(NSString *)descriptionString;
@end

