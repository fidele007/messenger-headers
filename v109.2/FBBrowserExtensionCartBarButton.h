/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@protocol FBBrowserExtensionCartBarButtonDelegate;
@class FBBadgeView;

@interface FBBrowserExtensionCartBarButton : UIButton {

	FBBadgeView* _badgeView;
	id<FBBrowserExtensionCartBarButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBrowserExtensionCartBarButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateBadgeCount:(long long)arg1 ;
-(id)initWithItemCount:(long long)arg1 ;
-(void)_didTapButton;
-(void)_layoutBadgeView;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBBrowserExtensionCartBarButtonDelegate>)arg1 ;
-(id<FBBrowserExtensionCartBarButtonDelegate>)delegate;
@end

