/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNFailedBadgeViewDelegate;
@class UIButton, MNMessageRow, UIImage;

@interface MNFailedBadgeView : UIView {

	UIButton* _badgeButton;
	id<MNFailedBadgeViewDelegate> _delegate;
	MNMessageRow* _messageRow;
	UIImage* _badgeImage;

}

@property (assign,nonatomic,__weak) id<MNFailedBadgeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MNMessageRow * messageRow;                                  //@synthesize messageRow=_messageRow - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                                       //@synthesize badgeImage=_badgeImage - In the implementation block
-(MNMessageRow *)messageRow;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(void)_errorPressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNFailedBadgeViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNFailedBadgeViewDelegate>)delegate;
-(void)setBadgeImage:(UIImage *)arg1 ;
-(UIImage *)badgeImage;
@end

