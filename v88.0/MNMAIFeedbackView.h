/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <Messenger/MNMAISurveyLoadingView.h>

@protocol MNMAIFeedbackViewDelegate;
@class UILabel, UIView, MNLoadingView, UIButton, FBTextView, NSString;

@interface MNMAIFeedbackView : UIView <UITextViewDelegate, MNMAISurveyLoadingView> {

	UILabel* _promptLabel;
	UIView* _topBorder;
	UIView* _rightBorder;
	UIView* _bottomBorder;
	UIView* _leftBorder;
	MNLoadingView* _loadingView;
	UIButton* _submitButton;
	UIButton* _dismissButton;
	FBTextView* _textView;
	id<MNMAIFeedbackViewDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBTextView * textView;                               //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAIFeedbackViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didPressSubmit:(id)arg1 ;
-(void)_didPressDismiss:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2 ;
-(void)_didTapBackground:(id)arg1 ;
-(void)setDelegate:(id<MNMAIFeedbackViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNMAIFeedbackViewDelegate>)delegate;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
-(void)setLoading:(BOOL)arg1 ;
@end

