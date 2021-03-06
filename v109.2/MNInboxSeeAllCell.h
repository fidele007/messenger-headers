/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, MNThreadCellLayout;

@interface MNInboxSeeAllCell : UITableViewCell {

	UILabel* _seeAllLabel;
	MNThreadCellLayout* _threadCellLayout;
	unsigned long long _numberOfAllItems;

}

@property (nonatomic,retain) MNThreadCellLayout * threadCellLayout;              //@synthesize threadCellLayout=_threadCellLayout - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfAllItems;                //@synthesize numberOfAllItems=_numberOfAllItems - In the implementation block
-(MNThreadCellLayout *)threadCellLayout;
-(void)setNumberOfAllItems:(unsigned long long)arg1 ;
-(unsigned long long)numberOfAllItems;
-(void)setThreadCellLayout:(MNThreadCellLayout *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

