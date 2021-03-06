/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface FBCollectionViewGridLayout : UICollectionViewLayout {

	delegateOptionalProtocolResponseFlags _;
	NSMutableArray* _sectionOrigins;
	CGSize _contentSize;
	double _currentViewWidth;
	double _spacingBetweenColumns;
	double _minimumSpacingBetweenColumns;
	double _spacingBetweenRows;
	double _backgroundFooterHeight;
	unsigned long long _countOfColumns;
	NSMutableArray* _layoutAttributes;
	NSMutableArray* _layoutSupplementaryAttribues;
	CGSize _gridCellSize;
	UIEdgeInsets _sectionInsets;

}

@property (nonatomic,retain) NSMutableArray * layoutAttributes;                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutSupplementaryAttribues;              //@synthesize layoutSupplementaryAttribues=_layoutSupplementaryAttribues - In the implementation block
@property (assign,nonatomic) CGSize gridCellSize;                                        //@synthesize gridCellSize=_gridCellSize - In the implementation block
@property (assign,nonatomic) double minimumSpacingBetweenColumns;                        //@synthesize minimumSpacingBetweenColumns=_minimumSpacingBetweenColumns - In the implementation block
@property (assign,nonatomic) double spacingBetweenRows;                                  //@synthesize spacingBetweenRows=_spacingBetweenRows - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                                 //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (assign,nonatomic) double backgroundFooterHeight;                              //@synthesize backgroundFooterHeight=_backgroundFooterHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfColumns;                        //@synthesize countOfColumns=_countOfColumns - In the implementation block
-(void)setLayoutSupplementaryAttribues:(NSMutableArray *)arg1 ;
-(BOOL)_delegateIsGridLayoutDelegate;
-(void)_setDelegateOptionalProtocolResponseFlagsForDelegate:(id)arg1 ;
-(id)_backgroundIndexPath;
-(BOOL)_hasSupplementaryBackgroundView;
-(CGSize)_backgroundHeaderSize;
-(void)_computeSpacingBetweenColumnsForSection:(unsigned long long)arg1 ;
-(CGSize)_rowCellSizeForSection:(unsigned long long)arg1 ;
-(CGSize)_bigCellSizeForSection:(unsigned long long)arg1 ;
-(void)_addSmallItemToIndexPath:(id)arg1 inGrid:(id)arg2 ;
-(CGPoint)_logicalPointForIndexPath:(id)arg1 ;
-(void)_addBigItemToIndexPath:(id)arg1 inGrid:(id)arg2 ;
-(void)_addRowItemToIndexPath:(id)arg1 inGrid:(id)arg2 ;
-(CGPoint)_viewOriginForLogicalPoint:(CGPoint)arg1 inSection:(unsigned long long)arg2 ;
-(id)_nextBigSlotInGrid:(id)arg1 afterIndexPath:(id)arg2 ;
-(id)_nextSmallSlotInGrid:(id)arg1 afterIndexPath:(id)arg2 ;
-(id)_nextRowSlotInGrid:(id)arg1 afterIndexPath:(id)arg2 ;
-(double)backgroundFooterHeight;
-(double)_maximumUsableContentWidthForSection:(unsigned long long)arg1 ;
-(id)_indexPathForLogicalPoint:(CGPoint)arg1 inSection:(unsigned long long)arg2 ;
-(BOOL)_isRowCellAtIndexPath:(id)arg1 ;
-(BOOL)_canPlaceCellInGrid:(id)arg1 ofSize:(CGSize)arg2 atIndexPath:(id)arg3 ;
-(CGSize)gridCellSize;
-(void)setGridCellSize:(CGSize)arg1 ;
-(double)minimumSpacingBetweenColumns;
-(void)setMinimumSpacingBetweenColumns:(double)arg1 ;
-(double)spacingBetweenRows;
-(void)setSpacingBetweenRows:(double)arg1 ;
-(void)setBackgroundFooterHeight:(double)arg1 ;
-(unsigned long long)countOfColumns;
-(NSMutableArray *)layoutSupplementaryAttribues;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)setLayoutAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)layoutAttributes;
-(UIEdgeInsets)sectionInsets;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_sectionInsetsForSection:(unsigned long long)arg1 ;
@end

