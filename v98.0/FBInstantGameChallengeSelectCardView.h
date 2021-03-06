/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBInstantGamePlayerInfoCompactCellDelegate.h>

@protocol FBInstantGameChallengeSelectCardViewDelegate;
@class FBUserSession, NSArray, FBQuicksilverPlayerInfoTableViewSection, FBInstantGameRoundableCell, FBInstantGameChallengeHeaderView, UIButton;

@interface FBInstantGameChallengeSelectCardView : UIView <FBInstantGamePlayerInfoCompactCellDelegate> {

	FBUserSession* _session;
	NSArray* _matchupInfos;
	FBQuicksilverPlayerInfoTableViewSection* _playerInfoTableViewSection;
	FBInstantGameRoundableCell* _headerCell;
	FBInstantGameChallengeHeaderView* _challengeHeaderView;
	NSArray* _cellList;
	FBInstantGameRoundableCell* _footerCell;
	UIButton* _seeMoreButton;
	id<FBInstantGameChallengeSelectCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeSelectCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_downloadProfileImages:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)instantGamePlayerInfoCompactCellDidTapToPlay:(id)arg1 ;
-(id)initWithSession:(id)arg1 matchupInfos:(id)arg2 ;
-(void)_didTapSeeMoreButton;
-(void)setDelegate:(id<FBInstantGameChallengeSelectCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGameChallengeSelectCardViewDelegate>)delegate;
@end

