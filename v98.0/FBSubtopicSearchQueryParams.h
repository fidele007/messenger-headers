/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBSubtopicSearchQueryParams : FBGraphQLInput {

	NSString* _queryString;
	NSString* _topicId;
	NSString* _resultType;
	NSString* _defaultResultType;

}

@property (nonatomic,copy) NSString * queryString;                    //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy) NSString * topicId;                        //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,copy) NSString * resultType;                     //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSString * defaultResultType;              //@synthesize defaultResultType=_defaultResultType - In the implementation block
-(NSString *)topicId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTopicId:(NSString *)arg1 ;
-(NSString *)defaultResultType;
-(void)setDefaultResultType:(NSString *)arg1 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(NSString *)resultType;
-(void)setResultType:(NSString *)arg1 ;
@end
