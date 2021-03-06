/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBPaymentsHorizontalSeparatorView;

@interface FBPaymentsCheckoutConfirmationActionTableViewCell : UITableViewCell {

	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	FBPaymentsHorizontalSeparatorView* _bottomSeparatorView;
	unsigned long long _separatorMask;

}

@property (assign,nonatomic) unsigned long long separatorMask;              //@synthesize separatorMask=_separatorMask - In the implementation block
-(void)configureWithConfirmationAction:(id)arg1 checkoutResponse:(id)arg2 isPrimaryAction:(BOOL)arg3 ;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(unsigned long long)separatorMask;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

