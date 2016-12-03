/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <Messenger/FBCLEventChannelListener.h>
#import <Messenger/FBCLLocationUpdateRequestDelegate.h>
#import <Messenger/FBCLLocationUpdateSenderDelegate.h>

@protocol FBBackgroundStateManaging, FBLocationUpdate;
@class FBUserSession, FBCLEventChannel, FBCLLocationCollectionConfig, FBCLLocationUpdateRequest, FBCLLocationUpdateSender, FBCLLocationLogger, FBGeoFenceLogger, FBCLLocationCache, CLLocationManager, FBCLLocationQualityChecker, FBCLPolicyEngine, FBCLLocationUpdateListenerAnnouncer, NSString;

@interface FBCLLocationUpdaterDecider : NSObject <CLLocationManagerDelegate, FBCLEventChannelListener, FBCLLocationUpdateRequestDelegate, FBCLLocationUpdateSenderDelegate> {

	FBUserSession* _session;
	BOOL _started;
	FBCLEventChannel* _eventChannel;
	FBCLLocationCollectionConfig* _configuration;
	FBCLLocationUpdateRequest* _locationUpdateRequest;
	FBCLLocationUpdateSender* _locationSender;
	FBCLLocationLogger* _logger;
	FBGeoFenceLogger* _geofenceLogger;
	FBCLLocationCache* _locationCache;
	CLLocationManager* _locationManager;
	double _lastUpdate;
	double _lastQualityAccuracyOverwrite;
	FBCLLocationQualityChecker* _qualityChecker;
	id<FBBackgroundStateManaging> _backgroundStateManaging;
	unsigned short _failureToImprove;
	FBCLPolicyEngine* _policyEngine;
	FBCLLocationUpdateListenerAnnouncer* _locationUpdateAnnouncer;
	id<FBLocationUpdate> _location;

}

@property (nonatomic,retain) id<FBLocationUpdate> location;              //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 eventChannel:(id)arg2 locationManager:(id)arg3 locationSender:(id)arg4 locationLogger:(id)arg5 geofenceLogger:(id)arg6 qualityChecker:(id)arg7 locationCache:(id)arg8 configuration:(id)arg9 backgroundStateManaging:(id)arg10 policyEngine:(id)arg11 locationUpdateAnnouncer:(id)arg12 ;
-(id)queuePerformer;
-(void)onCoalescedEvents:(id)arg1 ;
-(void)onEvent:(id)arg1 ;
-(void)locationUpdateRequest:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)locationUpdateSender:(id)arg1 willSendRequest:(id)arg2 ;
-(void)locationUpdateSender:(id)arg1 didSendRequest:(id)arg2 withResponse:(id)arg3 ;
-(void)_onBatteryStateOrLevelChanged:(id)arg1 ;
-(void)_addLocationsToCache:(id)arg1 ;
-(id)makeLocationUpdateRequest;
-(BOOL)_isHighPriorityEvent:(id)arg1 ;
-(BOOL)_shouldStartLocationRequest:(id)arg1 ;
-(id)_configForStaleLocation:(id)arg1 forDate:(id)arg2 ;
-(void)_uploadLocation:(id)arg1 ;
-(void)_runCompletionHandlerIfNeeded:(id)arg1 completionResult:(unsigned long long)arg2 ;
-(void)_finalizeLocationRequest:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(id<FBLocationUpdate>)location;
-(void)setLocation:(id<FBLocationUpdate>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

