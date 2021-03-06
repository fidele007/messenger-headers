/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber;

@interface FBNativeBookingRequestStatusUpdateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _requestId;
	NSString* _action;
	NSNumber* _suggestedTime;
	NSNumber* _suggestedEndTime;
	NSString* _serviceId;
	NSString* _messageText;
	NSString* _pageId;
	NSString* _requestOwnerId;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * requestId;                     //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSNumber * suggestedTime;                 //@synthesize suggestedTime=_suggestedTime - In the implementation block
@property (nonatomic,copy) NSNumber * suggestedEndTime;              //@synthesize suggestedEndTime=_suggestedEndTime - In the implementation block
@property (nonatomic,copy) NSString * serviceId;                     //@synthesize serviceId=_serviceId - In the implementation block
@property (nonatomic,copy) NSString * messageText;                   //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * pageId;                        //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * requestOwnerId;                //@synthesize requestOwnerId=_requestOwnerId - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(void)setPageId:(NSString *)arg1 ;
-(void)setSuggestedEndTime:(NSNumber *)arg1 ;
-(void)setSuggestedTime:(NSNumber *)arg1 ;
-(void)setRequestOwnerId:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)suggestedTime;
-(NSNumber *)suggestedEndTime;
-(NSString *)requestOwnerId;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setServiceId:(NSString *)arg1 ;
-(NSString *)serviceId;
@end

