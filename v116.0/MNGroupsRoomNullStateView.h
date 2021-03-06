/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNFullScreenNullStateViewing.h>

@protocol MNGroupsRoomNullStateViewDelegate;
@class MNProfileImageView, FBFourRoundedCornerView, UILabel, UIButton, MNProfileImageViewController, MNGroupsRoomNullStateViewModel, NSString;

@interface MNGroupsRoomNullStateView : UIView <MNFullScreenNullStateViewing> {

	MNProfileImageView* _profileImageView;
	FBFourRoundedCornerView* _profileImageMaskView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _shareButton;
	MNProfileImageViewController* _profileImageViewController;
	MNGroupsRoomNullStateViewModel* _viewModel;
	id<MNGroupsRoomNullStateViewDelegate> _delegate;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic,__weak) id<MNGroupsRoomNullStateViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                         //@synthesize contentInsets=_contentInsets - In the implementation block
-(double)_expandedHeightForWidth:(double)arg1 ;
-(id)initWithProfileImageViewController:(id)arg1 ;
-(void)_didTapShareButton:(id)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNGroupsRoomNullStateViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGroupsRoomNullStateViewDelegate>)delegate;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setViewModel:(id)arg1 ;
@end

