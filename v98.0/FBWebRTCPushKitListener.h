/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCPushKitHandling.h>
#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/FBMAppInitializedListening.h>

@protocol OS_dispatch_queue;
@class NSNotificationCenter, FBMobileConfigContextManager, FBDelayer, NSObject, FBWebRTCFastOfferAckSender, NSString;

@interface FBWebRTCPushKitListener : NSObject <FBWebRTCPushKitHandling, FBViewerContextClassProvidable, FBMAppInitializedListening> {

	NSNotificationCenter* _notificationCenter;
	FBMobileConfigContextManager* _configManager;
	FBDelayer* _delayer;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	FBWebRTCFastOfferAckSender* _fastOfferAckSender;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)applicationDidCompleteSettingUpBackgroundServices;
-(void)applicationDidCompleteSettingUpAllServices;
-(id)initWithNotificationCenter:(id)arg1 configManager:(id)arg2 fastOfferAckSender:(id)arg3 ;
-(void)handleCallReminderPushMessage:(id)arg1 actionIdentifier:(id)arg2 launchedByUser:(BOOL)arg3 handledCompletionBlock:(/*^block*/id)arg4 ;
-(void)handle:(id)arg1 ;
@end

