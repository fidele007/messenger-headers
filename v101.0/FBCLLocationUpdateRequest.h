/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol FBCLLocationUpdateRequestDelegate;
@class FBUserSession, CLLocationManager, FBCLLocationCollectionConfig, FBBackgroundTaskHandler, NSMutableArray, FBDelayer, FBCLEventSet, NSArray, NSString;

@interface FBCLLocationUpdateRequest : NSObject <CLLocationManagerDelegate> {

	FBUserSession* _session;
	CLLocationManager* _locationManager;
	FBCLLocationCollectionConfig* _configuration;
	FBBackgroundTaskHandler* _backgroundTaskHandler;
	unsigned long long _taskId;
	NSMutableArray* _lastLocations;
	FBDelayer* _locationAcquisionDelayer;
	double _locationRequestStartTime;
	id<FBCLLocationUpdateRequestDelegate> _delegate;
	FBCLEventSet* _eventSet;
	unsigned long long _state;

}

@property (assign,nonatomic,__weak) id<FBCLLocationUpdateRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * locations; 
@property (nonatomic,retain) FBCLEventSet * eventSet;                                            //@synthesize eventSet=_eventSet - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) FBCLLocationCollectionConfig * configuration;                         //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)location:(id)arg1 withinAccuracy:(float)arg2 andTime:(float)arg3 ;
-(void)addLocations:(id)arg1 ;
-(void)_startUpdatingLocation:(id)arg1 ;
-(void)_stopUpdatingLocation:(id)arg1 ;
-(void)_updateLocationTimeout:(double)arg1 ;
-(id)initWithSession:(id)arg1 locationManager:(id)arg2 backgroundTaskHandler:(id)arg3 configuration:(id)arg4 ;
-(void)startRequest:(id)arg1 ;
-(FBCLEventSet *)eventSet;
-(void)setEventSet:(FBCLEventSet *)arg1 ;
-(void)setDelegate:(id<FBCLLocationUpdateRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCLLocationUpdateRequestDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)invalidate;
-(void)setConfiguration:(FBCLLocationCollectionConfig *)arg1 ;
-(FBCLLocationCollectionConfig *)configuration;
-(NSArray *)locations;
-(void)_endBackgroundTask;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
@end

