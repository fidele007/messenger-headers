/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, MNMessageReactionsUpdateExplosionView;

@interface MNMessageReactionsUpdateView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _updateCountLabel;
	BOOL _animationInProgress;
	UILabel* _reactionLabel;
	MNMessageReactionsUpdateExplosionView* _explosionView;

}
-(void)_animateBackgroundViewWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateReactionView;
-(void)_animateExplosionWithBackgroundColor:(id)arg1 ;
-(void)_setInitalValuesForReactionLabel;
-(void)_setFinalValuesForReactionLabel;
-(void)animateWithReactions:(id)arg1 backgroundColor:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

