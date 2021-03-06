/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMediaPreviewActionSheetViewDelegate;
@class MNMediaPreviewActionSheetContainerView, UILabel, UIView, UIButton, MNMediaPreviewActionSheetViewModel;

@interface MNMediaPreviewActionSheetView : UIView {

	MNMediaPreviewActionSheetContainerView* _replyView;
	UILabel* _titleLabel;
	UIView* _previewView;
	UIButton* _editButton;
	UIButton* _cancelButton;
	UIView* _sendSeparatorView;
	UIView* _editSeparatorView;
	UIView* _cancelSeparatorView;
	UIView* _strokeView;
	MNMediaPreviewActionSheetViewModel* _viewModel;
	id<MNMediaPreviewActionSheetViewDelegate> _delegate;
	UIButton* _sendButton;

}

@property (assign,nonatomic,__weak) id<MNMediaPreviewActionSheetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                                                //@synthesize sendButton=_sendButton - In the implementation block
-(void)_cancelPressed:(id)arg1 ;
-(void)_sendPressed:(id)arg1 ;
-(void)_editPressed:(id)arg1 ;
-(CGSize)previewSize:(CGSize)arg1 ;
-(void)_updateStrokeView;
-(void)setPreviewView:(id)arg1 viewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMediaPreviewActionSheetViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMediaPreviewActionSheetViewDelegate>)delegate;
-(void)_layoutSubviews;
-(UIButton *)sendButton;
@end

