/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMMotionManager, NSMutableSet;

@interface FBNA360MediaMotionManager : NSObject {

	CMMotionManager* _motionManager;
	NSMutableSet* _motionObservers;
	double _lowPassFilterStrength;
	GLKQuaternion _deviceAttitude;

}

@property (nonatomic,readonly) _GLKQuaternion deviceAttitude;              //@synthesize deviceAttitude=_deviceAttitude - In the implementation block
@property (assign,nonatomic) double lowPassFilterStrength;                 //@synthesize lowPassFilterStrength=_lowPassFilterStrength - In the implementation block
+(id)sharedMotionManager;
-(void)_handleDeviceMotionUpdate:(id)arg1 error:(id)arg2 ;
-(void)startDeliveringMotionEventsToObserver:(id)arg1 ;
-(void)stopDeliveringMotionEventsToObserver:(id)arg1 ;
-(void)setLowPassFilterStrength:(double)arg1 ;
-(_GLKQuaternion)deviceAttitude;
-(double)lowPassFilterStrength;
-(id)init;
@end
