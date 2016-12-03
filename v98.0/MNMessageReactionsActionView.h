/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNMessageReactionsContextMenuViewDelegate.h>

@protocol MNMessageReactionsActionViewDelegate;
@class NSMutableArray, MNMessageReactionsActionModel, MNMessageReactionsActionBubbleView, UIView, UITapGestureRecognizer, MNMessageReactionsContextMenuView, NSArray, NSString;

@interface MNMessageReactionsActionView : UIView <MNMessageReactionsContextMenuViewDelegate> {

	NSMutableArray* _buttons;
	MNMessageReactionsActionModel* _reactionsModel;
	MNMessageReactionsActionBubbleView* _buttonsContainer;
	UIView* _cellView;
	UIView* _overlayView;
	UIView* _cellViewport;
	UIEdgeInsets _cellViewportInsets;
	CGRect _cellViewOriginalFrame;
	CGRect _cellViewTargetFrame;
	UITapGestureRecognizer* _tapRecognizer;
	MNMessageReactionsContextMenuView* _contextMenuView;
	BOOL _isAnimating;
	NSArray* _keyframeAnimations;
	double _bottomOffset;
	id<MNMessageReactionsActionViewDelegate> _delegate;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<MNMessageReactionsActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_emptySpaceTapped;
-(id)_buttonForReaction:(id)arg1 ;
-(CGRect)_cellViewportFrame;
-(unsigned long long)_reactionsBubblePosition;
-(unsigned long long)cellAlignemnt;
-(CGRect)_buttonsContainerFrame;
-(void)_setReactionButton:(id)arg1 state:(unsigned long long)arg2 ;
-(void)_animateOverlayAndCellToState:(unsigned long long)arg1 ;
-(void)_animateButtonsContainerToState:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_addKeyframAnimation:(id)arg1 toButton:(id)arg2 ;
-(CGRect)_contextMenuFrameForState:(unsigned long long)arg1 ;
-(double)_buttonsContainerArrowPointerOffset;
-(CGPoint)cellOffset;
-(void)_animateButtonsToState:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showButtonsWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideButtonsWithCompletion:(/*^block*/id)arg1 ;
-(void)messageReactionsContextMenuView:(id)arg1 didSelectAction:(id)arg2 ;
-(id)initWithReactions:(id)arg1 menuActions:(id)arg2 frame:(CGRect)arg3 ;
-(void)setCellView:(id)arg1 withFrame:(CGRect)arg2 viewportInsets:(UIEdgeInsets)arg3 ;
-(void)setStateAnimated:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setReactionAnimations:(id)arg1 ;
-(void)setBottomOffset:(double)arg1 withDuration:(double)arg2 options:(unsigned long long)arg3 ;
-(void)setDelegate:(id<MNMessageReactionsActionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageReactionsActionViewDelegate>)delegate;
-(unsigned long long)state;
-(void)_buttonTapped:(id)arg1 ;
-(void)_layoutButtons;
-(void)_setViewState:(unsigned long long)arg1 ;
@end

