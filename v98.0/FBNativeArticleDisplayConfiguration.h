/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryLayoutDescriptionGenerator;
@class FBRichStoryLayoutMetrics, FBRichStoryBlockDisplayContext;

@interface FBNativeArticleDisplayConfiguration : NSObject {

	id<FBRichStoryLayoutDescriptionGenerator> _layoutGenerator;
	FBRichStoryLayoutMetrics* _metrics;
	FBRichStoryBlockDisplayContext* _context;

}

@property (nonatomic,retain) id<FBRichStoryLayoutDescriptionGenerator> layoutGenerator;              //@synthesize layoutGenerator=_layoutGenerator - In the implementation block
@property (nonatomic,retain) FBRichStoryLayoutMetrics * metrics;                                     //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) FBRichStoryBlockDisplayContext * context;                               //@synthesize context=_context - In the implementation block
+(id)configWithLayoutGenerator:(id)arg1 metrics:(id)arg2 context:(id)arg3 ;
-(id<FBRichStoryLayoutDescriptionGenerator>)layoutGenerator;
-(void)setLayoutGenerator:(id<FBRichStoryLayoutDescriptionGenerator>)arg1 ;
-(FBRichStoryBlockDisplayContext *)context;
-(FBRichStoryLayoutMetrics *)metrics;
-(void)setContext:(FBRichStoryBlockDisplayContext *)arg1 ;
-(void)setMetrics:(FBRichStoryLayoutMetrics *)arg1 ;
@end

