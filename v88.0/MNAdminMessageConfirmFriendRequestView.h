/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNAdminMessageConfirmFriendRequestViewDelegate;
@class MNCDNProfileImageDownloader, UIImageView, UILabel, UIButton, MNAdminMessageConfirmFriendRequestViewModel;

@interface MNAdminMessageConfirmFriendRequestView : UIView {

	MNCDNProfileImageDownloader* _imageDownloader;
	UIImageView* _otherUserProfileImageView;
	UIImageView* _loggedInUserProfileImageView;
	UILabel* _adminMessageLabel;
	UIButton* _actionButton;
	MNAdminMessageConfirmFriendRequestViewModel* _viewModel;
	BOOL _shouldEnableActionButton;
	id<MNAdminMessageConfirmFriendRequestViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNAdminMessageConfirmFriendRequestViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withText:(id)arg2 shouldEnableActionButton:(BOOL)arg3 ;
-(void)configureWithViewModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 cdnImageDownloader:(id)arg2 adminMessageColor:(id)arg3 actionButtonTitleColor:(id)arg4 shouldEnableActionButton:(BOOL)arg5 ;
-(void)_actionButtonDidTap;
-(void)_downloadProfileImageWithUserId:(id)arg1 toImageView:(id)arg2 ;
-(void)setDelegate:(id<MNAdminMessageConfirmFriendRequestViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNAdminMessageConfirmFriendRequestViewDelegate>)delegate;
@end
