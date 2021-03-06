/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemStructuredSurvey, FBStructuredSurveyState, NSNumber;

@interface FBStructuredSurveyFlowController : NSObject {

	FBMemStructuredSurvey* _survey;
	FBStructuredSurveyState* _state;
	NSNumber* _totalQuestionsInSurvey;

}

@property (nonatomic,__weak,readonly) FBMemStructuredSurvey * survey; 
@property (nonatomic,readonly) FBStructuredSurveyState * state; 
-(FBMemStructuredSurvey *)survey;
-(id)initWithSurvey:(id)arg1 ;
-(BOOL)isFinalPage;
-(id)questionsForCurrentState;
-(unsigned long long)nextQuestionNumber;
-(void)storeAnswers:(id)arg1 forQuestions:(id)arg2 ;
-(unsigned long long)totalQuestionsInSurvey;
-(id)_currentPage;
-(id)_seenQuestionIDs;
-(FBStructuredSurveyState *)state;
-(unsigned long long)currentPageIndex;
@end

