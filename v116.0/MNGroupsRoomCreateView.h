/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNStackedContainerScrollView, UITextView, UITableView;

@interface MNGroupsRoomCreateView : UIView {

	MNStackedContainerScrollView* _containerScrollView;
	UITextView* _footerView;
	BOOL _learnMoreFooterHidden;
	UITableView* _tableView;

}

@property (nonatomic,readonly) UITableView * tableView;               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL learnMoreFooterHidden;              //@synthesize learnMoreFooterHidden=_learnMoreFooterHidden - In the implementation block
-(void)_layoutRoomSubviews;
-(void)_layoutFooterView;
-(void)resetTableViewContentOffset;
-(void)setLearnMoreFooterHidden:(BOOL)arg1 ;
-(BOOL)learnMoreFooterHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITableView *)tableView;
@end

