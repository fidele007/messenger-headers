/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBQuicksilverPlayerInfoCell.h>

@protocol FBInstantGamePlayerInfoCompactCellDelegate;
@class FBQuicksilverPlayerInfoView, UIButton, FBInstantGameUIMetrics;

@interface FBInstantGamePlayerInfoCompactCell : FBQuicksilverPlayerInfoCell {

	FBQuicksilverPlayerInfoView* _playerInfoView;
	UIButton* _playButton;
	FBInstantGameUIMetrics* _metrics;
	id<FBInstantGamePlayerInfoCompactCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGamePlayerInfoCompactCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setPlayerProfileImage:(id)arg1 ;
-(void)_didTapToPlay;
-(void)setDelegate:(id<FBInstantGamePlayerInfoCompactCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBInstantGamePlayerInfoCompactCellDelegate>)delegate;
-(void)setViewModel:(id)arg1 ;
@end

