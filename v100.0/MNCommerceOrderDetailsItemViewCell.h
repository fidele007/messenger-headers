/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@class MNCommerceItemView;

@interface MNCommerceOrderDetailsItemViewCell : UITableViewCell {

	MNCommerceItemView* _itemView;

}

@property (nonatomic,readonly) MNCommerceItemView * itemView;              //@synthesize itemView=_itemView - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 itemView:(id)arg3 ;
-(void)layoutSubviews;
-(MNCommerceItemView *)itemView;
@end

