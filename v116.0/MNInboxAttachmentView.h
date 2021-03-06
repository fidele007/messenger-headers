/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:58 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <FBSharedFramework/MNProfilePreviewing.h>
#import <Messenger/MNInboxTruncatingTextViewDelegate.h>

@protocol MNInboxAttachmentViewDelegate;
@class UIImageView, UILabel, UIButton, MNInboxTruncatingTextView, MNInboxAttachmentViewModel, UIView, NSString;

@interface MNInboxAttachmentView : UIView <MNProfilePreviewing, MNInboxTruncatingTextViewDelegate> {

	UIImageView* _previewImageView;
	UILabel* _titleLabel;
	UIButton* _shareButton;
	UIImageView* _iconView;
	UIImageView* _iconMaskView;
	UIImageView* _previewMaskView;
	MNInboxTruncatingTextView* _truncatingTextView;
	id<MNInboxAttachmentViewDelegate> _delegate;
	MNInboxAttachmentViewModel* _inboxAttachmentViewModel;
	UIView* _previewView;

}

@property (assign,nonatomic,__weak) id<MNInboxAttachmentViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNInboxAttachmentViewModel * inboxAttachmentViewModel;              //@synthesize inboxAttachmentViewModel=_inboxAttachmentViewModel - In the implementation block
@property (nonatomic,retain) UIView * previewView;                                             //@synthesize previewView=_previewView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(id)previewableMontageAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_updatePreview;
-(void)_updatePreviewImage;
-(void)_didTapShare:(id)arg1 ;
-(void)_layoutForPreviewOnlyContent;
-(void)_layoutForPreviewWithDetailContent;
-(void)_updateAttachmentContent;
-(void)_updateDescription;
-(void)_updateViewsVisibility;
-(void)_updateShareButton;
-(void)setInboxAttachmentViewModel:(MNInboxAttachmentViewModel *)arg1 ;
-(MNInboxAttachmentViewModel *)inboxAttachmentViewModel;
-(void)truncatingTextViewDidTapTruncationString:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNInboxAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNInboxAttachmentViewDelegate>)delegate;
-(void)_updateTitleLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setPreviewImage:(id)arg1 ;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end

