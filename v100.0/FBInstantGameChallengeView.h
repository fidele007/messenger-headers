/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBInstantGameChallengeHeaderViewDelegate.h>

@protocol FBInstantGameChallengeViewDelegate;
@class FBInstantGameUIMetrics, FBInstantGameChallengeHeaderView, UIView, FBCustomActivityIndicatorView;

@interface FBInstantGameChallengeView : UIView <FBInstantGameChallengeHeaderViewDelegate> {

	FBInstantGameUIMetrics* _metrics;
	FBInstantGameChallengeHeaderView* _headerView;
	UIView* _contentView;
	FBCustomActivityIndicatorView* _loadingIndicator;
	BOOL _showLoadingIndicator;
	id<FBInstantGameChallengeViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameChallengeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                                           //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(void)tableHeaderViewDidTapCloseButton:(id)arg1 ;
-(void)setDelegate:(id<FBInstantGameChallengeViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBInstantGameChallengeViewDelegate>)delegate;
-(id)initWithContentView:(id)arg1 ;
-(BOOL)showLoadingIndicator;
@end
