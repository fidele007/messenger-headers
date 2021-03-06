/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTEventEmitter.h>
#import <Messenger/RCTFBSessionModule.h>
#import <Messenger/FBGravityBeaconsListener.h>

@class FBUserSession, FBGravityBeaconsManager, NSString, RCTBridge;

@interface FBGravityNativeModule : RCTEventEmitter <RCTFBSessionModule, FBGravityBeaconsListener> {

	FBGravityBeaconsManager* _gravityManager;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__550;
+(id)__rct_export__601;
+(void)load;
-(id)supportedEvents;
-(void)didNotFindBeacons;
-(void)didFindBeacons:(id)arg1 staleness:(double)arg2 ;
-(void)setBackgroundScanningEnabled:(BOOL)arg1 ;
-(void)getLastBluetoothScanData:(/*^block*/id)arg1 ;
-(void)startObserving;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)stopObserving;
@end

