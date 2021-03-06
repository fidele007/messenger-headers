/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:34 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBWebRTCCallAgainViewDelegate;
@class UILabel, UIButton, FBWebRTCPhotoCircleView, UIView, MNProfileImageView;

@interface FBWebRTCCallAgainView : UIView {

	UILabel* _durationLabel;
	UILabel* _nameLabel;
	UIButton* _callAgainButton;
	FBWebRTCPhotoCircleView* _profileImageView;
	UIView* _lineView;
	id<FBWebRTCCallAgainViewDelegate> _delegate;

}

@property (nonatomic,readonly) MNProfileImageView * photoView; 
@property (assign,nonatomic,__weak) id<FBWebRTCCallAgainViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)_configureLabel:(id)arg1 withFont:(id)arg2 color:(id)arg3 ;
-(id)initWithAvatarImageDecorator:(id)arg1 ;
-(void)didSelectCallAgain:(id)arg1 ;
-(CGSize)layoutSubviewsWithSize:(CGSize)arg1 setFrames:(BOOL)arg2 ;
-(void)setIsOutboundCall:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBWebRTCCallAgainViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBWebRTCCallAgainViewDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(MNProfileImageView *)photoView;
@end

