/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNButton;

@interface MNAuthenticationOptionsButtonsContainerView : UIView {

	MNButton* _loginWithFacebookButton;
	MNButton* _notOnFacebookButton;

}

@property (nonatomic,readonly) MNButton * loginWithFacebookButton;              //@synthesize loginWithFacebookButton=_loginWithFacebookButton - In the implementation block
@property (nonatomic,readonly) MNButton * notOnFacebookButton;                  //@synthesize notOnFacebookButton=_notOnFacebookButton - In the implementation block
-(void)_layoutButton:(id)arg1 yOffset:(double)arg2 ;
-(MNButton *)loginWithFacebookButton;
-(MNButton *)notOnFacebookButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

