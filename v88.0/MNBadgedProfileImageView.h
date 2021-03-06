/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNProfilePreviewing.h>

@protocol MNAvatarImageDecorating;
@class UIImageView, MNProfileImageView, MNProfileImageViewModel, NSString;

@interface MNBadgedProfileImageView : UIView <MNProfilePreviewing> {

	UIImageView* _maskImageView;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	MNProfileImageView* _profileImageView;
	MNProfileImageViewModel* _profileImageViewModel;

}

@property (nonatomic,retain) MNProfileImageView * profileImageView;                      //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) MNProfileImageViewModel * profileImageViewModel;              //@synthesize profileImageViewModel=_profileImageViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewableProfileAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(MNProfileImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 avatarImageDecoration:(id)arg2 ;
-(MNProfileImageViewModel *)profileImageViewModel;
-(void)setProfileImageViewModel:(MNProfileImageViewModel *)arg1 ;
-(void)setProfileImageView:(MNProfileImageView *)arg1 ;
-(void)_updateOverlayImage;
-(void)layoutSubviews;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

