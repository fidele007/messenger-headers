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

@interface FBInstantArticleSubscriptionActionViewedData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _subscriptionOptionId;
	NSString* _articleId;
	NSString* _surfaceType;

}

@property (nonatomic,copy) NSString * clientMutationId;                  //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                           //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * subscriptionOptionId;              //@synthesize subscriptionOptionId=_subscriptionOptionId - In the implementation block
@property (nonatomic,copy) NSString * articleId;                         //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,copy) NSString * surfaceType;                       //@synthesize surfaceType=_surfaceType - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)articleId;
-(void)setSubscriptionOptionId:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSurfaceType:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)subscriptionOptionId;
-(NSString *)surfaceType;
@end

