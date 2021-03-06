/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@protocol MNBusinessSignupTextFieldDelegate;
@class UIView, UIImage;

@interface MNBusinessSignupTextField : UITextField {

	UIView* _bottomBorder;
	BOOL _canPerformPasteAction;
	BOOL _canPerformActions;
	UIView* _inputAccessoryView;
	UIImage* _leftImage;
	id<MNBusinessSignupTextFieldDelegate> _registrationTextFieldDelegate;

}

@property (assign,nonatomic) BOOL canPerformPasteAction;                                                              //@synthesize canPerformPasteAction=_canPerformPasteAction - In the implementation block
@property (assign,nonatomic) BOOL canPerformActions;                                                                  //@synthesize canPerformActions=_canPerformActions - In the implementation block
@property (nonatomic,retain) UIImage * leftImage;                                                                     //@synthesize leftImage=_leftImage - In the implementation block
@property (assign,nonatomic,__weak) id<MNBusinessSignupTextFieldDelegate> registrationTextFieldDelegate;              //@synthesize registrationTextFieldDelegate=_registrationTextFieldDelegate - In the implementation block
-(void)setCanPerformPasteAction:(BOOL)arg1 ;
-(void)_layoutBottomBorder;
-(BOOL)canPerformPasteAction;
-(BOOL)canPerformActions;
-(void)setCanPerformActions:(BOOL)arg1 ;
-(id<MNBusinessSignupTextFieldDelegate>)registrationTextFieldDelegate;
-(void)setRegistrationTextFieldDelegate:(id<MNBusinessSignupTextFieldDelegate>)arg1 ;
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(void)deleteBackward;
-(id)inputAccessoryView;
-(void)setInputAccessoryView:(id)arg1 ;
-(CGRect)leftViewRectForBounds:(CGRect)arg1 ;
@end

