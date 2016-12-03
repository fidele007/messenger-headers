/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CBCentralManagerDelegate.h>
#import <Messenger/FBGravityIBeaconListenerDelegate.h>
#import <Messenger/FBLocationAccessManagerDelegate.h>

@protocol FBCancelable, FBGravityScannerDelegate;
@class FBUserSession, CBCentralManager, NSMutableArray, NSArray, FBTimer, FBGravityLogger, NSString, FBGravityScanStateListenerAnnouncer, FBGravityIBeaconListener, FBLocationAccessManager, FBGravityQuery, FBGravityIBeacon, NSDate;

@interface FBGravityScanner : NSObject <CBCentralManagerDelegate, FBGravityIBeaconListenerDelegate, FBLocationAccessManagerDelegate> {

	FBUserSession* _session;
	CBCentralManager* _centralManager;
	NSMutableArray* _discoveredBLEs;
	NSArray* _BLEServicesArray;
	id<FBCancelable> _minScanBlockToken;
	id<FBCancelable> _maxScanBlockToken;
	BOOL _isScanning;
	FBTimer* _scanTimer;
	id<FBGravityScannerDelegate> _delegate;
	FBGravityLogger* _logger;
	NSString* _logToken;
	FBGravityScanStateListenerAnnouncer* _announcer;
	FBGravityIBeaconListener* _iBeaconListener;
	unsigned long long _backgroundTaskIdentifier;
	FBLocationAccessManager* _foregroundLocationAccessManager;
	FBLocationAccessManager* _backgroundLocationAccessManager;
	FBGravityQuery* _backgroundQuery;
	BOOL _backgroundLocationEnabled;
	FBGravityIBeacon* _lastSeenSingleIBeaconCache;
	NSDate* _lastScanDate;

}

@property (assign,nonatomic,__weak) id<FBGravityScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastScanDate;                              //@synthesize lastScanDate=_lastScanDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didEnterForeground;
-(void)_didEnterBackground;
-(void)addScanStateListener:(id)arg1 ;
-(void)removeScanStateListener:(id)arg1 ;
-(NSDate *)lastScanDate;
-(void)setBackgroundScanningEnabled:(BOOL)arg1 ;
-(void)setScanningEnabled:(BOOL)arg1 ;
-(void)_startBackgroundTaskWithName:(id)arg1 ;
-(void)_startForegroundScanTimer;
-(void)_startScan;
-(void)_startBackgroundListener;
-(void)_locationHistoryDidChange:(id)arg1 ;
-(void)_stopBackgroundListener;
-(void)_stopForegroundScanTimer;
-(void)_stopScan;
-(BOOL)_shouldScan:(unsigned long long*)arg1 ;
-(void)_minScanBlock;
-(BOOL)cacheAndCheckIBeaconCache:(id)arg1 ;
-(void)iBeaconListener:(id)arg1 didFindBeacons:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBGravityScannerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGravityScannerDelegate>)delegate;
-(void)_endBackgroundTask;
-(id)initWithSession:(id)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
@end

