/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol MNBookingRequestsAdminNotesTextInputViewResizeDelegate;
@class FBTextView, UIView, NSString;

@interface MNBookingRequestsAdminNotesTextInputView : UIView <UITextViewDelegate> {

	FBTextView* _textView;
	UIView* _separatorView;
	id<MNBookingRequestsAdminNotesTextInputViewResizeDelegate> _resizeDelegate;

}

@property (nonatomic,copy,readonly) NSString * inputContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)_textViewSize:(CGSize)arg1 ;
-(id)initWithHint:(id)arg1 content:(id)arg2 resizeDelegate:(id)arg3 ;
-(void)setInputEditable:(BOOL)arg1 ;
-(NSString *)inputContent;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)textViewShouldEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
@end

