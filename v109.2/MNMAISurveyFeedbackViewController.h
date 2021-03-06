/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <FBSharedFramework/FBKeyboardObserverDelegate.h>

@class UIScrollView, FBKeyboardObserver, MNMAIFeedbackView, NSString;

@interface MNMAISurveyFeedbackViewController : UIViewController <FBKeyboardObserverDelegate> {

	UIScrollView* _scrollView;
	FBKeyboardObserver* _keyboardObserver;
	MNMAIFeedbackView* _feedbackView;

}

@property (nonatomic,readonly) MNMAIFeedbackView * feedbackView;              //@synthesize feedbackView=_feedbackView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewModel:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(MNMAIFeedbackView *)feedbackView;
@end

