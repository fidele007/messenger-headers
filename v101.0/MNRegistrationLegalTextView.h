/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRegistrationLegalTextViewDelegate;
@class FBRichTextView, NSURL;

@interface MNRegistrationLegalTextView : UIView {

	FBRichTextView* _legalNoticeTextView;
	NSRange _termsOfServiceStringRange;
	NSRange _privacyPolicyStringRange;
	id<MNRegistrationLegalTextViewDelegate> _delegate;
	NSURL* _termsOfServiceURL;
	NSURL* _privacyPolicyURL;

}

@property (assign,nonatomic,__weak) id<MNRegistrationLegalTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURL * termsOfServiceURL;                                              //@synthesize termsOfServiceURL=_termsOfServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * privacyPolicyURL;                                               //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
-(BOOL)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)legalTextAttributedLabelAction:(id)arg1 withEvent:(id)arg2 ;
-(void)_setLegalText;
-(NSURL *)termsOfServiceURL;
-(NSURL *)privacyPolicyURL;
-(void)setPrivacyPolicyURL:(NSURL *)arg1 ;
-(void)setTermsOfServiceURL:(NSURL *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNRegistrationLegalTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNRegistrationLegalTextViewDelegate>)delegate;
@end
