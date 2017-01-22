/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNServiceControllable.h>
#import <Messenger/FBClassProvidable.h>

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
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithPushInstructionsController:(id)arg1 uniqueIDInterstitalControllerProvider:(id)arg2 secureThreadInterstitialControllerProvider:(id)arg3 eventsReminderInterstitialControllerProvider:(id)arg4 configManager:(id)arg5 ;
-(void)stop;
-(void)start:(id)arg1 ;
-(void)handleIdle;
@end
