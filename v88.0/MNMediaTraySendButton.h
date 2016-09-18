/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMediaTraySendButtonDelegate;
@class UIButton, FBBadgeView;

@interface MNMediaTraySendButton : UIView {

	UIButton* _sendButton;
	FBBadgeView* _badgeView;
	long long _badgeCount;
	id<MNMediaTraySendButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaTraySendButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_sendButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMediaTraySendButtonDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMediaTraySendButtonDelegate>)delegate;
-(void)tintColorDidChange;
-(void)setBadgeCount:(long long)arg1 ;
@end
