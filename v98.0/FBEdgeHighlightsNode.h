/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class ASDisplayNode, NSArray;

@interface FBEdgeHighlightsNode : ASDisplayNode {

	BOOL _showEdgeHighlights;
	ASDisplayNode* _edgeHighlightNodes[4];
	double _edgeHighlightsAlpha[4];
	NSArray* _edgeHighlightColors;
	unsigned long long _displayedEdges;

}

@property (assign,nonatomic) unsigned long long displayedEdges;              //@synthesize displayedEdges=_displayedEdges - In the implementation block
@property (assign,nonatomic) BOOL showEdgeHighlights;                        //@synthesize showEdgeHighlights=_showEdgeHighlights - In the implementation block
-(void)_staticInitialize;
-(void)setEdgeHighlightColor:(id)arg1 forEdges:(unsigned long long)arg2 ;
-(void)setDisplayedEdges:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateEdgeHighlights;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)setShowEdgeHighlights:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_createEdgeHighlightsIfNeeded;
-(unsigned long long)_edgeForIndex:(unsigned long long)arg1 ;
-(void)_updateColorAndAlphaForAllEdges;
-(void)setShowEdgeHighlights:(BOOL)arg1 ;
-(void)setDisplayedEdges:(unsigned long long)arg1 ;
-(void)setAlpha:(double)arg1 forEdges:(unsigned long long)arg2 ;
-(BOOL)showEdgeHighlights;
-(unsigned long long)displayedEdges;
-(id)init;
-(void)layout;
-(void)didLoad;
@end
