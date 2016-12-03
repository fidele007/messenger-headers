/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MNPageNullStateCell : UITableViewCell {

	UILabel* _title;
	UIImageView* _icon;
	long long _cellStyle;

}

@property (nonatomic,readonly) UILabel * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImageView * icon;               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) long long cellStyle;              //@synthesize cellStyle=_cellStyle - In the implementation block
+(double)heightThatFits:(CGSize)arg1 forCellItem:(id)arg2 ;
-(void)configureWithCellItem:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)title;
-(UIImageView *)icon;
-(long long)cellStyle;
@end

