/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/FBLocationAccessManagerDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class FBLocationAccessManager, MNMiniAppLocationManagerInjector, CLLocationManager, NSString;

@interface MNMiniAppLocationManager : NSObject <FBClassInjectable, FBLocationAccessManagerDelegate, CLLocationManagerDelegate> {

	/*^block*/id _permissionGrantedBlock;
	/*^block*/id _permissionDeniedBlock;
	FBLocationAccessManager* _locationAccessManager;
	MNMiniAppLocationManagerInjector* _injector;
	/*^block*/id _locationRequestSuccessBlock;
	/*^block*/id _locationRequestFailureBlock;
	CLLocationManager* _locationRequestManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)_createLocationAccessManagerIfNecessary;
-(void)clearPermissionBlocks;
-(void)_createLocationRequestManagerIfNecessary;
-(void)_clearLocationRequestBlocks;
-(void)requestPermissionWithPermissionGrantedBlock:(/*^block*/id)arg1 permissionDeniedBlock:(/*^block*/id)arg2 ;
-(void)requestLocationWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)cleanup;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

