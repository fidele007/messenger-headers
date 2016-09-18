/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASControlNode.h>

@class FBFullBleedTextNode, FBRelatedArticleMetrics, FBMultiresolutionImageNode;

@interface FBRelatedArticleNode : ASControlNode {

	CGSize _coverImageSize;
	FBFullBleedTextNode* _headlineNode;
	FBFullBleedTextNode* _attributionNode;
	FBRelatedArticleMetrics* _metrics;
	long long _layoutDirection;
	FBMultiresolutionImageNode* _coverImageNode;

}

@property (nonatomic,readonly) FBMultiresolutionImageNode * coverImageNode;              //@synthesize coverImageNode=_coverImageNode - In the implementation block
+(CGSize)sizeWithMetrics:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(id)initWithHeadline:(id)arg1 attribution:(id)arg2 coverImageURL:(id)arg3 coverPreviewImage:(id)arg4 metrics:(id)arg5 layoutDirection:(long long)arg6 session:(id)arg7 ;
-(id)initWithHeadline:(id)arg1 kicker:(id)arg2 isSponsored:(BOOL)arg3 coverImageURL:(id)arg4 coverPreviewImage:(id)arg5 metrics:(id)arg6 layoutDirection:(long long)arg7 session:(id)arg8 ;
-(FBMultiresolutionImageNode *)coverImageNode;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layout;
-(BOOL)_hasAttribution;
@end
