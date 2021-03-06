/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBOrientationTracking.h>

@class UIDevice, UIApplication, NSNotificationCenter;

@interface FBBasicOrientationTracker : NSObject <FBOrientationTracking> {

	UIDevice* _device;
	UIApplication* _application;
	NSNotificationCenter* _notificationCenter;
	long long _notificationCount;

}
-(void)beginGeneratingOrientationNotifications;
-(void)endGeneratingOrientationNotifications;
-(long long)captureVideoOrientation;
-(id)initWithDevice:(id)arg1 application:(id)arg2 ;
-(void)_updateSubscriptionToUnderlyingDeviceNotifications;
-(void)_handleDeviceOrientationChangedNotification;
-(void)dealloc;
-(id)init;
-(long long)interfaceOrientation;
-(long long)deviceOrientation;
@end

