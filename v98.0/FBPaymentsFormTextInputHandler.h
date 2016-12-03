/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBPaymentsFormTextInputHandlerDelegate;
@class NSCharacterSet, NSString;

@interface FBPaymentsFormTextInputHandler : NSObject <UITextFieldDelegate> {

	id<FBPaymentsFormTextInputHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsFormTextInputHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSCharacterSet * effectiveCharacterSet; 
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long textAutocapitalizationType; 
@property (nonatomic,readonly) long long textAutocoorectionType; 
@property (nonatomic,readonly) BOOL shouldDisableValidation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(BOOL)arg2 ;
-(id)effectiveCharactersFromText:(id)arg1 ;
-(id)processChangeFromState:(id)arg1 toState:(id)arg2 textInputEvent:(long long)arg3 ;
-(NSCharacterSet *)effectiveCharacterSet;
-(id)errorDescriptionForError:(id)arg1 ;
-(unsigned long long)expectedLengthOfEffectiveCharactersWithInputedEffectiveText:(id)arg1 ;
-(long long)textAutocapitalizationType;
-(BOOL)_shouldAllowEditingInTextField:(id)arg1 ;
-(BOOL)shouldDisableValidation;
-(void)_processChangesFromState:(id)arg1 toState:(id)arg2 withReplacementRange:(NSRange)arg3 inTextField:(id)arg4 forEvent:(long long)arg5 ;
-(BOOL)_isEffectiveCharacter:(unsigned short)arg1 ;
-(void)_sanityCheck;
-(void)verifyTextField:(id)arg1 ;
-(long long)textAutocoorectionType;
-(BOOL)isReady;
-(void)setDelegate:(id<FBPaymentsFormTextInputHandlerDelegate>)arg1 ;
-(id<FBPaymentsFormTextInputHandlerDelegate>)delegate;
-(long long)keyboardType;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end

