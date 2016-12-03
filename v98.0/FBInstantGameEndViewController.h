/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBInstantGameEndViewDelegate.h>
#import <Messenger/FBInstantGameLeaderboardViewControllerDelegate.h>

@protocol FBInstantGameEndViewControllerDelegate;
@class FBQuicksilverGameInfo, FBQuicksilverEndGameInfo, FBUserSession, FBInstantGameLeaderboardViewController, FBInstantGameEndView, FBInstantGameLeaderboardData, NSString;

@interface FBInstantGameEndViewController : UIViewController <FBInstantGameEndViewDelegate, FBInstantGameLeaderboardViewControllerDelegate> {

	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverEndGameInfo* _endGameInfo;
	FBUserSession* _session;
	FBInstantGameLeaderboardViewController* _leaderboardViewController;
	FBInstantGameEndView* _gameEndView;
	FBInstantGameLeaderboardData* _leaderboardData;
	id<FBInstantGameEndViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameEndViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissEndViewWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 endGameInfo:(id)arg3 leaderboardData:(id)arg4 ;
-(void)gameEndViewDidTapGameInfoButton:(id)arg1 ;
-(void)gameEndViewDidTapToReplayGame:(id)arg1 ;
-(void)gameEndViewDidTapScoreShareButton:(id)arg1 ;
-(void)gameLeaderboardViewDidScroll:(id)arg1 ;
-(id)gameLeaderboardViewController:(id)arg1 leaderboardCellModelForViewerSection:(id)arg2 viewerRank:(unsigned long long)arg3 ;
-(void)gameLeaderboardViewController:(id)arg1 didFetchLeaderboardData:(id)arg2 ;
-(void)gameLeaderboardViewController:(id)arg1 didFailToFetchLeaderboardDataWithError:(id)arg2 ;
-(void)setDelegate:(id<FBInstantGameEndViewControllerDelegate>)arg1 ;
-(id<FBInstantGameEndViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

