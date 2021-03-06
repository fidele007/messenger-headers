/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNGroupsAttachmentViewDelegate;
@class FBWebImageView, FBWebImageFocusPointLayout, FBRichTextView, UIView, UIButton, MNGroupsAttachmentViewModel, NSString;

@interface MNGroupsAttachmentView : UIControl <MNAttachmentView> {

	FBWebImageView* _coverPhotoImageView;
	FBWebImageFocusPointLayout* _focusLayout;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBRichTextView* _bottomSubtitleView;
	UIView* _dividerView;
	UIButton* _actionButton;
	MNGroupsAttachmentViewModel* _groupsAttachmentViewModel;
	id<MNGroupsAttachmentViewDelegate> _delegate;

}

@property (nonatomic,copy) MNGroupsAttachmentViewModel * groupsAttachmentViewModel;              //@synthesize groupsAttachmentViewModel=_groupsAttachmentViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupsAttachmentViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_updateGroupsLabels;
-(void)_updateButtonWithGroup:(id)arg1 ;
-(void)_updateCoverPhotoImage;
-(void)_didTapGroup;
-(id)initWithImageDownloaderFactory:(id)arg1 ;
-(MNGroupsAttachmentViewModel *)groupsAttachmentViewModel;
-(void)setGroupsAttachmentViewModel:(MNGroupsAttachmentViewModel *)arg1 ;
-(void)setDelegate:(id<MNGroupsAttachmentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNGroupsAttachmentViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

