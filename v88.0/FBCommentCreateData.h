/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBTextWithEntitiesInputMessage, NSArray, NSData, NSNumber;

@interface FBCommentCreateData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _idempotenceToken;
	NSString* _feedbackId;
	FBTextWithEntitiesInputMessage* _message;
	NSArray* _attachments;
	NSData* _photo;
	NSArray* _tracking;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;
	NSNumber* _liveVideoTimestamp;
	NSNumber* _vodVideoTimestamp;

}

@property (nonatomic,copy) NSString * clientMutationId;                           //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                    //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * idempotenceToken;                           //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * feedbackId;                                 //@synthesize feedbackId=_feedbackId - In the implementation block
@property (nonatomic,copy) FBTextWithEntitiesInputMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * attachments;                                 //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSData * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy) NSArray * tracking;                                    //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,copy) NSString * feedbackSource;                             //@synthesize feedbackSource=_feedbackSource - In the implementation block
@property (nonatomic,copy) NSString * feedbackReferrer;                           //@synthesize feedbackReferrer=_feedbackReferrer - In the implementation block
@property (nonatomic,copy) NSNumber * liveVideoTimestamp;                         //@synthesize liveVideoTimestamp=_liveVideoTimestamp - In the implementation block
@property (nonatomic,copy) NSNumber * vodVideoTimestamp;                          //@synthesize vodVideoTimestamp=_vodVideoTimestamp - In the implementation block
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setActorId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(void)setFeedbackId:(NSString *)arg1 ;
-(NSString *)feedbackId;
-(NSString *)feedbackSource;
-(NSString *)feedbackReferrer;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(void)setFeedbackSource:(NSString *)arg1 ;
-(void)setFeedbackReferrer:(NSString *)arg1 ;
-(void)setVodVideoTimestamp:(NSNumber *)arg1 ;
-(void)setLiveVideoTimestamp:(NSNumber *)arg1 ;
-(NSNumber *)vodVideoTimestamp;
-(NSNumber *)liveVideoTimestamp;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)idempotenceToken;
-(void)setTracking:(NSArray *)arg1 ;
-(FBTextWithEntitiesInputMessage *)message;
-(void)setMessage:(FBTextWithEntitiesInputMessage *)arg1 ;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setPhoto:(NSData *)arg1 ;
-(NSArray *)tracking;
-(NSData *)photo;
@end
