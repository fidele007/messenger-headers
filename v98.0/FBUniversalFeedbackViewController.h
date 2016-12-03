/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:18 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBUniversalFeedbackImageAndTextProvider, FBUniversalFeedbackViewControllerDelegate;
@class UILabel, NSArray, UIButton, UITextField, UIViewController, UIView, NSString;

@interface FBUniversalFeedbackViewController : UIViewController <UITextFieldDelegate> {

	UILabel* _ratingQuestionLabel;
	NSArray* _ratingButtons;
	UIButton* _selectedRatingButton;
	unsigned long long _selectedFeedbackLevel;
	UILabel* _feedbackQuestionLabel;
	UITextField* _feedbackTextField;
	UILabel* _thanksLabel;
	id<FBUniversalFeedbackImageAndTextProvider> _configuration;
	UIViewController* _contentViewController;
	UIView* _ufContainerView;
	id<FBUniversalFeedbackViewControllerDelegate> _delegate;
	long long _state;

}

@property (nonatomic,__weak,readonly) id<FBUniversalFeedbackViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state;                                                            //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 contentViewController:(id)arg2 delegate:(id)arg3 ;
-(void)didPressSubmitFeedbackButton;
-(void)addRatingViews;
-(void)addFeedbackQuestionViews;
-(void)addThankyouViews;
-(void)updateViewForStateAnimated:(BOOL)arg1 ;
-(void)animateButtonsOn:(BOOL)arg1 ;
-(void)updateSelectedRatingButtonFrame;
-(void)didTapRatingButton:(id)arg1 ;
-(void)advanceState;
-(void)_animateUFContainerViewForKeyboardNotification:(id)arg1 ;
-(id)ratingButtons;
-(id)feedbackTextField;
-(id)ratingQuestionLabel;
-(id)feedbackQuestionLabel;
-(id)thanksLabel;
-(void)dealloc;
-(id<FBUniversalFeedbackViewControllerDelegate>)delegate;
-(long long)state;
-(id)navigationItem;
-(void)viewWillLayoutSubviews;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
@end

