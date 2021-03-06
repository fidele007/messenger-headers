/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNTableViewCell.h>

@class UITextField, UIActivityIndicatorView;

@interface MNEditUsernameTableViewCell : MNTableViewCell {

	UITextField* _textField;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,readonly) UITextField * textField;                                      //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(UIActivityIndicatorView *)activityIndicatorView;
@end

