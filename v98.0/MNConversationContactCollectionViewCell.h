/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/MNProfilePreviewing.h>

@protocol MNConversationContactCollectionViewCellDelegate;
@class UILabel, UIImageView, UIView, NSIndexPath, NSString;

@interface MNConversationContactCollectionViewCell : UICollectionViewCell <MNProfilePreviewing> {

	UILabel* _label;
	long long _titleTruncationStyle;
	UIImageView* _selectedCircleView;
	BOOL _preparingForReuse;
	UIView* _imageView;
	UIImageView* _selectedImageView;
	UIView* _imageMaskView;
	NSIndexPath* _indexPath;
	long long _selectionStyle;
	id<MNConversationContactCollectionViewCellDelegate> _delegate;

}

@property (nonatomic,retain) UIView * imageView;                                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * selectedImageView;                                                //@synthesize selectedImageView=_selectedImageView - In the implementation block
@property (nonatomic,retain) UIView * imageMaskView;                                                           //@synthesize imageMaskView=_imageMaskView - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                                          //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                                                         //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (assign,nonatomic,__weak) id<MNConversationContactCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_updateTitleLabelTruncationWithMaxWidth:(double)arg1 ;
-(UIView *)imageMaskView;
-(UIImageView *)selectedImageView;
-(void)_updateSelectedCircleViewAnimated:(BOOL)arg1 ;
-(void)_initializeSelectedStateViews;
-(void)setImageMaskView:(UIView *)arg1 ;
-(void)setNumOfLinesForTextLabel:(unsigned long long)arg1 ;
-(void)setTitleTruncationStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNConversationContactCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNConversationContactCollectionViewCellDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UIView *)imageView;
-(void)setSelectionStyle:(long long)arg1 ;
-(long long)selectionStyle;
-(void)setImageView:(UIView *)arg1 ;
@end

