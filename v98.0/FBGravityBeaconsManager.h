/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGravityScannerDelegate.h>
#import <Messenger/FBAppService.h>

@class FBUserSession, FBGravityScanner, FBGravityBeaconsListenerAnnouncer, NSDictionary, NSDate, FBBluetoothDataList, NSString;

@interface FBGravityBeaconsManager : NSObject <FBGravityScannerDelegate, FBAppService> {

	FBUserSession* _session;
	FBGravityScanner* _scanner;
	FBGravityBeaconsListenerAnnouncer* _beaconsAnnouncer;
	NSDictionary* _lastScanQueryPayload;
	NSDate* _lastScanQueryPayloadDate;
	FBBluetoothDataList* _lastScannedRawData;

}

@property (retain) FBBluetoothDataList * lastScannedRawData;              //@synthesize lastScannedRawData=_lastScannedRawData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(id)lastBluetoothScanData;
-(FBBluetoothDataList *)lastScannedRawData;
-(void)_initializeScannerIfNeeded;
-(void)addScanStateListener:(id)arg1 ;
-(void)removeScanStateListener:(id)arg1 ;
-(void)setLastScannedRawData:(FBBluetoothDataList *)arg1 ;
-(void)setBackgroundScanningEnabled:(BOOL)arg1 ;
-(void)gravityScanner:(id)arg1 didScanBLEBeacons:(id)arg2 iBeacons:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

