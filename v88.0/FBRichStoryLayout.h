/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryFrameSetter.h>

@protocol OS_dispatch_queue, FBRichStoryLayoutDelegate, FBRichStoryElementDisplayAttributeCalculator;
@class FBLayoutAttributeStore, NSMutableDictionary, NSObject, FBRichStoryLayoutDescription, FBRichStoryLayoutMetrics, NSArray, NSDictionary, FBRichStoryPresentationState, NSString;

@interface FBRichStoryLayout : NSObject <FBRichStoryFrameSetter> {

	mutex _cacheLock;
	FBLayoutAttributeStore* _layoutAttributeStore;
	NSMutableDictionary* _constrainingSizeCache;
	NSMutableDictionary* _elementSizeCache;
	NSMutableDictionary* _elementLayoutCache;
	NSMutableDictionary* _elementDescriptorCache;
	BOOL _hasBegunComputation;
	BOOL _hasCompletedComputation;
	BOOL _isLeafLayout;
	NSObject*<OS_dispatch_queue> _sizingQueue;
	CGRect _totalBounds;
	id<FBRichStoryLayoutDelegate> _delegate;
	FBRichStoryLayoutDescription* _layoutDescription;
	id<FBRichStoryElementDisplayAttributeCalculator> _calculator;
	FBRichStoryLayoutMetrics* _metrics;
	NSArray* _elements;
	NSDictionary* _elementsByID;
	FBRichStoryPresentationState* _presentationState;
	CGSize _boundingSize;

}

@property (nonatomic,copy) NSArray * elements;                                                                //@synthesize elements=_elements - In the implementation block
@property (nonatomic,copy) NSDictionary * elementsByID;                                                       //@synthesize elementsByID=_elementsByID - In the implementation block
@property (assign,nonatomic) CGSize boundingSize;                                                             //@synthesize boundingSize=_boundingSize - In the implementation block
@property (assign,nonatomic,__weak) id<FBRichStoryElementDisplayAttributeCalculator> calculator;              //@synthesize calculator=_calculator - In the implementation block
@property (nonatomic,retain) FBRichStoryLayoutMetrics * metrics;                                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy) FBRichStoryLayoutDescription * layoutDescription;                                  //@synthesize layoutDescription=_layoutDescription - In the implementation block
@property (nonatomic,copy) FBRichStoryPresentationState * presentationState;                                  //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,retain) FBLayoutAttributeStore * layoutAttributeStore;                                   //@synthesize layoutAttributeStore=_layoutAttributeStore - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * constrainingSizeCache;                                     //@synthesize constrainingSizeCache=_constrainingSizeCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementSizeCache;                                          //@synthesize elementSizeCache=_elementSizeCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementLayoutCache;                                        //@synthesize elementLayoutCache=_elementLayoutCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * elementDescriptorCache;                                    //@synthesize elementDescriptorCache=_elementDescriptorCache - In the implementation block
@property (nonatomic,readonly) mutex* cacheLockPointer; 
@property (assign,nonatomic,__weak) id<FBRichStoryLayoutDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) BOOL hasCompletedComputation; 
+(id)layoutWithBaseLayout:(id)arg1 layoutDescription:(id)arg2 presentationState:(id)arg3 elements:(id)arg4 calculator:(id)arg5 boundingSize:(CGSize)arg6 metrics:(id)arg7 reuseLayoutData:(BOOL)arg8 ;
+(id)_roundedLayoutAttributesFromAttributes:(id)arg1 ;
+(UIEdgeInsets)_contentInsetsForElementDescriptor:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)initWithElements:(id)arg1 layoutDescription:(id)arg2 presentationState:(id)arg3 calculator:(id)arg4 boundingSize:(CGSize)arg5 metrics:(id)arg6 ;
-(id)elementDescriptorForElementID:(id)arg1 ;
-(id)layoutAttributesForElementWithID:(id)arg1 ;
-(id<FBRichStoryElementDisplayAttributeCalculator>)calculator;
-(void)computeLayoutImmediately:(BOOL)arg1 ;
-(FBRichStoryLayoutDescription *)layoutDescription;
-(id)currentElementsWithinFrame:(CGRect)arg1 ;
-(id)existingLayoutAttributesForElementWithID:(id)arg1 ;
-(BOOL)hasCompletedComputation;
-(id)elementLayoutForElementID:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 boundingSize:(CGSize)arg2 ;
-(id)existingElementLayoutForElementID:(id)arg1 ;
-(mutex*)cacheLockPointer;
-(FBLayoutAttributeStore *)layoutAttributeStore;
-(void)setLayoutAttributeStore:(FBLayoutAttributeStore *)arg1 ;
-(NSMutableDictionary *)constrainingSizeCache;
-(void)setConstrainingSizeCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementSizeCache;
-(void)setElementSizeCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementLayoutCache;
-(void)setElementLayoutCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementDescriptorCache;
-(void)setElementDescriptorCache:(NSMutableDictionary *)arg1 ;
-(void)_wipeSyntheticElements;
-(void)setLayoutDescription:(FBRichStoryLayoutDescription *)arg1 ;
-(void)setCalculator:(id<FBRichStoryElementDisplayAttributeCalculator>)arg1 ;
-(void)setBoundingSize:(CGSize)arg1 ;
-(void)_addSyntheticElements;
-(CGSize)_sizeForElement:(id)arg1 constrainingSizeOut:(CGSize*)arg2 ;
-(void)_didCompleteSizingPassSynchronously:(BOOL)arg1 ;
-(void)_clearCacheForElementID:(id)arg1 ;
-(id)_calculateLayoutAttributesForElementDescriptor:(id)arg1 ;
-(BOOL)_elementIDIsEligibleForDisplay:(id)arg1 withFrame:(CGRect)arg2 ;
-(id)_elementForID:(id)arg1 ;
-(id)_elementForElementDescriptor:(id)arg1 ;
-(void)_didUpdateLayoutForElement:(id)arg1 descriptor:(id)arg2 withFrame:(CGRect)arg3 ;
-(id)_layoutAttributesForElementDescriptor:(id)arg1 ;
-(CGRect)_frameForElementDescriptor:(id)arg1 ;
-(void)_didComputeLayout;
-(CGSize)_calculateConstrainingSizeForElementDescriptor:(id)arg1 ;
-(id)_calculateLayoutForElementDescriptor:(id)arg1 withinSize:(CGSize)arg2 ;
-(double)_evaluateConstraint:(id)arg1 forElement:(id)arg2 atPosition:(id)arg3 alongAxis:(unsigned long long)arg4 positionOut:(double*)arg5 ;
-(CGPoint)_anchorOffsetForElement:(id)arg1 ofSize:(CGSize)arg2 ;
-(CGPoint)_constraintOffsetForElement:(id)arg1 ofSize:(CGSize)arg2 ;
-(double)_snappedPositionForElementDescriptor:(id)arg1 ofSize:(CGSize)arg2 atUnsnappedPosition:(double)arg3 alongAxis:(unsigned long long)arg4 ;
-(CGPoint)_originForElement:(id)arg1 ;
-(double)_defaultPaddingBetweenTopElementDescriptor:(id)arg1 bottomElement:(id)arg2 ;
-(id)_defaultElementDescriptorWithID:(id)arg1 baseElementDescriptor:(id)arg2 previousElementDescriptor:(id)arg3 ;
-(double)_evaluatePosition:(id)arg1 ofType:(unsigned long long)arg2 forElement:(id)arg3 alongAxis:(unsigned long long)arg4 forBoundsDetermination:(BOOL)arg5 ;
-(id)_elementDescriptorForID:(id)arg1 relativeToElementDescriptor:(id)arg2 alongAxis:(unsigned long long)arg3 ;
-(unsigned long long)_snapBehaviorForAnchoredPosition:(id)arg1 ;
-(NSDictionary *)elementsByID;
-(void)setElementsByID:(NSDictionary *)arg1 ;
-(void)flushPositionCache;
-(void)flushDescriptorCache;
-(void)flushSizeCacheForElementWithID:(id)arg1 ;
-(CGRect)bounds;
-(void)setDelegate:(id<FBRichStoryLayoutDelegate>)arg1 ;
-(id<FBRichStoryLayoutDelegate>)delegate;
-(NSArray *)elements;
-(id)initWithSize:(CGSize)arg1 ;
-(FBRichStoryLayoutMetrics *)metrics;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(void)setMetrics:(FBRichStoryLayoutMetrics *)arg1 ;
-(CGSize)totalSize;
-(CGSize)boundingSize;
-(void)setPresentationState:(FBRichStoryPresentationState *)arg1 ;
-(FBRichStoryPresentationState *)presentationState;
@end

