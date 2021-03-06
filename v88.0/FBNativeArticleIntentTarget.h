/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSURL, NSArray;

@interface FBNativeArticleIntentTarget : FBIntentTarget {

	NSString* _graphQLID;
	NSURL* _canonicalURL;

}

@property (nonatomic,copy,readonly) NSString * featuredElementID; 
@property (nonatomic,copy,readonly) NSArray * featuredArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * featuredArticleCanonicalURLs; 
@property (nonatomic,copy,readonly) NSString * graphQLID;                                //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * canonicalURL;                                //@synthesize canonicalURL=_canonicalURL - In the implementation block
+(id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
+(id)nativeArticleTargetWithInstantArticle:(id)arg1 ;
+(id)nativeArticleTargetWithExternalURL:(id)arg1 ;
+(id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 featuredElementID:(id)arg3 featuredArticleIDs:(id)arg4 featuredArticleCanonicalURLs:(id)arg5 ;
-(NSString *)graphQLID;
-(id)fallbackURLs;
-(NSURL *)canonicalURL;
-(id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 featuredElementID:(id)arg3 featuredArticleIDs:(id)arg4 featuredArticleCanonicalURLs:(id)arg5 ;
-(id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2 ;
-(NSString *)featuredElementID;
-(NSArray *)featuredArticleIDs;
-(NSArray *)featuredArticleCanonicalURLs;
-(id)description;
@end

