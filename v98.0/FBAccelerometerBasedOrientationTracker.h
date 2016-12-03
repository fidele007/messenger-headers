/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
	long long _deviceOrientation;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) long long deviceOrientation;                 //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL orientationLock;                          //@synthesize orientationLock=_orientationLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)beginGeneratingOrientationNotifications;
-(void)endGeneratingOrientationNotifications;
-(long long)captureVideoOrientation;
-(void)setOrientationLock:(BOOL)arg1 ;
-(BOOL)orientationLock;
-(id)init;
-(long long)interfaceOrientation;
-(long long)deviceOrientation;
-(void)accelerometer:(id)arg1 didAccelerate:(id)arg2 ;
@end

