/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:00 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Messenger/MNTextFieldDelegate.h>
#import <Messenger/MNConfirmationCodeFormViewDelegate.h>

@protocol MNConfirmationCodeFormControllerDelegate;
@class NSArray, MNConfirmationCodeFormView, NSString;

@interface MNConfirmationCodeFormController : NSObject <UITextFieldDelegate, MNTextFieldDelegate, MNConfirmationCodeFormViewDelegate> {

	NSArray* _confirmationCodeCharacterTextFields;
	MNConfirmationCodeFormView* _confirmationCodeFormView;
	BOOL _editingEnabled;
	id<MNConfirmationCodeFormControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNConfirmationCodeFormControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL editingEnabled;                                                       //@synthesize editingEnabled=_editingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfirmationCodeFormView:(id)arg1 ;
-(void)_submitConfirmationCode;
-(void)_setInputWithText:(id)arg1 ;
-(id)_combineInputFromConfirmationCodeCharacterTextFields;
-(void)textFieldDidDeleteBackwards:(id)arg1 ;
-(void)confirmationCodeFormView:(id)arg1 didPasteText:(id)arg2 ;
-(BOOL)editingEnabled;
-(void)setDelegate:(id<MNConfirmationCodeFormControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNConfirmationCodeFormControllerDelegate>)delegate;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setEditingEnabled:(BOOL)arg1 ;
@end

