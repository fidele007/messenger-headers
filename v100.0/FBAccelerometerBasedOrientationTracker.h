/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIAccelerometerDelegate.h>
#import <Messenger/FBOrientationTracking.h>

@class SPLowpassFilter, NSString;

@interface FBAccelerometerBasedOrientationTracker : NSObject <UIAccelerometerDelegate, FBOrientationTracking> {

	SPLowpassFilter* _lowpassFilter;
	recursive_mutex _lock;
	BOOL _orientationLock;
	long long _notificationCount;
	long long _interfaceOrientationOverride;
	long long _deviceOrientation;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) long long deviceOrientation;                       //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                    //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL orientationLock;                                //@synthesize orientationLock=_orientationLock - In the implementation block
@property (assign,nonatomic) long long interfaceOrientationOverride;              //@synthesize interfaceOrientationOverride=_interfaceOrientationOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)beginGeneratingOrientationNotifications;
-(void)endGeneratingOrientationNotifications;
-(long long)captureVideoOrientation;
-(void)setOrientationLock:(BOOL)arg1 ;
-(void)disableAccelerometerUpdates;
-(void)enableAccelerometerUpdates;
-(void)setInterfaceOrientationOverride:(long long)arg1 ;
-(BOOL)orientationLock;
-(long long)interfaceOrientationOverride;
-(id)init;
-(long long)interfaceOrientation;
-(long long)deviceOrientation;
-(void)accelerometer:(id)arg1 didAccelerate:(id)arg2 ;
@end
