/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, FBCLLocationUpdateSenderDelegate;
@class FBUserSession, NSObject, FBCLPermissionManager, FBCLLocationCache, FBCLLocationLogger, FBScenePath, FBLocationGraphRequestFactory, NSDate;

@interface FBCLLocationUpdateSender : NSObject {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _sendQueue;
	FBCLPermissionManager* _permissionManager;
	FBCLLocationCache* _locationCache;
	FBCLLocationLogger* _locationLogger;
	FBScenePath* _scenePath;
	FBLocationGraphRequestFactory* _requestFactory;
	int _state;
	id<FBCLLocationUpdateSenderDelegate> _delegate;
	double _timeBetweenSends;
	unsigned long long _maxUpdatesPerRequest;
	NSDate* _lastUpdateTime;

}

@property (nonatomic,retain) NSDate * lastUpdateTime;                                           //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic,__weak) id<FBCLLocationUpdateSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL started; 
@property (assign,nonatomic) double timeBetweenSends;                                           //@synthesize timeBetweenSends=_timeBetweenSends - In the implementation block
@property (assign,nonatomic) unsigned long long maxUpdatesPerRequest;                           //@synthesize maxUpdatesPerRequest=_maxUpdatesPerRequest - In the implementation block
-(unsigned long long)maxUpdatesPerRequest;
-(void)setMaxUpdatesPerRequest:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 permissionManager:(id)arg2 locationCache:(id)arg3 locationLogger:(id)arg4 requestFactory:(id)arg5 ;
-(void)setTimeBetweenSends:(double)arg1 ;
-(void)_startSendingLocationUpdates;
-(void)_sendLocationUpdates;
-(id)sendLocationUpdates:(id)arg1 maxRetries:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleResponse:(id)arg1 forRequest:(id)arg2 ;
-(double)timeBetweenSends;
-(void)setDelegate:(id<FBCLLocationUpdateSenderDelegate>)arg1 ;
-(id<FBCLLocationUpdateSenderDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDate *)lastUpdateTime;
-(BOOL)started;
-(void)setLastUpdateTime:(NSDate *)arg1 ;
@end

