/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInboxAnnouncementViewDelegate;
@class UILabel, UIButton, UIImageView, MNInboxAnnouncementViewModel;

@interface MNInboxAnnouncementView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIImageView* _imageView;
	UIImageView* _imageMaskView;
	MNInboxAnnouncementViewModel* _viewModel;
	id<MNInboxAnnouncementViewDelegate> _delegate;

}

@property (nonatomic,copy) MNInboxAnnouncementViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNInboxAnnouncementViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_layoutContentViews;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_updateDescription;
-(void)_updateViewsVisibility;
-(void)updateImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxAnnouncementViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNInboxAnnouncementViewDelegate>)delegate;
-(MNInboxAnnouncementViewModel *)viewModel;
-(void)_updateActionButton;
-(void)setViewModel:(MNInboxAnnouncementViewModel *)arg1 ;
-(void)_updateTitle;
@end

