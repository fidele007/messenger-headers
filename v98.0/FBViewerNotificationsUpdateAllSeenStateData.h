/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber;

@interface FBViewerNotificationsUpdateAllSeenStateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSArray* _storyIds;
	NSNumber* _latestTimeSent;
	NSString* _updateType;
	NSString* _source;
	NSString* _environment;
	NSArray* _excludeEnvironments;
	NSNumber* _appBadgeCount;
	NSNumber* _tabBadgeCount;

}

@property (nonatomic,copy) NSString * clientMutationId;                //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                         //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSArray * storyIds;                         //@synthesize storyIds=_storyIds - In the implementation block
@property (nonatomic,copy) NSNumber * latestTimeSent;                  //@synthesize latestTimeSent=_latestTimeSent - In the implementation block
@property (nonatomic,copy) NSString * updateType;                      //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy) NSString * source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * environment;                     //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSArray * excludeEnvironments;              //@synthesize excludeEnvironments=_excludeEnvironments - In the implementation block
@property (nonatomic,copy) NSNumber * appBadgeCount;                   //@synthesize appBadgeCount=_appBadgeCount - In the implementation block
@property (nonatomic,copy) NSNumber * tabBadgeCount;                   //@synthesize tabBadgeCount=_tabBadgeCount - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)latestTimeSent;
-(void)setLatestTimeSent:(NSNumber *)arg1 ;
-(NSArray *)excludeEnvironments;
-(void)setExcludeEnvironments:(NSArray *)arg1 ;
-(NSNumber *)appBadgeCount;
-(void)setAppBadgeCount:(NSNumber *)arg1 ;
-(NSNumber *)tabBadgeCount;
-(void)setTabBadgeCount:(NSNumber *)arg1 ;
-(NSArray *)storyIds;
-(void)setStoryIds:(NSArray *)arg1 ;
-(NSString *)environment;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(void)setEnvironment:(NSString *)arg1 ;
-(NSString *)updateType;
-(void)setUpdateType:(NSString *)arg1 ;
@end

