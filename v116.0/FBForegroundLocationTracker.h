/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Messenger/FBLocationTracker.h>

@protocol NSObject;
@class FBCLLocationUpdateListenerAnnouncer, FBUserSession, FBTimer, FBCLLocationManagerInstrumented, NSString;

@interface FBForegroundLocationTracker : NSObject <CLLocationManagerDelegate, FBLocationTracker> {

	FBCLLocationUpdateListenerAnnouncer* _locationAnnouncer;
	FBUserSession* _session;
	FBTimer* _timer;
	BOOL _locationRequested;
	FBCLLocationManagerInstrumented* _locationManager;
	id<NSObject> _didEnterBackgroundObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateLocationAnnouncer:(id)arg1 ;
-(void)adoptCollectionScheme:(long long)arg1 ;
-(void)_onTimer;
-(void)_stopUpdatingLocation;
-(void)stopTracking;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)startTracking;
@end

