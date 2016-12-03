/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class NSMutableArray, NSMapTable, UIView, NSArray, NSDictionary, NSString;

@interface FBPaymentsSimpleFormView : UIView <FBPaymentsEdgeInsetsConfigurable> {

	NSMutableArray* _verticalSeparators;
	NSMutableArray* _horizontalSeparators;
	NSMapTable* _nextTextAndImageViewsMap;
	double _rowHeight;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	BOOL _useDynamicLayoutIfPossible;
	NSArray* _cellLayoutDefinition;
	unsigned long long _horizontalSeparatorOption;
	NSDictionary* _viewByIdentifierMap;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,copy) NSArray * cellLayoutDefinition;                              //@synthesize cellLayoutDefinition=_cellLayoutDefinition - In the implementation block
@property (assign,nonatomic) BOOL useDynamicLayoutIfPossible;                           //@synthesize useDynamicLayoutIfPossible=_useDynamicLayoutIfPossible - In the implementation block
@property (nonatomic,readonly) BOOL sufficientToProceed; 
@property (nonatomic,readonly) long long numberOfRows; 
@property (assign,nonatomic) unsigned long long horizontalSeparatorOption;              //@synthesize horizontalSeparatorOption=_horizontalSeparatorOption - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * viewByIdentifierMap;                 //@synthesize viewByIdentifierMap=_viewByIdentifierMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                                   //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(BOOL)sufficientToProceed;
-(void)focusFieldWithIdentifier:(id)arg1 ;
-(id)initWithCellViewByIdentifierMap:(id)arg1 rowHeight:(double)arg2 ;
-(void)setUseDynamicLayoutIfPossible:(BOOL)arg1 ;
-(void)jumpToNextViewFromView:(id)arg1 ;
-(id)viewByIdentifier:(id)arg1 ;
-(void)setCellLayoutDefinition:(NSArray *)arg1 ;
-(NSDictionary *)viewByIdentifierMap;
-(void)_layoutCellsForContentRect:(CGRect)arg1 ;
-(id)_nextTextAndImageViewAfter:(id)arg1 ;
-(void)_buildNextMap;
-(CGRect)_rowRectForContentRect:(CGRect)arg1 currentRow:(long long)arg2 numberOfRows:(long long)arg3 ;
-(void)_dynamicallyLayoutRowCells:(id)arg1 rowRect:(CGRect)arg2 ;
-(void)_staticallyLayoutRowCells:(id)arg1 rowRect:(CGRect)arg2 ;
-(CGRect)_verticalSeparatorInRow:(CGRect)arg1 prevCellFrame:(CGRect)arg2 ;
-(CGRect)_horizontalSeparatorRectForContentRect:(CGRect)arg1 currentSeparator:(long long)arg2 numberOfRows:(long long)arg3 ;
-(CGRect)_componentRectInRow:(CGRect)arg1 currentComponent:(long long)arg2 numberOfComponents:(long long)arg3 ;
-(CGRect)_componentFrameWithRect:(CGRect)arg1 forView:(id)arg2 ;
-(void)setHorizontalSeparatorOption:(unsigned long long)arg1 ;
-(NSArray *)cellLayoutDefinition;
-(BOOL)useDynamicLayoutIfPossible;
-(unsigned long long)horizontalSeparatorOption;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)resignFirstResponder;
-(id)focusedView;
-(UIEdgeInsets)edgeInsets;
-(long long)numberOfRows;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end
