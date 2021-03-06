/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>

@class MNProfileImageView, UILabel, FBMUser;

@interface FBWebRTCActiveUserOverlayView : UIControl {

	MNProfileImageView* _profileImageView;
	UILabel* _nameLabel;
	FBMUser* _activeUser;

}

@property (nonatomic,retain) FBMUser * activeUser;                 //@synthesize activeUser=_activeUser - In the implementation block
@property (nonatomic,readonly) double profilePicSize; 
-(void)setActiveUser:(FBMUser *)arg1 ;
-(double)profilePicSize;
-(void)updateProfileImage:(id)arg1 ;
-(FBMUser *)activeUser;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

