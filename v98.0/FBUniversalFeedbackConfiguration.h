/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBUniversalFeedbackImageAndTextProvider.h>

@class NSAttributedString, NSArray, NSDictionary, NSString;

@interface FBUniversalFeedbackConfiguration : NSObject <FBUniversalFeedbackImageAndTextProvider> {

	BOOL _followUpQuestionNeeded;
	long long _countOfFeedbackLevels;
	NSAttributedString* _localizedRatingQuestion;
	NSAttributedString* _localizedFeedbackPlaceholderText;
	NSAttributedString* _localizedSubmitFeedbackButtonTitle;
	NSAttributedString* _localizedFeedbackThankyouText;
	NSArray* _orderedAccessibilityLabels;
	NSArray* _orderedLocalizedFeedbackQuestions;
	NSArray* _orderedDefaultButtonImages;
	NSArray* _orderedPressedButtonImages;
	double _gapBetweenButtons;
	NSDictionary* _feedbackTextfieldAttributes;
	CGSize _feedbackButtonSize;
	UIEdgeInsets _viewEdgeInsets;

}

@property (assign,nonatomic) long long countOfFeedbackLevels;                                          //@synthesize countOfFeedbackLevels=_countOfFeedbackLevels - In the implementation block
@property (assign,nonatomic) CGSize feedbackButtonSize;                                                //@synthesize feedbackButtonSize=_feedbackButtonSize - In the implementation block
@property (nonatomic,copy) NSAttributedString * localizedRatingQuestion;                               //@synthesize localizedRatingQuestion=_localizedRatingQuestion - In the implementation block
@property (assign,getter=isFollowUpQuestionNeeded,nonatomic) BOOL followUpQuestionNeeded;              //@synthesize followUpQuestionNeeded=_followUpQuestionNeeded - In the implementation block
@property (nonatomic,copy) NSAttributedString * localizedFeedbackPlaceholderText;                      //@synthesize localizedFeedbackPlaceholderText=_localizedFeedbackPlaceholderText - In the implementation block
@property (nonatomic,copy) NSAttributedString * localizedSubmitFeedbackButtonTitle;                    //@synthesize localizedSubmitFeedbackButtonTitle=_localizedSubmitFeedbackButtonTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * localizedFeedbackThankyouText;                         //@synthesize localizedFeedbackThankyouText=_localizedFeedbackThankyouText - In the implementation block
@property (nonatomic,copy) NSArray * orderedAccessibilityLabels;                                       //@synthesize orderedAccessibilityLabels=_orderedAccessibilityLabels - In the implementation block
@property (nonatomic,copy) NSArray * orderedLocalizedFeedbackQuestions;                                //@synthesize orderedLocalizedFeedbackQuestions=_orderedLocalizedFeedbackQuestions - In the implementation block
@property (nonatomic,copy) NSArray * orderedDefaultButtonImages;                                       //@synthesize orderedDefaultButtonImages=_orderedDefaultButtonImages - In the implementation block
@property (nonatomic,copy) NSArray * orderedPressedButtonImages;                                       //@synthesize orderedPressedButtonImages=_orderedPressedButtonImages - In the implementation block
@property (assign,nonatomic) UIEdgeInsets viewEdgeInsets;                                              //@synthesize viewEdgeInsets=_viewEdgeInsets - In the implementation block
@property (assign,nonatomic) double gapBetweenButtons;                                                 //@synthesize gapBetweenButtons=_gapBetweenButtons - In the implementation block
@property (nonatomic,copy) NSDictionary * feedbackTextfieldAttributes;                                 //@synthesize feedbackTextfieldAttributes=_feedbackTextfieldAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCountOfFeedbackLevels:(long long)arg1 ;
-(void)setGapBetweenButtons:(double)arg1 ;
-(void)setFollowUpQuestionNeeded:(BOOL)arg1 ;
-(void)setFeedbackButtonSize:(CGSize)arg1 ;
-(void)setViewEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setLocalizedRatingQuestion:(NSAttributedString *)arg1 ;
-(void)setLocalizedFeedbackPlaceholderText:(NSAttributedString *)arg1 ;
-(void)setFeedbackTextfieldAttributes:(NSDictionary *)arg1 ;
-(void)setLocalizedFeedbackThankyouText:(NSAttributedString *)arg1 ;
-(void)setOrderedAccessibilityLabels:(NSArray *)arg1 ;
-(void)setOrderedLocalizedFeedbackQuestions:(NSArray *)arg1 ;
-(void)setOrderedDefaultButtonImages:(NSArray *)arg1 ;
-(void)setOrderedPressedButtonImages:(NSArray *)arg1 ;
-(NSArray *)orderedAccessibilityLabels;
-(NSArray *)orderedLocalizedFeedbackQuestions;
-(NSArray *)orderedDefaultButtonImages;
-(NSArray *)orderedPressedButtonImages;
-(long long)countOfFeedbackLevels;
-(NSAttributedString *)localizedRatingQuestion;
-(id)accessibilityLabelForFeedbackButtonWithFeedbackLevel:(long long)arg1 ;
-(id)localizedFeedbackQuestionForFeedbackLevel:(long long)arg1 ;
-(NSAttributedString *)localizedFeedbackPlaceholderText;
-(NSDictionary *)feedbackTextfieldAttributes;
-(NSAttributedString *)localizedSubmitFeedbackButtonTitle;
-(NSAttributedString *)localizedFeedbackThankyouText;
-(id)defaultButtonImageForFeedbackLevel:(long long)arg1 ;
-(id)pressedButtonImageForFeedbackLevel:(long long)arg1 ;
-(CGSize)feedbackButtonSize;
-(BOOL)isFollowUpQuestionNeeded;
-(UIEdgeInsets)viewEdgeInsets;
-(double)gapBetweenButtons;
-(void)setLocalizedSubmitFeedbackButtonTitle:(NSAttributedString *)arg1 ;
@end

