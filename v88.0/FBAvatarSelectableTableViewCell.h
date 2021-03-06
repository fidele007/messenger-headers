/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBItemTableViewCell_DEPRECATED.h>

@class FBAvatarProfilePictureView, UIImageView;

@interface FBAvatarSelectableTableViewCell : FBItemTableViewCell_DEPRECATED {

	FBAvatarProfilePictureView* _avatarImageView;
	UIImageView* _checkmarkImageView;
	BOOL _avatarSelected;

}

@property (nonatomic,retain) FBMemModelObject*<FBAvatarProtocol> avatar; 
@property (assign,nonatomic) BOOL avatarSelected;                                     //@synthesize avatarSelected=_avatarSelected - In the implementation block
-(void)hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(void)setAvatarSelected:(BOOL)arg1 ;
-(BOOL)avatarSelected;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setAvatar:(FBMemModelObject*<FBAvatarProtocol>)arg1 ;
-(FBMemModelObject*<FBAvatarProtocol>)avatar;
@end

