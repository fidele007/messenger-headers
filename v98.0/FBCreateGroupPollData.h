/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBCreateGroupPollData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _questionText;
	NSString* _questionType;
	NSString* _answersState;
	NSString* _targetId;
	NSArray* _options;

}

@property (nonatomic,copy) NSString * clientMutationId;              //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                       //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * questionText;                  //@synthesize questionText=_questionText - In the implementation block
@property (nonatomic,copy) NSString * questionType;                  //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,copy) NSString * answersState;                  //@synthesize answersState=_answersState - In the implementation block
@property (nonatomic,copy) NSString * targetId;                      //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy) NSArray * options;                        //@synthesize options=_options - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)questionText;
-(void)setQuestionText:(NSString *)arg1 ;
-(void)setQuestionType:(NSString *)arg1 ;
-(void)setAnswersState:(NSString *)arg1 ;
-(NSString *)actorId;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)questionType;
-(NSString *)answersState;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)arg1 ;
-(void)setOptions:(NSArray *)arg1 ;
-(NSArray *)options;
@end

