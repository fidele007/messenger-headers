/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNCompositeAttachmentView.h>
#import <Messenger/MNAttachmentViewWithAttributes.h>

@class MNAttachmentViewAttributes, MNHScrollAttachmentPositionSaver, UIView, MNHScrollAttachmentViewModel, MNCollectionView, NSString;

@interface MNHScrollAttachmentView : UIView <UICollectionViewDelegateFlowLayout, MNPhotoPreviewing, MNCompositeAttachmentView, MNAttachmentViewWithAttributes> {

	MNHScrollAttachmentPositionSaver* _attachmentPositionSaver;
	UIView* _maskingView;
	long long _pageIndexBeforeScroll;
	BOOL _collectionIsScrolling;
	MNHScrollAttachmentViewModel* _viewModel;
	MNAttachmentViewAttributes* _attachmentViewAttributes;
	MNCollectionView* _collectionView;
	MNBubbleViewAttributes _bubbleOverlayAttributes;

}

@property (nonatomic,copy) MNHScrollAttachmentViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) MNBubbleViewAttributes bubbleOverlayAttributes;                   //@synthesize bubbleOverlayAttributes=_bubbleOverlayAttributes - In the implementation block
@property (nonatomic,copy) MNAttachmentViewAttributes * attachmentViewAttributes;              //@synthesize attachmentViewAttributes=_attachmentViewAttributes - In the implementation block
@property (nonatomic,readonly) MNCollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) BOOL collectionIsScrolling;                                     //@synthesize collectionIsScrolling=_collectionIsScrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 attachmentViewAttributes:(id)arg3 styleToViewClassBlock:(/*^block*/id)arg4 ;
+(CGSize)_sizeThatFitsAllSubattachments:(CGSize)arg1 viewModel:(id)arg2 styleToViewClassBlock:(/*^block*/id)arg3 ;
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(MNBubbleViewAttributes)bubbleOverlayAttributes;
-(void)setBubbleOverlayAttributes:(MNBubbleViewAttributes)arg1 ;
-(MNAttachmentViewAttributes *)attachmentViewAttributes;
-(void)setAttachmentViewAttributes:(MNAttachmentViewAttributes *)arg1 ;
-(CGRect)_maskingViewFrame;
-(void)_restoreScrollPosition;
-(long long)_pageIndexForContentOffset:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(CGPoint)_contentOffsetForPageIndex:(long long)arg1 ;
-(void)_logImpression:(long long)arg1 ;
-(void)_saveScrollPosition:(long long)arg1 ;
-(void)_updateMaskingTransparency;
-(void)setCollectionIsScrolling:(BOOL)arg1 ;
-(double)_effectiveItemWidth;
-(long long)_pageIndexForContentOffset:(CGPoint)arg1 ;
-(void)_updateFirstCellCornerMask;
-(id)initWithFrame:(CGRect)arg1 attachmentPositionSaver:(id)arg2 ;
-(BOOL)collectionIsScrolling;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(MNCollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(MNHScrollAttachmentViewModel *)viewModel;
-(void)setViewModel:(MNHScrollAttachmentViewModel *)arg1 ;
@end

