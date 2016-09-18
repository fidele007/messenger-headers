/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBQuicksilverPlayerInfoCell.h>

@protocol FBQuicksilverPlayerInfoCompactCellDelegate;
@class UILabel, FBQuicksilverPlayerInfoView, UIButton, FBCustomActivityIndicatorView;

@interface FBQuicksilverPlayerInfoCompactCell : FBQuicksilverPlayerInfoCell {

	UILabel* _rankingLabel;
	FBQuicksilverPlayerInfoView* _playerInfoView;
	UIButton* _playButton;
	BOOL _shouldShowRanking;
	BOOL _shouldShowPlayButton;
	FBCustomActivityIndicatorView* _loadingIndicatorView;
	BOOL _isPlayButtonEnabled;
	id<FBQuicksilverPlayerInfoCompactCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverPlayerInfoCompactCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setPlayButtonEnabled:,nonatomic) BOOL isPlayButtonEnabled;                       //@synthesize isPlayButtonEnabled=_isPlayButtonEnabled - In the implementation block
-(void)_didTapPlayButton;
-(void)setPlayButtonEnabled:(BOOL)arg1 ;
-(CGSize)_maxSizeForPlayerInfoViewWithinBounds:(CGRect)arg1 ;
-(void)setPlayerProfileImage:(id)arg1 ;
-(void)_enablePlayButton;
-(void)_animateInPlayButton;
-(void)animateInPlayButton;
-(BOOL)isPlayButtonEnabled;
-(void)setDelegate:(id<FBQuicksilverPlayerInfoCompactCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBQuicksilverPlayerInfoCompactCellDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end
