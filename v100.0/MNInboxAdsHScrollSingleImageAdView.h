/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNInboxAdsHScrollItemAdView.h>

@protocol MNInboxAdsViewDelegate;
@class UILabel, FBFourRoundedCornerView, UIImageView, UIButton, MNInboxAdViewModel, MNProfileImageView, MNBusinessButtonView;

@interface MNInboxAdsHScrollSingleImageAdView : UIView <MNInboxAdsHScrollItemAdView> {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	FBFourRoundedCornerView* _profileImageMaskView;
	UIImageView* _adImageView;
	UIButton* _settingsButton;
	UIImageView* _roundedCornerView;
	id<MNInboxAdsViewDelegate> _delegate;
	MNInboxAdViewModel* _viewModel;
	MNProfileImageView* _profileImageView;
	MNBusinessButtonView* _buttonView;

}

@property (assign,nonatomic,__weak) id<MNInboxAdsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNInboxAdViewModel * viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) MNProfileImageView * profileImageView;                 //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,readonly) MNBusinessButtonView * buttonView;                     //@synthesize buttonView=_buttonView - In the implementation block
+(CGSize)sizeForViewModel:(id)arg1 size:(CGSize)arg2 ;
-(MNProfileImageView *)profileImageView;
-(void)setAdImage:(id)arg1 ;
-(void)_settingsButtonTapped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNInboxAdsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNInboxAdsViewDelegate>)delegate;
-(MNBusinessButtonView *)buttonView;
-(MNInboxAdViewModel *)viewModel;
-(void)setViewModel:(MNInboxAdViewModel *)arg1 ;
@end

