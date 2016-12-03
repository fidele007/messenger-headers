/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBModalContainerViewController.h>
#import <Messenger/FBInAppNotificationEligibilityProtocol.h>

@protocol FBMinimizableContentDelegate;
@class FBUserSession, FBMinimizableModalsDismissAnimator, FBMinimizableModalsPresentAnimator, FBMinimizedTabBrowserZoomPresentAnimator, FBMinimizedTabBrowserZoomDismissAnimator, UIViewController, FBMinimizedTabBarBrowserColletionViewCell;

@interface FBMinimizableContentViewController : FBModalContainerViewController <FBInAppNotificationEligibilityProtocol> {

	FBUserSession* _session;
	FBMinimizableModalsDismissAnimator* _dismissAnimator;
	FBMinimizableModalsPresentAnimator* _presentAnimator;
	FBMinimizedTabBrowserZoomPresentAnimator* _zoomPresentAnimator;
	FBMinimizedTabBrowserZoomDismissAnimator* _zoomDismissAnimator;
	UIViewController*<FBMinimizableContentDelegate> _minimizableContentDelegate;
	FBMinimizedTabBarBrowserColletionViewCell* _correspondTab;
	CGRect _correspondTabFrame;

}

@property (assign,nonatomic) CGRect correspondTabFrame;                                                     //@synthesize correspondTabFrame=_correspondTabFrame - In the implementation block
@property (assign,nonatomic,__weak) FBMinimizedTabBarBrowserColletionViewCell * correspondTab;              //@synthesize correspondTab=_correspondTab - In the implementation block
-(id)initWithContentViewController:(id)arg1 session:(id)arg2 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowFacecastNotification:(id)arg2 broadcaster:(id)arg3 ;
-(CGRect)correspondTabFrame;
-(void)setCorrespondTabFrame:(CGRect)arg1 ;
-(FBMinimizedTabBarBrowserColletionViewCell *)correspondTab;
-(void)setCorrespondTab:(FBMinimizedTabBarBrowserColletionViewCell *)arg1 ;
-(id)contentViewController;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
@end

