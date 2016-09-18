/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBNetworkImageView, UIImageView, UILabel, UIButton, MNGameInfo;

@interface MNGameListTableCell : UITableViewCell {

	FBNetworkImageView* _profileImageView;
	UIImageView* _roundCornerMaskImageView;
	UILabel* _titleLabel;
	UIButton* _actionButton;
	MNGameInfo* _gameInfo;

}

@property (nonatomic,copy) MNGameInfo * gameInfo;              //@synthesize gameInfo=_gameInfo - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 imageDownloader:(id)arg3 ;
-(void)setGameInfo:(MNGameInfo *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(MNGameInfo *)gameInfo;
@end
