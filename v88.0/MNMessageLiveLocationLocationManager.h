/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CLLocationManager, CLLocation, FBTimeThrottler, NSString;

@interface MNMessageLiveLocationLocationManager : NSObject <CLLocationManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	double _updateInterval;
	/*^block*/id _updateBlock;
	/*^block*/id _failureBlock;
	CLLocationManager* _locationManager;
	CLLocation* _mostRecentLocation;
	FBTimeThrottler* _updateThrottler;
	BOOL _isRequestingLocationUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_startRequestingLocationUpdates;
-(void)_createLocationManagerOnMainThread;
-(void)_didReceiveLocationManagerUpdateWithLocation:(id)arg1 ;
-(void)_didReceiveLocationManagerError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 updateInterval:(double)arg2 updateBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)startRequestingLocationUpdates;
-(void)stopRequestingLocationUpdates;
-(void)dealloc;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)_sendLocationUpdate;
@end

