/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIWindow;


@protocol FBAppSessionController <NSObject>
@property (assign,nonatomic,__weak) id<FBAppSessionControllerDelegate> delegate; 
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator; 
@property (nonatomic,__weak,readonly) id<FBNavigation_DEPRECATED_DO_NOT_USE> navigation; 
@property (nonatomic,retain) id<FBPushHandler> pushHandler; 
@property (nonatomic,retain) UIWindow * rootWindow; 
@optional
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)presentLogoutConfirmationWithSuccessBlock:(/*^block*/id)arg1;
-(id<FBNavigation_DEPRECATED_DO_NOT_USE>)navigation;
-(UIWindow *)rootWindow;
-(void)setRootWindow:(id)arg1;
-(void)showLogoutAlertAndPresentLogoutUIUsingAlertWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3;
-(void)setPushHandler:(id)arg1;
-(id<FBPushHandler>)pushHandler;
-(int)state;

@required
-(void)configureWithSession:(id)arg1 exceptionHandler:(id)arg2 rootWindow:(id)arg3 requesterConfiguration:(id)arg4;
-(void)presentSessionUIFromLaunch:(BOOL)arg1 forceSessionStoreClear:(BOOL)arg2 showSpinner:(BOOL)arg3;
-(void)presentLogoutUIWithReason:(id)arg1;
-(void)showLogoutAlertAndPresentLogoutUI;
-(void)setDelegate:(id)arg1;
-(id<FBAppSessionControllerDelegate>)delegate;

@end
