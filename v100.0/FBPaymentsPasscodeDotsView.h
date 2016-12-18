/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
-(void)setDelegate:(id<FBPaymentsPasscodeDotsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsPasscodeDotsViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
@end
