/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMontageStatusHeadDetailButtonDelegate.h>

@protocol MNThreadMontageViewDelegate;
@class MNThreadParticipantNameFormatter, UIView, UIButton, MNMontageStatusHeadDetailButton, UIImageView, MNThreadMontageViewModel, MNProfileImageView, MNMontageThumbnailView, MNMontageSeenHeadsView, NSString;

@interface MNThreadMontageView : UIView <MNMontageStatusHeadDetailButtonDelegate> {

	MNThreadParticipantNameFormatter* _nameFormatter;
	UIView* _separatorView;
	UIButton* _viewerProfileImageButton;
	UIButton* _otherParticipantProfileImageButton;
	UIButton* _viewerMontageThumbnailButton;
	UIButton* _otherParticipantMontageThumbnailButton;
	MNMontageStatusHeadDetailButton* _viewerMontageThumbnailDetailButton;
	MNMontageStatusHeadDetailButton* _otherParticipantMontageThumbnailDetailButton;
	UIImageView* _viewerProfileImageMaskView;
	UIImageView* _otherParticipantProfileImageMaskView;
	UIImageView* _viewerMontageThumbnailBorderView;
	UIImageView* _otherParticipantMontageThumbnailBorderView;
	UIView* _viewerMontageOpenComposerPlusView;
	UIView* _viewerMontageOpenComposerBorderView;
	id<MNThreadMontageViewDelegate> _delegate;
	MNThreadMontageViewModel* _viewModel;
	MNProfileImageView* _viewerProfileImageView;
	MNProfileImageView* _otherParticipantProfileImageView;
	MNMontageThumbnailView* _viewerMontageThumbnailView;
	MNMontageThumbnailView* _otherParticipantMontageThumbnailView;
	MNMontageSeenHeadsView* _seenHeadsView;

}

@property (assign,nonatomic,__weak) id<MNThreadMontageViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNThreadMontageViewModel * viewModel;                                           //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * viewerProfileImageView;                                //@synthesize viewerProfileImageView=_viewerProfileImageView - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * otherParticipantProfileImageView;                      //@synthesize otherParticipantProfileImageView=_otherParticipantProfileImageView - In the implementation block
@property (nonatomic,readonly) MNMontageThumbnailView * viewerMontageThumbnailView;                        //@synthesize viewerMontageThumbnailView=_viewerMontageThumbnailView - In the implementation block
@property (nonatomic,readonly) MNMontageThumbnailView * otherParticipantMontageThumbnailView;              //@synthesize otherParticipantMontageThumbnailView=_otherParticipantMontageThumbnailView - In the implementation block
@property (nonatomic,readonly) MNMontageSeenHeadsView * seenHeadsView;                                     //@synthesize seenHeadsView=_seenHeadsView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapButton:(id)arg1 ;
-(void)_updateSeenHeads;
-(void)_updateButtonTitle;
-(id)initWithFrame:(CGRect)arg1 stickerResourceManager:(id)arg2 nameFormatter:(id)arg3 ;
-(MNMontageSeenHeadsView *)seenHeadsView;
-(MNProfileImageView *)viewerProfileImageView;
-(MNProfileImageView *)otherParticipantProfileImageView;
-(MNMontageThumbnailView *)viewerMontageThumbnailView;
-(MNMontageThumbnailView *)otherParticipantMontageThumbnailView;
-(id)_createAndSetupProfileImageMaskView;
-(id)_createAndSetupProfileImageButton;
-(id)_createAndSetupMontageThumbnailBorderView;
-(id)_createAndSetupMontageThumbnailViewWithStickerResourceManager:(id)arg1 ;
-(id)_createAndSetupMontageOpenComposerBorderView;
-(id)_createAndSetupMontageNullStateView;
-(id)_createAndSetupMontageThumbnailButton;
-(id)_createAndSetupMontageThumbnailDetailButtonWithPrimaryTitleFontSize:(double)arg1 secondaryTitleFontSize:(double)arg2 titleAlignment:(long long)arg3 ;
-(void)_updateProfileImageViewVisibility;
-(void)_updateMontageThumbnailViewVisibility;
-(void)_updateMontageDetailButtonVisibility;
-(void)_didTapProfileImage:(id)arg1 ;
-(void)_didTapMontageThumbnail:(id)arg1 ;
-(void)setDelegate:(id<MNThreadMontageViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNThreadMontageViewDelegate>)delegate;
-(MNThreadMontageViewModel *)viewModel;
-(void)setViewModel:(MNThreadMontageViewModel *)arg1 ;
@end

