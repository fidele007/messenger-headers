/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingDeviceInformation, FBKeyValueDataStore, OS_dispatch_queue;
@class MNSecureMessagingDeviceStatusOverrideAlertHandler, FBAnalytics, MNSecureMessagingCapabilityStore, NSObject;

@interface MNSecureMessagingDeviceUpgradePrimaryStatusAlertPrompter : NSObject {

	MNSecureMessagingDeviceStatusOverrideAlertHandler* _alertHandler;
	id<MNSecureMessagingDeviceInformation> _secureDeviceInfoDelegate;
	id<FBKeyValueDataStore> _diskStore;
	FBAnalytics* _analytics;
	MNSecureMessagingCapabilityStore* _capabilityStore;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasSavedFlagToDiskInThisSession;
	BOOL _userSentMessageFromThisDevice;

}
-(void)userDidSendMessageFromThisDevice;
-(void)userDidEnterInboxThreadList;
-(void)_showPrompt;
-(void)_saveFlagToDisk;
-(void)_logResponseToAnalytics:(BOOL)arg1 ;
-(id)initWithOverrideAlertHandler:(id)arg1 secureDeviceInfoDelegate:(id)arg2 capabilityStore:(id)arg3 diskStore:(id)arg4 analytics:(id)arg5 queue:(id)arg6 ;
@end
