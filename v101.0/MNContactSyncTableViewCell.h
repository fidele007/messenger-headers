/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTableViewCell.h>

@class MNLoadingView, UILabel, FBBadgeView, NSString;

@interface MNContactSyncTableViewCell : MNTableViewCell {

	MNLoadingView* _loadingView;
	UILabel* _accessoryLabel;
	FBBadgeView* _badgeView;
	long long _state;

}

@property (nonatomic,copy) NSString * accessoryLabelText; 
@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)accessoryLabelText;
-(void)setAccessoryLabelText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)prepareForReuse;
@end

