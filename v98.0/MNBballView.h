/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/BballSceneRenderer.h>
#import <Messenger/BballGameDelegate.h>

@protocol MNBballViewDelegate;
@class MNBballScene, MNBballGame, MNBballViewHelper, UILabel, UIView, UIImageView, UIPanGestureRecognizer, NSArray;

@interface MNBballView : UIView <BballSceneRenderer, BballGameDelegate> {

	MNBballScene* _scene;
	MNBballGame* _game;
	MNBballViewHelper* _viewHelper;
	UILabel* _scoreTextView;
	UIView* _bestScoreContainer;
	UILabel* _bestScoreTitle;
	UILabel* _bestScoreTextView;
	UIView* _backboardBoltView;
	UIView* _backboardView;
	UIView* _backboardInnerView;
	UILabel* _feedbackEmoji;
	UIView* _rimView;
	UIView* _tableView;
	UIImageView* _ballView;
	UIImageView* _highScoreUserProfileImageView;
	UIImageView* _userProfileMaskView;
	UILabel* _highScoreLabel;
	UILabel* _highScoreTextView;
	UIPanGestureRecognizer* _panRecognizer;
	NSArray* _scoredEmojiTexts;
	NSArray* _missedEmojiTexts;
	long long _currentBestScore;
	id<MNBballViewDelegate> _delegate;

}

@property (nonatomic,readonly) long long currentBestScore;                         //@synthesize currentBestScore=_currentBestScore - In the implementation block
@property (nonatomic,readonly) long long attemptCount; 
@property (nonatomic,readonly) BOOL wasCheatDetected; 
@property (assign,nonatomic,__weak) id<MNBballViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)wasCheatDetected;
-(void)_showScoreViewAnimated:(id)arg1 ;
-(void)_hideScoreViewAnimated:(id)arg1 ;
-(void)setHighScore:(long long)arg1 byUserId:(id)arg2 ;
-(void)setHighScoreUserProfileImage:(id)arg1 ;
-(long long)currentBestScore;
-(void)bballGameBallIsReady:(id)arg1 ;
-(void)bballGameBallHitRim:(id)arg1 ;
-(void)bballGameMissedShot:(id)arg1 ;
-(void)bballGameScored:(id)arg1 ;
-(void)bballGameOver:(id)arg1 ;
-(void)bballGame:(id)arg1 scoreDidChange:(long long)arg2 ;
-(void)bballSceneUpdateView:(id)arg1 ;
-(void)bballScene:(id)arg1 rimCoversBallDidChange:(BOOL)arg2 ;
-(void)_showFeedbackEmojiFrom:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNBballViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNBballViewDelegate>)delegate;
-(void)_handlePan:(id)arg1 ;
-(long long)attemptCount;
-(void)_updateTransforms;
@end

