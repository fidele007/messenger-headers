/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextFieldDelegate.h>

@class FBEmoticonTranslator, UITextField, NSString;

@interface MNPaymentsComposerTextInputHandler : NSObject <UITextFieldDelegate> {

	FBEmoticonTranslator* _emotionTranslator;
	UITextField* _textField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_translateStringForText:(id)arg1 ;
-(id)initWithTextField:(id)arg1 ;
-(void)dealloc;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_textFieldDidChange:(id)arg1 ;
@end

