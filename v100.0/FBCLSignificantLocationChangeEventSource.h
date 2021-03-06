/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class FBUserSession, CLLocationManager, NSString;

@interface FBCLSignificantLocationChangeEventSource : FBCLEventSource <CLLocationManagerDelegate> {

	FBUserSession* _session;
	CLLocationManager* _locationManager;
	BOOL _started;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 locationManager:(id)arg2 eventChannel:(id)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

