/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDocumentElementStoryBlockAdapter.h>

@protocol FBNativeArticleRelatedArticlesElementFragment;
@class FBRichStoryRelatedArticlesSectionBlock;

@interface FBRelatedArticlesElementStoryBlockAdapter : FBDocumentElementStoryBlockAdapter {

	FBRichStoryRelatedArticlesSectionBlock* _storyBlock;
	id<FBNativeArticleRelatedArticlesElementFragment> _relatedArticleElementFragment;

}

@property (nonatomic,readonly) id<FBNativeArticleRelatedArticlesElementFragment> relatedArticleElementFragment;              //@synthesize relatedArticleElementFragment=_relatedArticleElementFragment - In the implementation block
@property (nonatomic,readonly) FBRichStoryRelatedArticlesSectionBlock * storyBlock;                                          //@synthesize storyBlock=_storyBlock - In the implementation block
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(FBRichStoryRelatedArticlesSectionBlock *)storyBlock;
-(id)initWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id<FBNativeArticleRelatedArticlesElementFragment>)relatedArticleElementFragment;
-(id)viewModel;
@end

