/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryLayout.h>
#import <Messenger/FBRichStoryElementDisplayAttributeCalculator.h>

@class NSMutableDictionary, FBNativeAdMultiShareChildContentNodeMetrics, NSDictionary, FBRichStoryBlockDisplayContext, NSString;

@interface FBNativeAdMultiShareLayout : FBRichStoryLayout <FBRichStoryElementDisplayAttributeCalculator> {

	NSMutableDictionary* _blockLayouts;
	double _fitHeight;
	FBNativeAdMultiShareChildContentNodeMetrics* _childShareNodeMetrics;
	NSDictionary* _presentationAttributes;
	FBRichStoryBlockDisplayContext* _displayContext;
	CGSize _constrainingSize;

}

@property (nonatomic,copy) NSDictionary * presentationAttributes;                          //@synthesize presentationAttributes=_presentationAttributes - In the implementation block
@property (nonatomic,retain) FBRichStoryBlockDisplayContext * displayContext;              //@synthesize displayContext=_displayContext - In the implementation block
@property (assign,nonatomic) CGSize constrainingSize;                                      //@synthesize constrainingSize=_constrainingSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(FBRichStoryBlockDisplayContext *)displayContext;
-(id)layoutForElement:(id)arg1 descriptor:(id)arg2 presentationAttributes:(id)arg3 constrainingSize:(CGSize)arg4 ;
-(CGSize)constrainingSize;
-(void)setConstrainingSize:(CGSize)arg1 ;
-(void)setPresentationAttributes:(NSDictionary *)arg1 ;
-(id)initWithShareBlocks:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(double)_generateFitHeightForShareBlocks:(id)arg1 withChildShareNodeMetrics:(id)arg2 isRedesignEnabled:(BOOL)arg3 ;
-(double)_generateHeaderNodeFitHeightForRedesignMultiShareAdObject:(id)arg1 withShareNodeMetrics:(id)arg2 ;
-(id)_layoutDescriptionForBlocks:(id)arg1 withChildShareNodeMetrics:(id)arg2 ;
-(CGSize)_shareConstrainingSizeWithChildShareNodeMetrics:(id)arg1 ;
-(NSDictionary *)presentationAttributes;
@end

