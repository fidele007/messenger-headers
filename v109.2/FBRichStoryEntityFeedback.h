/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityFeedbackProtocol.h>

@protocol FBRichStoryFeedbackDataModel;
@class FBRichStoryEntityFeedbackTarget, NSString;

@interface FBRichStoryEntityFeedback : NSObject <FBRichStoryEntityFeedbackProtocol> {

	id<FBRichStoryFeedbackDataModel> _feedbackDataModel;
	FBRichStoryEntityFeedbackTarget* _feedbackTarget;
	unsigned long long _style;

}

@property (nonatomic,retain) id<FBRichStoryFeedbackDataModel> feedbackDataModel;              //@synthesize feedbackDataModel=_feedbackDataModel - In the implementation block
@property (nonatomic,retain) FBRichStoryEntityFeedbackTarget * feedbackTarget;                //@synthesize feedbackTarget=_feedbackTarget - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                        //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBRichStoryFeedbackDataModel>)feedbackDataModel;
-(FBRichStoryEntityFeedbackTarget *)feedbackTarget;
-(void)setFeedbackTarget:(FBRichStoryEntityFeedbackTarget *)arg1 ;
-(void)setFeedbackDataModel:(id<FBRichStoryFeedbackDataModel>)arg1 ;
-(id)initWithFeedbackTarget:(id)arg1 feedbackDataModel:(id)arg2 style:(unsigned long long)arg3 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end

