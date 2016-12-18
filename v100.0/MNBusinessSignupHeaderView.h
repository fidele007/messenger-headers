/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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
