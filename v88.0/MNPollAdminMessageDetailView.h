/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPollDetailAdminMessageViewDelegate;
@class UIView, FBRichTextView, NSMutableArray, UIButton, MNSeenHeadListViewController, MNPollAdminMessageViewModel;

@interface MNPollAdminMessageDetailView : UIView {

	UIView* _topSeparatorView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _questionTextView;
	NSMutableArray* _topOptionViewList;
	FBRichTextView* _moreOptionTextView;
	UIButton* _voteButton;
	UIView* _bottomSeparatorView;
	MNSeenHeadListViewController* _voterListViewController;
	id<MNPollDetailAdminMessageViewDelegate> _delegate;
	MNPollAdminMessageViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNPollDetailAdminMessageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNPollAdminMessageViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(void)_didTapVoteButton;
-(id)initWithFrame:(CGRect)arg1 voterListViewController:(id)arg2 ;
-(void)setDelegate:(id<MNPollDetailAdminMessageViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNPollDetailAdminMessageViewDelegate>)delegate;
-(MNPollAdminMessageViewModel *)viewModel;
-(void)setViewModel:(MNPollAdminMessageViewModel *)arg1 ;
@end

