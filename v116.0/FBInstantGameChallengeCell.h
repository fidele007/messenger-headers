/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBInstantGameChallengeCellDelegate;
@class FBQuicksilverPlayerInfoViewModel, FBInstantGameChallengeViewUIMetrics, UIImageView, UILabel, UIButton, UIView;

@interface FBInstantGameChallengeCell : UITableViewCell {

	FBQuicksilverPlayerInfoViewModel* _viewModel;
	FBInstantGameChallengeViewUIMetrics* _metrics;
	UIImageView* _profileImageView;
	UILabel* _threadNameLabel;
	UIButton* _playButton;
	UIView* _separatorView;
	id<FBInstantGameChallengeCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setProfileImage:(id)arg1 ;
-(void)_didTapToPlay;
-(void)_setProfileImageForViewModel:(id)arg1 images:(id)arg2 ;
-(void)_downloadProfileImagesWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setViewModel:(id)arg1 session:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInstantGameChallengeCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBInstantGameChallengeCellDelegate>)delegate;
@end

