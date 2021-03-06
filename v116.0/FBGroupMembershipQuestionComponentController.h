/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKComponentController.h>
#import <Messenger/FBGroupMembershipQuestionAnswerProvider.h>

@class NSString;

@interface FBGroupMembershipQuestionComponentController : CKComponentController <FBGroupMembershipQuestionAnswerProvider> {

	NSString* currentQuestion;
	NSString* currentAnswer;

}

@property (copy) NSString * currentQuestion; 
@property (copy) NSString * currentAnswer; 
-(NSString *)currentQuestion;
-(void)setCurrentQuestion:(NSString *)arg1 ;
-(NSString *)currentAnswer;
-(void)setCurrentAnswer:(NSString *)arg1 ;
-(id)initWithComponent:(id)arg1 ;
@end

