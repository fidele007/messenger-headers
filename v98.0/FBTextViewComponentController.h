/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/CKStatefulViewComponentController.h>
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
-(void)didMount;
-(void)didRemount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(void)configureInputAccessoryView;
-(BOOL)canRelinquishStatefulView;
-(void)dealloc;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(FBTextView *)textView;
@end

