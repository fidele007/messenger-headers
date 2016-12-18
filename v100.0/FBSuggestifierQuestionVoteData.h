/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBGravityGeoLocation;

@interface FBSuggestifierQuestionVoteData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _sentiment;
	NSString* _endpoint;
	NSString* _entryPoint;
	NSString* _suggetifierResponseId;
	FBGravityGeoLocation* _locationData;

}

@property (nonatomic,copy) NSString * clientMutationId;                      //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                               //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * sentiment;                             //@synthesize sentiment=_sentiment - In the implementation block
@property (nonatomic,copy) NSString * endpoint;                              //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * entryPoint;                            //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy) NSString * suggetifierResponseId;                 //@synthesize suggetifierResponseId=_suggetifierResponseId - In the implementation block
@property (nonatomic,copy) FBGravityGeoLocation * locationData;              //@synthesize locationData=_locationData - In the implementation block
-(void)setEntryPoint:(NSString *)arg1 ;
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)sentiment;
-(void)setSentiment:(NSString *)arg1 ;
-(NSString *)suggetifierResponseId;
-(void)setSuggetifierResponseId:(NSString *)arg1 ;
-(NSString *)endpoint;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSString *)entryPoint;
-(FBGravityGeoLocation *)locationData;
-(void)setLocationData:(FBGravityGeoLocation *)arg1 ;
@end
