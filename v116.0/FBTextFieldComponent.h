/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:02 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKStatefulViewComponent.h>

@class NSString;

@interface FBTextFieldComponent : CKStatefulViewComponent {

	FBTextFieldActions _textFieldActions;
	FBTextFieldViewConfiguration _textFieldConfiguration;

}

@property (nonatomic,readonly) FBTextFieldViewConfiguration textFieldConfiguration;              //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,readonly) FBTextFieldActions textFieldActions;                              //@synthesize textFieldActions=_textFieldActions - In the implementation block
@property (nonatomic,copy) NSString * text; 
+(id)newWithConfiguration:(const FBTextFieldViewConfiguration*)arg1 actions:(const FBTextFieldActions*)arg2 size:(const CKComponentSize*)arg3 ;
-(FBTextFieldViewConfiguration)textFieldConfiguration;
-(FBTextFieldActions)textFieldActions;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isFirstResponder;
@end

