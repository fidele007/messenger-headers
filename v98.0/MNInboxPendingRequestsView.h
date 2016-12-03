/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNInboxPendingRequestsViewDelegate;
@class UIButton, MNInboxPendingRequestsContentView, PABlurView, UIView, MNInboxMessageRequestUnitViewModel;

@interface MNInboxPendingRequestsView : UIView {

	UIButton* _bgButton;
	MNInboxPendingRequestsContentView* _contentView;
	PABlurView* _blurView;
	UIView* _separatorView;
	UIButton* _dismissButton;
	id<MNInboxPendingRequestsViewDelegate> _delegate;

}

@property (nonatomic,retain) MNInboxMessageRequestUnitViewModel * viewModel; 
@property (assign,nonatomic,__weak) id<MNInboxPendingRequestsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_viewTapped;
-(void)_dismissButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxPendingRequestsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNInboxPendingRequestsViewDelegate>)delegate;
-(MNInboxMessageRequestUnitViewModel *)viewModel;
-(void)setViewModel:(MNInboxMessageRequestUnitViewModel *)arg1 ;
@end

