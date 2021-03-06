/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class MNProfileImageView, UIImageView, FBRichTextView;

@interface MNBusinessSignupHeaderView : UIView {

	MNProfileImageView* _businessImageView;
	MNProfileImageView* _userImageView;
	UIImageView* _businessMaskView;
	UIImageView* _userMaskView;
	FBRichTextView* _titleLabel;

}
-(CGSize)_titleSizeForSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 businessProfileImageView:(id)arg2 userProfileImageView:(id)arg3 titleText:(id)arg4 avatarImageDecoration:(id)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

