/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBInstantGamePlayerInfoCompactCellDelegate.h>
#import <Messenger/FBInstantGameChallengeViewDelegate.h>

@protocol FBInstantGameChallengeViewControllerDelegate;
@class FBQuicksilverGameInfo, FBUserSession, FBQuicksilverAllMatchesFetcher, FBQuicksilverPlayerInfoTableViewSection, NSArray, FBQuicksilverPlayerInfo, UITableView, FBInstantGameChallengeView, NSString;

@interface FBInstantGameChallengeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, FBInstantGamePlayerInfoCompactCellDelegate, FBInstantGameChallengeViewDelegate> {

	FBQuicksilverGameInfo* _gameInfo;
	FBUserSession* _session;
	FBQuicksilverAllMatchesFetcher* _fetcher;
	FBQuicksilverPlayerInfoTableViewSection* _playerInfoTableViewSection;
	NSArray* _challengeMatchupInfos;
	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	UITableView* _challengeTableView;
	FBInstantGameChallengeView* _challengeView;
	id<FBInstantGameChallengeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didFinishFetchTableData:(id)arg1 error:(id)arg2 ;
-(void)_updateChallengeTableViewWithMatchupSection:(id)arg1 ;
-(void)gameChallengeViewDidTapCloseButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 threadID:(id)arg3 ;
-(void)_downloadProfileImages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)instantGamePlayerInfoCompactCellDidTapToPlay:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGameChallengeViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBInstantGameChallengeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end
