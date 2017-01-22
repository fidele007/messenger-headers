/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>
#import <Messenger/GCDAsyncUdpSocketDelegate.h>

@class FBUserSession, FBAnalytics, NSNotificationCenter, FBReachabilityAnnouncer, GCDAsyncUdpSocket, NSString, NSMutableDictionary, FBTimer, FBDeviceDiscoveryExperimentContext, FBConnectedDeviceTCPChecker;

@interface FBDeviceDiscoveryManager : NSObject <FBReachabilityListener, GCDAsyncUdpSocketDelegate> {

	FBUserSession* _session;
	FBAnalytics* _analytics;
	NSNotificationCenter* _notificationCenter;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	GCDAsyncUdpSocket* _ssdpSocket;
	NSString* _currentBSSID;
	long long _scanStartTime;
	long long _lastScanTime;
	NSMutableDictionary* _hashToBlob;
	NSMutableDictionary* _lastHashSeenTime;
	FBTimer* _scanDurationTimer;
	FBTimer* _inbetweenScansTimer;
	BOOL _firstTimeSetupComplete;
	long long _packetCount;
	FBDeviceDiscoveryExperimentContext* _context;
	BOOL _serviceDisabledBySocketError;
	FBConnectedDeviceTCPChecker* _tcpChecker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)_didEnterForeground;
-(void)_didEnterBackground;
-(id)initWithSession:(id)arg1 analytics:(id)arg2 notificationCenter:(id)arg3 reachabilityAnnouncer:(id)arg4 ;
-(void)stopDiscovery;
-(void)internalStopScanNow;
-(void)waitTimeBetweenScansAndScan;
-(void)onScanFinished;
-(id)computeHash:(id)arg1 isSSDP:(BOOL)arg2 ;
-(BOOL)computeHashAndEnqueueForLog:(id)arg1 fromLocation:(id)arg2 withHash:(id)arg3 isSSDP:(BOOL)arg4 parentHash:(id)arg5 ;
-(id)extractLocationLine:(id)arg1 ;
-(BOOL)verifyIPOfFetchUrl:(id)arg1 withSourceHost:(id)arg2 ;
-(void)onXmlResponse:(id)arg1 fromLocation:(id)arg2 withStartTime:(unsigned long long)arg3 withSSDPHash:(id)arg4 ;
-(void)savePreviouslySeenHashes;
-(void)logWithExtra:(id)arg1 ;
-(id)removeExpiredHashes:(id)arg1 moreThanSeconds:(double)arg2 ;
-(id)loadPreviouslySeenHashes;
-(void)internalStartScanNow;
-(BOOL)logAndFailOnError:(id)arg1 forOperation:(id)arg2 ;
-(void)logFromHashAndClearHash;
-(void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4 ;
-(void)udpSocketDidClose:(id)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(void)firstTimeSetup;
-(void)startDiscovery;
@end
