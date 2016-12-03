/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNMessageReactionsDetailViewModel, MNMessageReactionsDetailHeaderView, UIScrollView;

@interface MNMessageReactionsDetailView : UIView {

	MNMessageReactionsDetailViewModel* _viewModel;
	MNMessageReactionsDetailHeaderView* _headerView;
	UIScrollView* _pagingScrollView;

}

@property (nonatomic,readonly) MNMessageReactionsDetailHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIScrollView * pagingScrollView;                              //@synthesize pagingScrollView=_pagingScrollView - In the implementation block
-(void)mn_setBottomContentInset:(double)arg1 ;
-(void)mn_setTopContentInset:(double)arg1 ;
-(void)setPageIndicatorProgress:(double)arg1 ;
-(UIScrollView *)pagingScrollView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNMessageReactionsDetailHeaderView *)headerView;
-(void)setViewModel:(id)arg1 ;
@end

