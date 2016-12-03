/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBStructuredSurveyAnswerSet, NSMutableArray, NSMutableDictionary, NSDictionary, NSArray;

@interface FBStructuredSurveyState : NSObject {

	NSString* _surveyID;
	FBStructuredSurveyAnswerSet* _answers;
	NSMutableArray* _pageHistory;
	NSMutableDictionary* _extraData;
	unsigned long long _currentPageIndex;

}

@property (nonatomic,readonly) FBStructuredSurveyAnswerSet * answers; 
@property (nonatomic,copy,readonly) NSString * surveyID; 
@property (assign,nonatomic) unsigned long long currentPageIndex;                  //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraData; 
@property (nonatomic,copy,readonly) NSArray * pageHistory; 
-(void)addExtraData:(id)arg1 forKey:(id)arg2 ;
-(id)initWithSurveyID:(id)arg1 ;
-(NSArray *)pageHistory;
-(void)storeAnswers:(id)arg1 ;
-(void)addDisplayedPageQuestionIDs:(id)arg1 forPageIndex:(unsigned long long)arg2 ;
-(NSString *)surveyID;
-(BOOL)isEqualToSurveyState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)currentPageIndex;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(FBStructuredSurveyAnswerSet *)answers;
-(NSDictionary *)extraData;
@end
