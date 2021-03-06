/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Messenger/FBInlineAdHeaderNodeDelegate.h>

@protocol FBRichStoryElement, FBNativeAdMultiShareContentNodeDelegateFBInlineAdHeaderNodeDelegate, FBRichStoryFrameSetter;
@class FBNativeAdShareContentRedesignNodeMetrics, FBNativeAdMultiShareChildContentRedesignNodeMetrics, FBNativeAdMultiShareContentRedesignHeaderNode, NSDictionary, NSMutableDictionary, NSArray, _FBMultiShareRedesignScrollNode, FBRichStoryBlockDisplayContext, CALayer, UIScrollView, NSString;

@interface FBNativeAdMultiShareContentRedesignNode : ASDisplayNode <UIScrollViewDelegate, FBInlineAdHeaderNodeDelegate> {

	FBNativeAdShareContentRedesignNodeMetrics* _headerMetrics;
	FBNativeAdMultiShareChildContentRedesignNodeMetrics* _childNodeMetrics;
	FBNativeAdMultiShareContentRedesignHeaderNode* _headerNode;
	NSDictionary* _shareNodes;
	NSMutableDictionary* _activeShareNodes;
	NSArray* _shareElements;
	_FBMultiShareRedesignScrollNode* _scrollViewNode;
	FBRichStoryBlockDisplayContext* _displayContext;
	id<FBRichStoryElement> _selectedShare;
	CALayer* _topLayer;
	CALayer* _bottomLayer;
	id<FBNativeAdMultiShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate> _delegate;
	id<FBRichStoryFrameSetter> _frameSetter;

}

@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) FBRichStoryBlockDisplayContext * displayContext;                                                        //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAdMultiShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBRichStoryFrameSetter> frameSetter;                                                                 //@synthesize frameSetter=_frameSetter - In the implementation block
@property (nonatomic,readonly) id<FBRichStoryElement> currentlyCenteredShare; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)setDisplayContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id<FBRichStoryFrameSetter>)frameSetter;
-(void)setFrameSetter:(id<FBRichStoryFrameSetter>)arg1 ;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(CGRect)_currentViewport;
-(id)initWithShareNodes:(id)arg1 shareElements:(id)arg2 titleText:(id)arg3 iconURLString:(id)arg4 iconSize:(CGSize)arg5 bodyText:(id)arg6 isAdDropDownEnabled:(BOOL)arg7 layoutDirection:(long long)arg8 displayContext:(id)arg9 session:(id)arg10 ;
-(void)_didTapChildShareNode:(id)arg1 ;
-(void)setCurrentShare:(id)arg1 ;
-(id)_shareAtPoint:(CGPoint)arg1 ;
-(id)_sharesInRect:(CGRect)arg1 ;
-(CGRect)_layoutShareNodes;
-(void)_updateActiveShareNodes;
-(unsigned long long)_indexOfShare:(id)arg1 ;
-(id<FBRichStoryElement>)currentlyCenteredShare;
-(void)inlineAdHeaderNode:(id)arg1 didTapChevronButton:(id)arg2 ;
-(void)setDelegate:(id<FBNativeAdMultiShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBNativeAdMultiShareContentNodeDelegate><FBInlineAdHeaderNodeDelegate>)delegate;
-(UIScrollView *)scrollView;
-(void)layout;
-(void)_stopAnimation;
-(void)didLoad;
@end

