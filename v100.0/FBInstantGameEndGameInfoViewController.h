/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBInstantGameEndGameInfoViewDelegate.h>
#import <Messenger/FBInstantGameFriendLeaderboardCardViewDelegate.h>
#import <Messenger/FBInstantGameGameRecommendationCardViewDelegate.h>
#import <Messenger/FBInstantGameChallengeSelectCardViewDelegate.h>

@protocol FBQuicksilverShareOptionsConfiguration, FBInstantGameEndGameInfoViewControllerDelegate;
@class FBUserSession, FBQuicksilverGameInfo, NSString, FBInstantGameEndGameInfoView, FBInstantGameGameShareCardViewController, FBQuicksilverAllMatchesFetcher, NSArray, FBInstantGameFriendsLeaderboardFetcher, FBInstantGameLeaderboardData, FBInstantGameListFetcher;

@interface FBInstantGameEndGameInfoViewController : UIViewController <FBInstantGameEndGameInfoViewDelegate, FBInstantGameFriendLeaderboardCardViewDelegate, FBInstantGameGameRecommendationCardViewDelegate, FBInstantGameChallengeSelectCardViewDelegate> {

	FBUserSession* _session;
	FBQuicksilverGameInfo* _gameInfo;
	id<FBQuicksilverShareOptionsConfiguration> _shareOptionsConfiguration;
	NSString* _threadID;
	FBInstantGameEndGameInfoView* _gameInfoView;
	FBInstantGameGameShareCardViewController* _gameShareCardViewController;
	FBQuicksilverAllMatchesFetcher* _challengeDataFetcher;
	NSArray* _matchupInfos;
	FBInstantGameFriendsLeaderboardFetcher* _leaderboardDataFetcher;
	FBInstantGameLeaderboardData* _leaderboardData;
	FBInstantGameListFetcher* _gameListFetcher;
	NSArray* _gameList;
	BOOL _isChallengeCardFinished;
	BOOL _isLeaderboardCardFinished;
	BOOL _isGameRecommendationCardFinished;
	id<FBInstantGameEndGameInfoViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameEndGameInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)instantGameEndGameInfoViewDidTapBackButton:(id)arg1 ;
-(void)_didFetchLeaderboardData:(id)arg1 withError:(id)arg2 ;
-(void)_didFetchGameList:(id)arg1 withError:(id)arg2 ;
-(void)_didFetchAllMatches:(id)arg1 withError:(id)arg2 ;
-(void)_animateInCardsIfAllFinished;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 shareOptionsConfiguration:(id)arg3 threadID:(id)arg4 ;
-(void)dismissEndGameInfoViewWithCompletion:(/*^block*/id)arg1 ;
-(void)instantGameChallengeSelectCardView:(id)arg1 didSelectChallengeWithNewMatchupInfo:(id)arg2 ;
-(void)instantGameChallengeSelectCardViewDidSelectSeeMore:(id)arg1 ;
-(void)friendLeaderboardCardViewDidTapToPlayWithFriends:(id)arg1 ;
-(void)friendLeaderboardCardView:(id)arg1 didTapToPlayAgainstOpponent:(id)arg2 ;
-(void)didSelectGameWithGameInfo:(id)arg1 ;
-(void)dismissGameShareOptionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<FBInstantGameEndGameInfoViewControllerDelegate>)arg1 ;
-(id<FBInstantGameEndGameInfoViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
