/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInstantGameEndGameDataManagerDelegate.h>
#import <Messenger/FBInstantGameFriendLeaderboardCardViewDelegate.h>
#import <Messenger/FBInstantGameChallengeSelectCardViewDelegate.h>
#import <Messenger/FBInstantGameGameRecommendationCardViewDelegate.h>

@protocol FBInstantGameEndGameScrollViewsGeneratorDelegate;
@class FBUserSession, FBQuicksilverGameInfo, FBQuicksilverEndGameInfo, FBInstantGameEndGameDataManager, FBInstantGameGameShareCardViewController, NSString;

@interface FBInstantGameEndGameScrollViewsGenerator : NSObject <FBInstantGameEndGameDataManagerDelegate, FBInstantGameFriendLeaderboardCardViewDelegate, FBInstantGameChallengeSelectCardViewDelegate, FBInstantGameGameRecommendationCardViewDelegate> {

	FBUserSession* _session;
	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverEndGameInfo* _endGameInfo;
	unsigned long long _cardTypeOnEndView;
	FBInstantGameEndGameDataManager* _endGameDataManager;
	/*^block*/id _callbackBlock;
	BOOL _isEndGameScrollViewCreated;
	BOOL _isEndGameInfoScrollViewCreated;
	id<FBInstantGameEndGameScrollViewsGeneratorDelegate> _delegate;
	FBInstantGameGameShareCardViewController* _gameShareCardViewController;

}

@property (assign,nonatomic,__weak) id<FBInstantGameEndGameScrollViewsGeneratorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBInstantGameGameShareCardViewController * gameShareCardViewController;              //@synthesize gameShareCardViewController=_gameShareCardViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 endGameInfo:(id)arg3 shareOptionsConfiguration:(id)arg4 ;
-(BOOL)shouldShowLeaderboardOnEndGameView;
-(void)asyncStartWithCallbackBlock:(/*^block*/id)arg1 ;
-(FBInstantGameGameShareCardViewController *)gameShareCardViewController;
-(void)configureLeaderboardData:(id)arg1 ;
-(void)endGameDataManager:(id)arg1 didFinishFetchCardDataForEndGameViewWithCardDatas:(id)arg2 ;
-(void)endGameDataManager:(id)arg1 didFinishFetchCardDataForEndGameInfoViewWithCardDatas:(id)arg2 ;
-(void)_initCardTypeOnEndView;
-(id)_createCardViewsWithDatas:(id)arg1 ;
-(id)_createViewerInfoCardViewWithData:(id)arg1 ;
-(id)_createFriendLeaderboardCardViewWithData:(id)arg1 ;
-(id)_createChallengeSelectCardViewWithData:(id)arg1 ;
-(id)_createGameRecommendationCardViewWithData:(id)arg1 ;
-(id)_createCardViewWithData:(id)arg1 ;
-(void)instantGameChallengeSelectCardView:(id)arg1 didSelectChallengeWithNewMatchupInfo:(id)arg2 ;
-(void)instantGameChallengeSelectCardViewDidSelectSeeMore:(id)arg1 ;
-(void)didSelectGameWithGameInfo:(id)arg1 ;
-(void)friendLeaderboardCardViewDidTapToPlayWithFriends:(id)arg1 ;
-(void)friendLeaderboardCardView:(id)arg1 didTapToPlayAgainstOpponent:(id)arg2 ;
-(void)setDelegate:(id<FBInstantGameEndGameScrollViewsGeneratorDelegate>)arg1 ;
-(id<FBInstantGameEndGameScrollViewsGeneratorDelegate>)delegate;
@end

