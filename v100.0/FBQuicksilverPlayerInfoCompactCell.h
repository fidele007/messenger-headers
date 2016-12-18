/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBQuicksilverPlayerInfoCell.h>

@protocol FBQuicksilverPlayerInfoCompactCellDelegate;
@class UILabel, FBQuicksilverPlayerInfoView, UIButton, FBCustomActivityIndicatorView, FBQuicksilverPlayerInfoCompactCellMetrics;

@interface FBQuicksilverPlayerInfoCompactCell : FBQuicksilverPlayerInfoCell {

	UILabel* _rankingLabel;
	FBQuicksilverPlayerInfoView* _playerInfoView;
	UIButton* _playButton;
	BOOL _shouldShowRanking;
	BOOL _shouldShowPlayButton;
	FBCustomActivityIndicatorView* _loadingIndicatorView;
	FBQuicksilverPlayerInfoCompactCellMetrics* _metrics;
	BOOL _isPlayButtonEnabled;
	id<FBQuicksilverPlayerInfoCompactCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverPlayerInfoCompactCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setPlayButtonEnabled:,nonatomic) BOOL isPlayButtonEnabled;                       //@synthesize isPlayButtonEnabled=_isPlayButtonEnabled - In the implementation block
-(void)setPlayerProfileImage:(id)arg1 ;
-(void)_didTapPlayButton;
-(CGSize)_maxSizeForPlayerInfoViewWithinBounds:(CGRect)arg1 ;
-(void)_enablePlayButton;
-(void)animateInPlayButton;
-(void)_animateInPlayButton;
-(void)setPlayButtonEnabled:(BOOL)arg1 ;
-(BOOL)isPlayButtonEnabled;
-(void)setDelegate:(id<FBQuicksilverPlayerInfoCompactCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBQuicksilverPlayerInfoCompactCellDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end
