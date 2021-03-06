/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTableViewCell.h>

@class UILabel;

@interface MNBlockedUserTableViewCell : MNTableViewCell {

	UILabel* _blockTypeLabel;
	UILabel* _blockDateLabel;

}

@property (nonatomic,readonly) UILabel * blockTypeLabel;              //@synthesize blockTypeLabel=_blockTypeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * blockDateLabel;              //@synthesize blockDateLabel=_blockDateLabel - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)blockTypeLabel;
-(UILabel *)blockDateLabel;
-(void)layoutSubviews;
@end

