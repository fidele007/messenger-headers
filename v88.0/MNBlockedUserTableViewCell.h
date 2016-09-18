/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
