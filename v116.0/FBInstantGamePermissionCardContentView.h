/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGamePermissionCardContentViewDelegate;
@class FBInstantGameUIMetrics, FBQuicksilverGameInfo, FBMemInstantGamePrivacyNotice, FBUserSession, UILabel, UIView, UIButton;

@interface FBInstantGamePermissionCardContentView : UIView {

	FBInstantGameUIMetrics* _metrics;
	FBQuicksilverGameInfo* _gameInfo;
	FBMemInstantGamePrivacyNotice* _privacyNotice;
	FBUserSession* _session;
	UILabel* _gameNameLabel;
	UILabel* _socialContextLabel;
	UILabel* _gameDescriptionLabel;
	UIView* _divider;
	UILabel* _privacyNoticeLabel;
	UILabel* _loadingStatusLabel;
	UIButton* _playButton;
	BOOL _isPermissionGranted;
	id<FBInstantGamePermissionCardContentViewDelegate> _delegate;
	double _percentageCompleted;

}

@property (assign,nonatomic,__weak) id<FBInstantGamePermissionCardContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double percentageCompleted;                                                      //@synthesize percentageCompleted=_percentageCompleted - In the implementation block
-(void)_initViews;
-(void)_userDidTapPlayButton;
-(id)_loadingStatusStringForPercentageCompleted:(float)arg1 ;
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 privacyNotice:(id)arg3 ;
-(void)setPercentageCompleted:(double)arg1 ;
-(double)percentageCompleted;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInstantGamePermissionCardContentViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGamePermissionCardContentViewDelegate>)delegate;
@end

