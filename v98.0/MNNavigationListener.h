/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNNavigationListener <NSObject>
@optional
-(void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4;
-(void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2;
-(void)tabBarControllerDidSelectViewController:(id)arg1;
-(void)didPresentViewController:(id)arg1;
-(void)didSetBadgeUpdater:(id)arg1 forTab:(long long)arg2;
-(void)splitViewControllerWillChangeState:(BOOL)arg1;
-(void)didDismissViewController:(id)arg1;

@end

