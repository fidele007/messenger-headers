/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNavigationBarCurrentUserViewDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>

@protocol FBAppSessionController, FBNavigationCoordinator, FBNavigationBarCurrentUserControllerDelegate;
@class FBUserSession, FBPopoverActionSheet, FBNavigationBarCurrentUserView, NSString;

@interface FBNavigationBarCurrentUserController : NSObject <FBNavigationBarCurrentUserViewDelegate, FBPopoverControllerDelegate> {

	FBUserSession* _session;
	id<FBAppSessionController> _appSessionController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPopoverActionSheet* _popoverActionSheet;
	BOOL _didSelectActionSheetButton;
	BOOL _displayDivebar;
	FBNavigationBarCurrentUserView* _currentUserView;
	id<FBNavigationBarCurrentUserControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBNavigationBarCurrentUserView * currentUserView;                              //@synthesize currentUserView=_currentUserView - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarCurrentUserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displayDivebar;                                                           //@synthesize displayDivebar=_displayDivebar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_orientationDidChangeNotification:(id)arg1 ;
-(void)setDisplayDivebar:(BOOL)arg1 ;
-(void)_fetchPersonAndRun:(/*^block*/id)arg1 ;
-(void)_navigateToURL:(id)arg1 ;
-(id)_popoverActionSheetButtonItems;
-(void)_logImpressionIfNeeded;
-(void)_logTap:(id)arg1 ;
-(void)_didTapActivityLogButton:(id)arg1 ;
-(void)_didTapAccountSettingsButton:(id)arg1 ;
-(void)_didTapPrivacySettingsButton:(id)arg1 ;
-(void)_didTapLogoutButton:(id)arg1 ;
-(void)_didTapViewProfileButton:(id)arg1 ;
-(void)currentUserView:(id)arg1 didTapProfileView:(id)arg2 ;
-(void)currentUserView:(id)arg1 didTapMenuView:(id)arg2 ;
-(void)currentUserViewDidTapChatButton:(id)arg1 ;
-(id)initWithSession:(id)arg1 appSessionController:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)setCurrentUserView:(FBNavigationBarCurrentUserView *)arg1 ;
-(FBNavigationBarCurrentUserView *)currentUserView;
-(BOOL)displayDivebar;
-(void)setDelegate:(id<FBNavigationBarCurrentUserControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBNavigationBarCurrentUserControllerDelegate>)delegate;
@end

