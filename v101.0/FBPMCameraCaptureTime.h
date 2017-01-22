/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
#import <Messenger/Messenger-Structs.h>
@class NSOperationQueue;

@interface FBPMCameraCaptureTime : NSObject {

	NSOperationQueue* _queue;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _startPeriod;
	time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > > _lastInterrupted;
	duration<long long, std::__1::ratio<1, 1000000000> > _interruptTotalForLastPeriod;
	long long _currentDevicePostion;
	double _energyCoef;
	id<NSObject> _startObserver;
	id<NSObject> _stopObserver;
	id<NSObject> _errorObserver;
	id<NSObject> _onInterruptedObserver;
	id<NSObject> _onInterruptEndedObserver;
	id<NSObject> _onInputAdded;
	id<NSObject> _onInputRemoved;
	Video _model;
	double _energy;

}

@property (assign) double energy;              //@synthesize energy=_energy - In the implementation block
+(id)sharedInstanceWithModelConfig:(Video)arg1 ;
-(id)initWithModelConfig:(Video)arg1 ;
-(void)_onStartRunning:(id)arg1 ;
-(void)_onStopRunning:(id)arg1 ;
-(void)_onError:(id)arg1 ;
-(void)_onInterrupted:(id)arg1 ;
-(void)_onInterruptEnded:(id)arg1 ;
-(void)_onInputAdded:(id)arg1 ;
-(void)_onInputRemoved:(id)arg1 ;
-(void)_flush:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)_reset:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 device:(id)arg2 preset:(id)arg3 ;
-(void)_endCaptureSession:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(BOOL)_updateCameraStats:(time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000> > >)arg1 ;
-(void)setEnergy:(double)arg1 ;
-(void)_updateCurrentDeviceInfo:(id)arg1 preset:(id)arg2 ;
-(CameraTimeStat)readCameraStats;
-(void)dealloc;
-(double)energy;
@end
