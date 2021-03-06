/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPaymentsPasscodeInputViewDelegate.h>

@protocol FBPaymentsPasscodeDotsViewDelegate;
@class FBPaymentsPasscodeInputView, NSArray, NSString;

@interface FBPaymentsPasscodeDotsView : UIView <FBPaymentsPasscodeInputViewDelegate> {

	FBPaymentsPasscodeInputView* _inputView;
	unsigned long long _numberOfPasscodeDigits;
	unsigned long long _numberOfPasscodeDigitsEntered;
	NSArray* _dotImageViews;
	CGSize _dotNormalSize;
	CGSize _dotHighightedSize;
	id<FBPaymentsPasscodeDotsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsPasscodeDotsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupDotImages;
-(void)_setNumberOfDigitsEntered:(unsigned long long)arg1 ;
-(void)passcodeInputView:(id)arg1 didChangeInputText:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 numberOfPasscodeDigits:(unsigned long long)arg2 ;
-(void)resetPasscode;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPaymentsPasscodeDotsViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsPasscodeDotsViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canResignFirstResponder;
@end

