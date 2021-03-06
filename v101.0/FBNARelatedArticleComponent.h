/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKCompositeComponent.h>

@protocol FBRichStoryEntityRelatedArticleProtocol, FBIntentHandler;
@class FBAnalyticsInfo, FBNABlockAnalyticsLogger;

@interface FBNARelatedArticleComponent : CKCompositeComponent {

	unsigned char _sectionPlacement;
	id<FBRichStoryEntityRelatedArticleProtocol> _relatedArticle;
	id<FBIntentHandler> _intentHandler;
	FBAnalyticsInfo* _analyticsInfo;
	FBNABlockAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,readonly) id<FBRichStoryEntityRelatedArticleProtocol> relatedArticle;              //@synthesize relatedArticle=_relatedArticle - In the implementation block
@property (nonatomic,readonly) unsigned char sectionPlacement;                                          //@synthesize sectionPlacement=_sectionPlacement - In the implementation block
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler;                                //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;                                         //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,readonly) FBNABlockAnalyticsLogger * analyticsLogger;                              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
+(id)newWithRelatedArticle:(id)arg1 metrics:(const FBNARelatedArticleMetrics*)arg2 intentHandler:(id)arg3 intentAnalyticsInfo:(id)arg4 analyticsLogger:(id)arg5 session:(id)arg6 ;
-(id<FBIntentHandler>)intentHandler;
-(FBAnalyticsInfo *)analyticsInfo;
-(FBNABlockAnalyticsLogger *)analyticsLogger;
-(void)didTapArticle;
-(id<FBRichStoryEntityRelatedArticleProtocol>)relatedArticle;
-(unsigned char)sectionPlacement;
@end

