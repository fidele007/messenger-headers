/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/FBSegmentedViewCellDelegate.h>
#import <Messenger/FBAccessibilityInvalidationEventsListener.h>
#import <Messenger/FBUIConfigurable.h>
#import <Messenger/FBUIThreadSafeSizable.h>

@protocol FBSegmentedViewDelegate;
@class UIView, UIImageView, UICollectionView, NSMutableArray, NSString;

@interface FBSegmentedView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, FBSegmentedViewCellDelegate, FBAccessibilityInvalidationEventsListener, FBUIConfigurable, FBUIThreadSafeSizable> {

	UIView* _topLineView;
	UIView* _bottomLineView;
	UIImageView* _selectionIndicatorImageView;
	UICollectionView* _collectionView;
	double _remainder;
	BOOL _scrollable;
	NSMutableArray* _attributedTitles;
	NSMutableArray* _highlightedAttributedTitles;
	struct {
		unsigned delegateDidSelectItemAtIndex : 1;
	}  _delegateFlags;
	id<FBSegmentedViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSegmentedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)defaultFBUIConfig;
+(id)newWithItems:(id)arg1 size:(unsigned long long)arg2 selectedIndex:(long long)arg3 ;
+(id)newWithItems:(id)arg1 size:(unsigned long long)arg2 ;
-(void)didReceiveAccessibilityInvalidation;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_setUpCollectionView;
-(void)_setupSelectionIndicatorImageViewWithImage:(id)arg1 ;
-(void)_setupSelectionIndicatorViewForSelectionStyle:(unsigned long long)arg1 ;
-(void)moveSelectionFromConfig:(id)arg1 toConfig:(id)arg2 ;
-(void)scrollToItemAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(CGRect)_frameForSelectionIndicatorAtIndex:(long long)arg1 ;
-(CGSize)_itemSizeAtIndex:(long long)arg1 ;
-(CGSize)_estimatedItemSizeAtIndex:(long long)arg1 ;
-(id)_badgeViewConfigForItem:(id)arg1 highlighted:(BOOL)arg2 ;
-(void)_removeBadgeFromItemAtIndex:(unsigned long long)arg1 ;
-(CGSize)sizeForSegmentAtIndex:(long long)arg1 ;
-(id)viewForSegmentAtIndex:(long long)arg1 ;
-(id)indicesForVisibleItems;
-(void)segmentedViewCellDidSelectItem:(id)arg1 ;
-(unsigned long long)_badgeViewLayoutStyle;
-(void)setDelegate:(id<FBSegmentedViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBSegmentedViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_init;
-(BOOL)canCancelContentTouches;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)config;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)applyConfig:(id)arg1 ;
-(void)_setSelectedIndex:(long long)arg1 ;
@end

