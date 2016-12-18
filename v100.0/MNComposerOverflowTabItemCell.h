/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNComposerOverflowTabItemCellDelegate;
@class MNTabBarExtensionIconView, UILabel, UIView, UIImageView, MNFadingButton, MNComposerOverflowTabViewModel;

@interface MNComposerOverflowTabItemCell : UICollectionViewCell {

	MNTabBarExtensionIconView* _iconView;
	UILabel* _label;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIImageView* _arrowImageView;
	MNFadingButton* _actionButton;
	id<MNComposerOverflowTabItemCellDelegate> _delegate;
	UIView* _previewView;
	MNComposerOverflowTabViewModel* _overflowViewModel;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowTabItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNTabBarExtensionIconView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) UIView * previewView;                                                   //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,copy) MNComposerOverflowTabViewModel * overflowViewModel;                       //@synthesize overflowViewModel=_overflowViewModel - In the implementation block
+(double)intrinsicCellHeightWithSubtitle:(BOOL)arg1 hasPreview:(BOOL)arg2 ;
-(void)_updatePreviewView;
-(void)_updateSubtitle;
-(void)_updateAccessoryType;
-(void)_updateRenderingMode;
-(void)_updateActionButtonColors;
-(void)_initSubtitleLabelIfNeeded;
-(BOOL)_actionButtonTitleShouldChange:(unsigned long long)arg1 ;
-(void)_initArrowImageViewIfNeeded;
-(void)_initActionButtonWithAccessoryTypeIfNeeded:(unsigned long long)arg1 ;
-(void)setOverflowViewModel:(MNComposerOverflowTabViewModel *)arg1 ;
-(MNComposerOverflowTabViewModel *)overflowViewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNComposerOverflowTabItemCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNComposerOverflowTabItemCellDelegate>)delegate;
-(void)tintColorDidChange;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(MNTabBarExtensionIconView *)iconView;
-(void)_actionButtonPressed:(id)arg1 ;
-(void)_updateTitle;
-(UIView *)previewView;
-(void)setPreviewView:(UIView *)arg1 ;
@end
