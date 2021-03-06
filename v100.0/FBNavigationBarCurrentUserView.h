/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBWebViewRightBarButtonItemView.h>

@protocol FBNavigationBarCurrentUserViewDelegate;
@class FBNavigationBarProfileView, FBBouncyPressButton, UIButton, UIView, NSString;

@interface FBNavigationBarCurrentUserView : UIView <FBWebViewRightBarButtonItemView> {

	FBNavigationBarProfileView* _profileView;
	FBBouncyPressButton* _menuButton;
	UIButton* _chatBarButtonItem;
	UIView* _divider;
	BOOL _displayDivebar;
	id<FBNavigationBarCurrentUserViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIButton * menuButton;                                                 //@synthesize menuButton=_menuButton - In the implementation block
@property (assign,nonatomic) BOOL displayDivebar;                                                     //@synthesize displayDivebar=_displayDivebar - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarCurrentUserViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapMenuButton:(id)arg1 ;
-(BOOL)shouldShowForWebViewControllerPolicyInternal;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 displayDivebar:(BOOL)arg3 ;
-(void)_didTapProfileView:(id)arg1 ;
-(void)_didTapChatButton:(id)arg1 ;
-(double)profileViewAvailableWidth;
-(BOOL)displayDivebar;
-(void)setDisplayDivebar:(BOOL)arg1 ;
-(void)setDelegate:(id<FBNavigationBarCurrentUserViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBNavigationBarCurrentUserViewDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)setThumbnailURL:(id)arg1 ;
-(UIButton *)menuButton;
@end

