/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRideServiceProviderListPresenterDelegate.h>
#import <Messenger/RCTBridgeModule.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider;
@class RCTBridge, MNRideServiceProviderListPresenter, FBUserSession, MNOmniMSettingsStore, NSString;

@interface MNDirectMHandler : NSObject <MNRideServiceProviderListPresenterDelegate, RCTBridgeModule, FBClassProvidable> {

	id<FBProvider> _rideServiceProviderListPresenterProvider;
	MNRideServiceProviderListPresenter* _rideServiceProviderListPresenter;
	FBUserSession* _session;
	BOOL _didRequestRide;
	/*^block*/id _resolve;
	MNOmniMSettingsStore* _omniMSettingsStore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)__rct_export__530;
+(id)__rct_export__671;
+(id)moduleName;
+(void)load;
-(void)setRidesPref:(id)arg1 ;
-(void)rideServiceProviderListPresenter:(id)arg1 willPresentVC:(id)arg2 ;
-(void)rideServiceProviderListPresenter:(id)arg1 didDismissVC:(id)arg2 ;
-(void)rideServiceProviderListPresenterDidRequestRide:(id)arg1 ;
-(void)rideServiceProviderListPresenter:(id)arg1 didSelectProvider:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)openRideService:(id)arg1 providerID:(id)arg2 resolver:(/*^block*/id)arg3 rejecter:(/*^block*/id)arg4 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

