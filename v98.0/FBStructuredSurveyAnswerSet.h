/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBStructuredSurveyAnswerSet : NSObject {

	NSMutableDictionary* _answers;
	NSMutableDictionary* _writeInAnswers;

}

@property (nonatomic,retain) NSMutableDictionary * writeInAnswers;              //@synthesize writeInAnswers=_writeInAnswers - In the implementation block
-(void)addAnswer:(id)arg1 forQuestionID:(id)arg2 ;
-(id)answersForQuestionID:(id)arg1 ;
-(id)singleAnswerForQuestionID:(id)arg1 ;
-(id)writeInTextForQuestionID:(id)arg1 ;
-(id)singleAnswerForQuestionID:(id)arg1 subquestionIndex:(unsigned long long)arg2 ;
-(void)setSingleAnswer:(id)arg1 forQuestionID:(id)arg2 ;
-(void)setWriteInText:(id)arg1 forQuestionID:(id)arg2 ;
-(void)toggleAnswer:(id)arg1 forQuestionID:(id)arg2 ;
-(void)setSingleAnswer:(id)arg1 forQuestionID:(id)arg2 subquestionIndex:(unsigned long long)arg3 ;
-(void)setAnswers:(id)arg1 forQuestionID:(id)arg2 ;
-(NSMutableDictionary *)writeInAnswers;
-(BOOL)isEqualToAnswerSet:(id)arg1 ;
-(void)removeAnswer:(id)arg1 forQuestionID:(id)arg2 ;
-(void)addAnswersFromSet:(id)arg1 ;
-(void)setWriteInAnswers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)dictionary;
@end

