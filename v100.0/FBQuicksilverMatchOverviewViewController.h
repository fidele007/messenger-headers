/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBNuxStepChainControllerDelegate.h>
#import <Messenger/FBQuicksilverMatchOverviewViewDelegate.h>
#import <Messenger/FBQuicksilverThreadMatchViewControllerDelegate.h>
#import <Messenger/FBQuicksilverPlayerInfoTableViewControllerDelegate.h>

@protocol FBQuicksilverMatchOverviewViewControllerDelegate;
@class FBQuicksilverGameInfo, FBQuicksilverMatchOverviewView, FBUserSession, FBQuicksilverPlayerInfo, FBQuicksilverThreadMatchViewController, FBQuicksilverPlayerInfoTableViewController, UIViewController, NSMutableArray, NSString;

@interface FBQuicksilverMatchOverviewViewController : UIViewController <FBNuxStepChainControllerDelegate, FBQuicksilverMatchOverviewViewDelegate, FBQuicksilverThreadMatchViewControllerDelegate, FBQuicksilverPlayerInfoTableViewControllerDelegate> {

	long long _startScreenMode;
	FBQuicksilverGameInfo* _gameInfo;
	FBQuicksilverMatchOverviewView* _matchOverviewView;
	FBUserSession* _session;
	BOOL _shouldFastStart;
	FBQuicksilverPlayerInfo* _viewerPlayerInfo;
	FBQuicksilverThreadMatchViewController* _threadMatchViewController;
	FBQuicksilverPlayerInfoTableViewController* _allMatchesViewController;
	FBQuicksilverPlayerInfoTableViewController* _leaderboardViewController;
	UIViewController* _currentContentViewController;
	NSMutableArray* _contentViewControllers;
	BOOL _isGameLoaded;
	id<FBQuicksilverMatchOverviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverMatchOverviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isGameLoaded;                                                                 //@synthesize isGameLoaded=_isGameLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(id)initWithStartScreenMode:(long long)arg1 session:(id)arg2 gameInfo:(id)arg3 shouldFastStart:(BOOL)arg4 ;
-(void)quicksilverMatchOverviewViewDidTabSegmentedControl:(id)arg1 withIndex:(long long)arg2 ;
-(void)quicksilverMatchOverviewDidSelectPlayAlone:(id)arg1 ;
-(BOOL)isGameLoaded;
-(void)setIsGameLoaded:(BOOL)arg1 ;
-(BOOL)_shouldShowSoloPlayButton;
-(void)_logFunnelActionForTableData:(id)arg1 indexPath:(id)arg2 ;
-(void)quicksilverPlayerInfoTableViewController:(id)arg1 didFecthTableData:(id)arg2 ;
-(void)quicksilverPlayerInfoTableViewController:(id)arg1 didTapPlayButtonAtIndexPath:(id)arg2 ;
-(void)threadMatchViewController:(id)arg1 didFinishFetchThreadMatchViewModel:(id)arg2 ;
-(void)threadMatchViewController:(id)arg1 didTapPlayButtonWithThreadMatchViewModel:(id)arg2 ;
-(void)setDelegate:(id<FBQuicksilverMatchOverviewViewControllerDelegate>)arg1 ;
-(id<FBQuicksilverMatchOverviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)_setContentViewController:(id)arg1 ;
@end

