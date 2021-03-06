/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNGroupsRoomShareBannerViewDelegate;
@class UIVisualEffectView, UIButton, FBLazyCreator, UILabel, UIView, MNProfileImageViewController, FBImageDownloader, MNGroupsRoomShareBannerViewModel;

@interface MNGroupsRoomShareBannerView : UIView {

	UIVisualEffectView* _backgroundView;
	UIButton* _overlayButton;
	FBLazyCreator* _profileImageViewCreator;
	FBLazyCreator* _customPhotoImageViewCreator;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionIconButton;
	UIView* _bottomSeparatorView;
	MNProfileImageViewController* _profileImageViewController;
	FBImageDownloader* _imageDownloader;
	id<MNGroupsRoomShareBannerViewDelegate> _delegate;
	MNGroupsRoomShareBannerViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomShareBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNGroupsRoomShareBannerViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
-(id)initWithProfileImageViewController:(id)arg1 imageDownloader:(id)arg2 ;
-(void)_didTapOverlayButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNGroupsRoomShareBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNGroupsRoomShareBannerViewDelegate>)delegate;
-(void)tintColorDidChange;
-(MNGroupsRoomShareBannerViewModel *)viewModel;
-(void)setViewModel:(MNGroupsRoomShareBannerViewModel *)arg1 ;
@end

