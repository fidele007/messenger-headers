/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlugin.h>

@protocol MNPluginServices, MNAuthenticationManager;
@class MNThreadToastCoordinator, MNProfServicesBookingToastProvider, MNProfServicesBookingToastCoordinator;

@interface MNProfServicesPlugin : MNPlugin {

	id<MNPluginServices> _services;
	MNThreadToastCoordinator* _threadToastCoordinator;
	id<MNAuthenticationManager> _authManager;
	MNProfServicesBookingToastProvider* _profServicesToastProvider;
	MNProfServicesBookingToastCoordinator* _toastCoordinator;

}

@property (nonatomic,readonly) MNProfServicesBookingToastProvider * profServicesToastProvider;              //@synthesize profServicesToastProvider=_profServicesToastProvider - In the implementation block
@property (nonatomic,readonly) MNProfServicesBookingToastCoordinator * toastCoordinator;                    //@synthesize toastCoordinator=_toastCoordinator - In the implementation block
-(void)startWithServices:(id)arg1 session:(id)arg2 ;
-(id)initWithThreadToastCoordinator:(id)arg1 authenticationManager:(id)arg2 ;
-(id)navigationPluginService;
-(MNProfServicesBookingToastProvider *)profServicesToastProvider;
-(MNProfServicesBookingToastCoordinator *)toastCoordinator;
-(void)stop;
@end

