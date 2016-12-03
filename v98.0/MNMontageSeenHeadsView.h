/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNMontageSeenHeadsViewDelegate;
@class UIImageView, UILabel, FBDelayer, MNProfileImageView, MNMontageSeenHeadsViewModel;

@interface MNMontageSeenHeadsView : UIView {

	double _seenHeadSize;
	double _borderWidth;
	UIImageView* _seenHeadBackground;
	UILabel* _seenHeadCountLabel;
	UIImageView* _seenHeadLabelBackground;
	FBDelayer* _delayer;
	MNProfileImageView* _appearingSeenHeadView;
	MNProfileImageView* _disappearingSeenHeadView;
	MNProfileImageView* _waitingSeenHeadView;
	MNProfileImageView* _appearingSeenHeadViewAtAnimationStart;
	MNProfileImageView* _disappearingSeenHeadViewAtAnimationStart;
	MNProfileImageView* _waitingSeenHeadViewAtAnimationStart;
	BOOL _animating;
	id<MNMontageSeenHeadsViewDelegate> _delegate;
	MNMontageSeenHeadsViewModel* _montageSeenHeadsViewModel;

}

@property (assign,nonatomic,__weak) id<MNMontageSeenHeadsViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNMontageSeenHeadsViewModel * montageSeenHeadsViewModel;              //@synthesize montageSeenHeadsViewModel=_montageSeenHeadsViewModel - In the implementation block
-(void)_updateMaskImage;
-(void)_updateSeenHeads;
-(id)initWithSeenHeadSize:(double)arg1 borderWidth:(double)arg2 ;
-(void)setMontageSeenHeadsViewModel:(MNMontageSeenHeadsViewModel *)arg1 ;
-(void)_updateSeenHeadAnimation;
-(void)_startSeenHeadAnimationForSeenHeads:(id)arg1 ;
-(void)_startSeenHeadAnimation;
-(void)_prepareSeenHeadViewForAnimation;
-(void)_nextSeenHeadWithSeenHeadsViewModel:(id)arg1 currentSeenHead:(unsigned long long)arg2 ;
-(void)_showSeenHeadCount;
-(void)_animateSeenHeadTransitionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_nextDisappearingSeenHead;
-(void)_nextAppearingSeenHead;
-(void)_animateSeenHeadsWithDisappearingBlock:(/*^block*/id)arg1 appearingBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(MNMontageSeenHeadsViewModel *)montageSeenHeadsViewModel;
-(void)setDelegate:(id<MNMontageSeenHeadsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMontageSeenHeadsViewDelegate>)delegate;
-(void)_removeAllAnimations;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end

