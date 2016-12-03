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

@interface FBLiveWithStartData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _videoId;
	NSString* _coBroadcasterId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * videoId;                       //@synthesize videoId=_videoId - In the implementation block
@property (nonatomic,copy) NSString * coBroadcasterId;               //@synthesize coBroadcasterId=_coBroadcasterId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)videoId;
-(NSString *)clientMutationId;
-(void)setVideoId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)coBroadcasterId;
-(void)setCoBroadcasterId:(NSString *)arg1 ;
@end

