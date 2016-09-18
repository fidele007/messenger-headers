/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNPaymentsSetupStackableView.h>
#import <Messenger/FBPaymentsPasscodeDotsViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNPaymentsSetupPinViewDelegate;
@class UITapGestureRecognizer, MNLoadingIndicator, FBPaymentsPasscodeDotsView, FBPaymentsHorizontalSeparatorView, NSString;

@interface MNPaymentsSetupPinView : MNPaymentsSetupStackableView <FBPaymentsPasscodeDotsViewDelegate, UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	MNLoadingIndicator* _loadingIndicator;
	FBPaymentsPasscodeDotsView* _dotsView;
	FBPaymentsHorizontalSeparatorView* _keyboardSeparatorView;
	id<MNPaymentsSetupPinViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsSetupPinViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingIndicator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)minimumSizeThatFits:(CGSize)arg1 ;
-(void)_didTapView;
-(void)passcodeDotsView:(id)arg1 didFinishWithInputText:(id)arg2 ;
-(id)dotsView;
-(void)setShouldShowLoadingIndicator:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNPaymentsSetupPinViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPaymentsSetupPinViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(id)inputAccessoryView;
-(BOOL)shouldShowLoadingIndicator;
@end
