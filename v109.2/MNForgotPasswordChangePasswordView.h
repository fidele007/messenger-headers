/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNForgotPasswordChangePasswordViewDelegate;
@class MNHeaderView, MNButton, MNFormFieldButtonCell, MNFormFieldTextFieldCell, MNStackedContainerView;

@interface MNForgotPasswordChangePasswordView : UIView {

	MNHeaderView* _headerView;
	MNButton* _continueButton;
	MNFormFieldButtonCell* _continueButtonCell;
	MNFormFieldTextFieldCell* _passwordCell;
	MNStackedContainerView* _stackedContainerView;
	id<MNForgotPasswordChangePasswordViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;                             //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (assign,nonatomic,__weak) id<MNForgotPasswordChangePasswordViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_onPasswordChanged;
-(void)_didTapContinue;
-(MNStackedContainerView *)stackedContainerView;
-(void)focusPasswordTextField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNForgotPasswordChangePasswordViewDelegate>)arg1 ;
-(id<MNForgotPasswordChangePasswordViewDelegate>)delegate;
-(void)hideKeyboard;
@end

