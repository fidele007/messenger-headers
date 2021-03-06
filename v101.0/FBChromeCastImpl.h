/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/GCKDeviceScannerListener.h>
#import <Messenger/FBCastingExperienceInternal.h>
#import <Messenger/FBCastingExperience.h>

@class GCKDeviceScanner, GCKDeviceManager, GCKGenericChannel, NSHashTable, NSMutableSet, FBUserSession, FBCastingExperienceExperimentContext, FBSimpleTVVideoExperienceCCImpl, NSString;

@interface FBChromeCastImpl : NSObject <GCKDeviceScannerListener, FBCastingExperienceInternal, FBCastingExperience> {

	GCKDeviceScanner* _deviceScanner;
	GCKDeviceManager* _deviceManager;
	GCKGenericChannel* _controlChannel;
	int _scanCount;
	NSHashTable* _listeners;
	NSMutableSet* _onlineDeviceList;
	FBUserSession* _session;
	FBCastingExperienceExperimentContext* _experimentContext;
	FBSimpleTVVideoExperienceCCImpl* _currentExperience;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)experimentContext;
-(void)experienceStopped:(id)arg1 ;
-(void)deviceDidComeOnline:(id)arg1 ;
-(void)deviceDidGoOffline:(id)arg1 ;
-(void)castingExperienceNeedsFBUserSession:(id)arg1 ;
-(id)discoverDevicesForDelegate:(id)arg1 ;
-(void)startExperience:(id)arg1 ;
-(void)isExperienceAvailableBestGuessForDevice:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

