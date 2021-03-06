/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInAppBeeperContainerViewDelegate.h>

@class FBTransparentWindow, FBInAppBeeperContainerViewController, NSString;

@interface FBInAppBeeperManager : NSObject <FBInAppBeeperContainerViewDelegate> {

	FBTransparentWindow* _beeperWindow;
	FBInAppBeeperContainerViewController* _inAppBeeperContainerViewController;
	long long _currentContentViewPriority;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)showBeeperForInAppContentView:(id)arg1 config:(id)arg2 ;
-(void)inAppBeeperContainerViewDidDisappear:(id)arg1 withDismissalAction:(int)arg2 ;
-(void)_observeViewWillAppearNotificationNames:(id)arg1 ;
-(void)_actionSheetOrAlertViewWillAppear:(id)arg1 ;
-(BOOL)canShowBeeperWithPriority:(long long)arg1 ;
-(BOOL)_isBeeperShowing;
-(BOOL)canShowBeeper;
-(void)hideBeeperForInAppContentView:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

