/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNHeaderView, MNBusinessSignupTextField, MNStackedContainerView, MNButton, UITextField;

@interface MNBusinessSignupEmailView : UIView {

	MNHeaderView* _headerView;
	MNBusinessSignupTextField* _emailField;
	MNStackedContainerView* _stackedContainerView;
	MNButton* _continueButton;

}

@property (nonatomic,readonly) MNStackedContainerView * stackedContainerView;              //@synthesize stackedContainerView=_stackedContainerView - In the implementation block
@property (nonatomic,readonly) UITextField * emailField;                                   //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,readonly) MNButton * continueButton;                                  //@synthesize continueButton=_continueButton - In the implementation block
-(MNButton *)continueButton;
-(MNStackedContainerView *)stackedContainerView;
-(UITextField *)emailField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
