/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(void)setDelegate:(id<FBBrowserExtensionCartBarButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBBrowserExtensionCartBarButtonDelegate>)delegate;
@end

