/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@protocol FBActionSheetButtonDelegate;
@class FBActionSheetButtonMetrics, UIView, UIImageView, FBNetworkImageView, UILabel, CAShapeLayer, FBActionSheetButtonItem, FBPopoverActionSheet;

@interface FBActionSheetButton : UIControl {

	FBActionSheetButtonMetrics* _metrics;
	UIView* _scalingView;
	UIImageView* _iconView;
	FBNetworkImageView* _networkImageView;
	UILabel* _titleLabel;
	UILabel* _detailTextLabel;
	UIImageView* _checkmarkImageView;
	UIView* _bottomSeperatorLine;
	CAShapeLayer* _dotLayer;
	UIView* _topLeftSeparatorLineHighlight;
	UIView* _topRightSeparatorLineHighlight;
	BOOL _displayBottomSeperator;
	id<FBActionSheetButtonDelegate> _delegate;
	FBActionSheetButtonItem* _buttonItem;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (assign,nonatomic,__weak) id<FBActionSheetButtonDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBActionSheetButtonItem * buttonItem;                        //@synthesize buttonItem=_buttonItem - In the implementation block
@property (assign,nonatomic,__weak) FBPopoverActionSheet * popoverActionSheet;              //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
@property (assign,nonatomic) BOOL displayBottomSeperator;                                   //@synthesize displayBottomSeperator=_displayBottomSeperator - In the implementation block
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(void)_pressed:(id)arg1 event:(id)arg2 ;
-(CGRect)_labelsFrameThatFits:(CGSize)arg1 ;
-(CGSize)_checkmarkSizeIfConsidered;
-(CGRect)_iconFrameThatFits:(CGSize)arg1 ;
-(CGRect)_networkImageFrameThatFits:(CGSize)arg1 ;
-(CGSize)_checkmarkSize;
-(CGRect)_frameThatFits:(CGSize)arg1 iconSize:(CGSize)arg2 ;
-(BOOL)_needsToConsiderCheckmarkSizeInWidthCalculation;
-(id)initWithButtonItem:(id)arg1 metrics:(id)arg2 ;
-(void)invalidateFontSize;
-(void)setDisplayBottomSeperator:(BOOL)arg1 ;
-(BOOL)displayBottomSeperator;
-(void)setDelegate:(id<FBActionSheetButtonDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBActionSheetButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateTextColors;
-(unsigned long long)accessibilityTraits;
-(id)titleFont;
-(FBActionSheetButtonItem *)buttonItem;
-(id)detailText;
-(id)detailFont;
@end

