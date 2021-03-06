/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/CKStatefulViewComponentController.h>
#import <UIKit/UITextViewDelegate.h>

@class FBTextView, NSString;

@interface FBTextViewComponentController : CKStatefulViewComponentController <UITextViewDelegate>

@property (nonatomic,readonly) FBTextView * textView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(id)textViewComponent;
-(void)configureInputAccessoryView;
-(void)didMount;
-(void)didRemount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(BOOL)canRelinquishStatefulView;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(void)dealloc;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
@end

