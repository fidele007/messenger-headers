/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBQuicksilverTopBarViewDelegate.h>
#import <Messenger/FBInstantGameGamePlayListener.h>

@protocol FBQuicksilverTopBarViewControllerDelegate;
@class FBQuicksilverTopBarView, FBQuicksilverInGameNotificationView, FBUserSession, FBQuicksilverSessionInfo, FBQuicksilverGameInfo, NSString;

@interface FBQuicksilverTopBarViewController : UIViewController <FBQuicksilverTopBarViewDelegate, FBInstantGameGamePlayListener> {

	FBQuicksilverTopBarView* _topBarView;
	FBQuicksilverInGameNotificationView* _inGameNotificationView;
	FBUserSession* _session;
	id<FBQuicksilverTopBarViewControllerDelegate> _delegate;
	FBQuicksilverSessionInfo* _sessionInfo;
	FBQuicksilverGameInfo* _gameInfo;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverTopBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBQuicksilverSessionInfo * sessionInfo;                                       //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (nonatomic,copy) FBQuicksilverGameInfo * gameInfo;                                             //@synthesize gameInfo=_gameInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)instantGameDidChangePlayingState:(BOOL)arg1 ;
-(void)setGameInfo:(FBQuicksilverGameInfo *)arg1 ;
-(void)quicksilverTopBarViewDidTapCloseButton:(id)arg1 ;
-(void)quicksilverTopBarViewDidTapChallengeButton:(id)arg1 ;
-(void)_willShowInGameNotification:(id)arg1 ;
-(BOOL)_isFlexibleMode;
-(void)_animateInGameNotificationViewWithConfig:(id)arg1 ;
-(void)_animateInGameNotificationViewToFrame:(CGRect)arg1 delay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBQuicksilverTopBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBQuicksilverTopBarViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
-(FBQuicksilverSessionInfo *)sessionInfo;
-(void)setSessionInfo:(FBQuicksilverSessionInfo *)arg1 ;
-(void)tearDown;
-(FBQuicksilverGameInfo *)gameInfo;
@end

