/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDirectionalPanGestureRecognizerDelegate.h>
#import <Messenger/FBOrientationStateDelegate.h>

@protocol FBPagingControllerDelegate, FBPagingControllerDataSource, FBPageableItem;
@class FBDirectionalPanGestureRecognizer, UIView, ASDisplayNode, NSMutableOrderedSet, FBOrientationState, NSString;

@interface FBPagingController : NSObject <FBDirectionalPanGestureRecognizerDelegate, FBOrientationStateDelegate> {

	FBDirectionalPanGestureRecognizer* _panGestureRecognizer;
	id<FBPagingControllerDelegate> _delegate;
	id<FBPagingControllerDataSource> _dataSource;
	UIView* _gestureView;
	unsigned long long _pagingAxis;
	double _nodePadding;
	BOOL _isPaging;
	NSRange _pagingRange;
	ASDisplayNode*<FBPageableItem> _activeNode;
	ASDisplayNode*<FBPageableItem> _nodeThatWasActiveOrBecomingActive;
	ASDisplayNode*<FBPageableItem> _nodeThatMaySettleAsActivePage;
	NSMutableOrderedSet* _nodesThatBeganMoving;
	NSMutableOrderedSet* _pagingRangeNodes;
	NSMutableOrderedSet* _nodesPreparedForPaging;
	id _viewStateConfiguration;
	double _systemTranslation;
	double _systemTranslationAtGestureBegin;
	FBOrientationState* _orientationState;
	BOOL _supportsOrientationRotation;
	BOOL _temporarilyDisableOrientationRotation;

}

@property (nonatomic,retain) ASDisplayNode*<FBPageableItem> displayedNode;                            //@synthesize activeNode=_activeNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBPagingControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPagingControllerDataSource> dataSource;                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) UIView * gestureView;                                             //@synthesize gestureView=_gestureView - In the implementation block
@property (nonatomic,readonly) FBDirectionalPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) unsigned long long pagingAxis;                                           //@synthesize pagingAxis=_pagingAxis - In the implementation block
@property (assign,nonatomic) double nodePadding;                                                      //@synthesize nodePadding=_nodePadding - In the implementation block
@property (nonatomic,readonly) BOOL isPaging;                                                         //@synthesize isPaging=_isPaging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)orientationState:(id)arg1 didChangeToInterfaceOrientation:(long long)arg2 ;
-(BOOL)orientationState:(id)arg1 shouldBlockChangeToInterfaceOrientation:(long long)arg2 ;
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2 ;
-(BOOL)orientationState:(id)arg1 supportsDeviceOrientation:(long long)arg2 ;
-(BOOL)isPaging;
-(void)setPagingAxis:(unsigned long long)arg1 ;
-(void)setGestureView:(UIView *)arg1 ;
-(void)beginPagingWithNode:(id)arg1 ;
-(void)endPaging;
-(void)resetOrientation;
-(void)_handleRotation;
-(void)setDisplayedNode:(ASDisplayNode*<FBPageableItem>)arg1 ;
-(void)_activePageMayChange;
-(void)_nodeMaySettleAsActivePage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_activePageSettledAnimated:(BOOL)arg1 ;
-(void)_setDisplayedNode:(id)arg1 animated:(BOOL)arg2 withVelocity:(double)arg3 ;
-(void)_setOrientationTemporarilyDisabled:(BOOL)arg1 ;
-(void)_setSystemTranslation:(double)arg1 ;
-(void)_updatePagingRangeWithCenterNode:(id)arg1 includeNeighbors:(BOOL)arg2 cullPreviousItems:(BOOL)arg3 forOrientation:(long long)arg4 ;
-(void)_setViewStateConfiguration:(id)arg1 ;
-(id)_pagingRangeNodesCenteredAtNode:(id)arg1 beforeNode:(id*)arg2 afterNode:(id*)arg3 includeNeighbors:(BOOL)arg4 ;
-(BOOL)_currentlySupportsRotation;
-(double)_relevantSizeDimensionForNode:(id)arg1 underOrientation:(long long)arg2 ;
-(void)_setTranslation:(double)arg1 forNode:(id)arg2 ;
-(double)_pagingTranslationForPanRecognizer:(id)arg1 ;
-(double)_pagingVelocityForPanRecognizer:(id)arg1 ;
-(long long)_activePagingDirectionForGestureRecognizer:(id)arg1 ;
-(CGPoint)_nodeTranslationForSystemTranslation:(double)arg1 underOrientation:(long long)arg2 ;
-(double)_pagingComponentForPanTranslation:(CGPoint)arg1 underOrientation:(long long)arg2 ;
-(void)setNodePadding:(double)arg1 ;
-(UIView *)gestureView;
-(unsigned long long)pagingAxis;
-(double)nodePadding;
-(ASDisplayNode*<FBPageableItem>)displayedNode;
-(void)setDataSource:(id<FBPagingControllerDataSource>)arg1 ;
-(void)setDelegate:(id<FBPagingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBPagingControllerDataSource>)dataSource;
-(id<FBPagingControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(FBDirectionalPanGestureRecognizer *)panGestureRecognizer;
-(void)_reset;
-(void)_handlePan:(id)arg1 ;
@end

