/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNServiceControllable.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBProvider;
@class MNPushInstructionsController, MNUniqueIDInterstitialController, MNSecureThreadInterstitialController, MNEventsReminderInterstitialController, FBMobileConfigContextManager, NSString;

@interface MNNuxController : NSObject <MNServiceControllable, FBClassProvidable> {

	MNPushInstructionsController* _pushInstructionsController;
	MNUniqueIDInterstitialController* _uniqueIDInterstitialController;
	id<FBProvider> _uniqueIDInterstitialControllerProvider;
	MNSecureThreadInterstitialController* _secureThreadInterstitialController;
	id<FBProvider> _secureThreadInterstitialControllerProvider;
	MNEventsReminderInterstitialController* _eventsReminderInterstitialController;
	id<FBProvider> _eventsReminderInterstitialControllerProvider;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPushInstructionsController:(id)arg1 uniqueIDInterstitalControllerProvider:(id)arg2 secureThreadInterstitialControllerProvider:(id)arg3 eventsReminderInterstitialControllerProvider:(id)arg4 configManager:(id)arg5 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(void)stop;
-(void)start:(id)arg1 ;
@end

