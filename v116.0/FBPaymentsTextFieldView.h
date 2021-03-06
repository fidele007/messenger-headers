/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBPaymentsTextFieldViewDelegate;
@class FBPaymentsTextFieldViewConfiguration, UITextField, UILabel, UITapGestureRecognizer, NSString;

@interface FBPaymentsTextFieldView : UIView <UITextFieldDelegate> {

	FBPaymentsTextFieldViewConfiguration* _configuration;
	UITextField* _textField;
	UILabel* _fieldTitleLabel;
	UILabel* _maskedLabel;
	BOOL _isFieldTitleAsPlaceholder;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<FBPaymentsTextFieldViewDelegate> _delegate;
	NSString* _identifier;
	long long _keyboardType;
	long long _textAutocapitalizationType;
	long long _textAutocoorectionType;

}

@property (assign,nonatomic,__weak) id<FBPaymentsTextFieldViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                           //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long textAutocapitalizationType;                             //@synthesize textAutocapitalizationType=_textAutocapitalizationType - In the implementation block
@property (assign,nonatomic) long long textAutocoorectionType;                                 //@synthesize textAutocoorectionType=_textAutocoorectionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setFieldTitleAsPlaceholder:(BOOL)arg1 ;
-(void)setTextAutocoorectionType:(long long)arg1 ;
-(void)setTextAutocapitalizationType:(long long)arg1 ;
-(long long)textAutocapitalizationType;
-(long long)textAutocoorectionType;
-(void)_layoutFieldTitle:(BOOL)arg1 ;
-(BOOL)_shouldDisplayFieldTitleAsPlaceholder;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBPaymentsTextFieldViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsTextFieldViewDelegate>)delegate;
-(NSString *)identifier;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end

