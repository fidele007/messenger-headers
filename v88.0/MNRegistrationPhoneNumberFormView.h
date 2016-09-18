/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UITextField;

@interface MNRegistrationPhoneNumberFormView : UIView {

	UITextField* _phoneNumberTextField;
	UITextField* _countryCodeTextField;

}

@property (nonatomic,readonly) UITextField * phoneNumberTextField;              //@synthesize phoneNumberTextField=_phoneNumberTextField - In the implementation block
@property (nonatomic,readonly) UITextField * countryCodeTextField;              //@synthesize countryCodeTextField=_countryCodeTextField - In the implementation block
-(UITextField *)phoneNumberTextField;
-(UITextField *)countryCodeTextField;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_layout;
@end
