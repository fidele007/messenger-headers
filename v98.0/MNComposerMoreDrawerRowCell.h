/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol MNComposerMoreDrawerRowCellDelegate;
@class UIButton, UILabel, UIView, MNComposerExtensionModuleItem, NSString;

@interface MNComposerMoreDrawerRowCell : UICollectionViewCell {

	UIButton* _detailButton;
	UILabel* _titleLabel;
	UIView* _topSeparator;
	BOOL _showsTopSeparator;
	id<MNComposerMoreDrawerRowCellDelegate> _delegate;
	MNComposerExtensionModuleItem* _extensionModuleItem;
	double _cellContentHeight;
	UIView* _cellContentView;

}

@property (assign,nonatomic,__weak) id<MNComposerMoreDrawerRowCellDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL showsTopSeparator;                                                  //@synthesize showsTopSeparator=_showsTopSeparator - In the implementation block
@property (assign,nonatomic,__weak) MNComposerExtensionModuleItem * extensionModuleItem;              //@synthesize extensionModuleItem=_extensionModuleItem - In the implementation block
@property (assign,nonatomic) double cellContentHeight;                                                //@synthesize cellContentHeight=_cellContentHeight - In the implementation block
@property (assign,nonatomic,__weak) UIView * cellContentView;                                         //@synthesize cellContentView=_cellContentView - In the implementation block
-(double)_contentHeight;
-(MNComposerMoreDrawerRowCellLayout)_buildLayoutForSize:(CGSize)arg1 ;
-(void)setCellContentHeight:(double)arg1 ;
-(void)_handleDetailButton:(id)arg1 ;
-(double)cellContentHeight;
-(void)setCellContentView:(UIView *)arg1 ;
-(void)setExtensionModuleItem:(MNComposerExtensionModuleItem *)arg1 ;
-(MNComposerExtensionModuleItem *)extensionModuleItem;
-(UIView *)cellContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNComposerMoreDrawerRowCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNComposerMoreDrawerRowCellDelegate>)delegate;
-(NSString *)title;
-(CGSize)intrinsicContentSize;
-(void)prepareForReuse;
-(void)setShowsTopSeparator:(BOOL)arg1 ;
-(BOOL)showsTopSeparator;
@end
