/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPollDetailAdminMessageViewDelegate;
@class UIView, FBRichTextView, NSMutableArray, UIButton, MNSeenHeadListViewController, UIGestureRecognizer, MNPollAdminMessageViewModel, NSString;

@interface MNPollAdminMessageDetailView : UIView <UIGestureRecognizerDelegate> {

	UIView* _topSeparatorView;
	FBRichTextView* _titleTextView;
	FBRichTextView* _questionTextView;
	NSMutableArray* _topOptionViewList;
	FBRichTextView* _moreOptionTextView;
	UIButton* _voteButton;
	UIView* _bottomSeparatorView;
	MNSeenHeadListViewController* _voterListViewController;
	UIGestureRecognizer* _tapGestureRecognizer;
	id<MNPollDetailAdminMessageViewDelegate> _delegate;
	MNPollAdminMessageViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNPollDetailAdminMessageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNPollAdminMessageViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightThatFitsWithViewModel:(id)arg1 maxWidth:(double)arg2 ;
-(void)_didTapButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 voterListViewController:(id)arg2 ;
-(void)setDelegate:(id<MNPollDetailAdminMessageViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPollDetailAdminMessageViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(MNPollAdminMessageViewModel *)viewModel;
-(void)_handleTap:(id)arg1 ;
-(void)setViewModel:(MNPollAdminMessageViewModel *)arg1 ;
@end
