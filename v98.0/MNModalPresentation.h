/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNModalPresentation
@required
-(void)dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)dismissAllViewControllersAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id)presentingNavigationControllerWithRootVC:(id)arg1;
-(void)presentViewControllerInActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)presentViewControllerInActionSheet:(id)arg1 maxHeightRatio:(double)arg2 animated:(BOOL)arg3 keyboardAware:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(void)presentViewControllerInFullHeightActionSheet:(id)arg1 animated:(BOOL)arg2 keyboardAware:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dismissActionSheetViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id)presentedActionSheetContentViewController;
-(id)presentedActionSheetViewController;
-(id)presentedViewController;
-(BOOL)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

