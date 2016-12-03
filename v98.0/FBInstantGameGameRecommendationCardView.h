/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBInstantGameListTableViewCellDelegate.h>

@protocol FBInstantGameGameRecommendationCardViewDelegate;
@class FBInstantGameUIMetrics, FBInstantGameListUIMetrics, FBUserSession, UIImageView, UIView, UILabel, NSArray, NSString;

@interface FBInstantGameGameRecommendationCardView : UIView <FBInstantGameListTableViewCellDelegate> {

	FBInstantGameUIMetrics* _metrics;
	FBInstantGameListUIMetrics* _gameListMetrics;
	FBUserSession* _session;
	UIImageView* _backgroundImageView;
	UIView* _separatorView;
	UIImageView* _gameIconView;
	UILabel* _titleLabel;
	NSArray* _gameListViewCells;
	id<FBInstantGameGameRecommendationCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameGameRecommendationCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gameListTableCellDidTapPlayButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 gameListItems:(id)arg2 ;
-(void)_didTapCellWithGestureRecognizer:(id)arg1 ;
-(void)initGameListCellsWithGameListItems:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGameGameRecommendationCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGameGameRecommendationCardViewDelegate>)delegate;
@end

