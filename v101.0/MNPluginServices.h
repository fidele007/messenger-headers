/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPluginServices.h>

@protocol MNPluginServices <NSObject>
@required
-(id)dataModelService;
-(id)navigationService;
-(id)contentPresentationService;
-(id)userSessionEventsService;
-(id)composerService;
-(id)inAppNotificationService;
-(id)syncProtocolService;
-(id)contactService;
-(id)messageFailureHandlingService;
-(id)messageDetectedDataHandlerProvidingPluginService;
-(id)connectionStatusService;
-(id)soundSerivce;
-(id)userSettingsService;
-(id)threadMessageSenderService;

@end


@protocol MNDataModelPluginService, MNNavigationPluginService, MNContentPresentationPluginService, MNUserSessionEventsPluginService, MNComposerPluginService, MNInAppNotificationPluginService, MNSyncProtocolPluginService, MNContactPluginService, MNMessageFailureHandlingPluginService, MNMessageDetectedDataHandlerProvidingPluginService, MNConnectionStatusPluginService, MNSoundPluginService, MNUserSettingsPluginService, MNThreadMessageSenderPluginService;
@class NSString;

@interface MNPluginServices : NSObject <MNPluginServices> {

	id<MNDataModelPluginService> _dataModelService;
	id<MNNavigationPluginService> _navigationService;
	id<MNContentPresentationPluginService> _contentPresentationService;
	id<MNUserSessionEventsPluginService> _userSessionEventsService;
	id<MNComposerPluginService> _composerService;
	id<MNInAppNotificationPluginService> _inAppNotificationService;
	id<MNSyncProtocolPluginService> _syncProtocolService;
	id<MNContactPluginService> _contactService;
	id<MNMessageFailureHandlingPluginService> _messageFailureHandlingService;
	id<MNMessageDetectedDataHandlerProvidingPluginService> _messageDetectedDataHandlerProvidingPluginService;
	id<MNConnectionStatusPluginService> _connectionStatusService;
	id<MNSoundPluginService> _soundService;
	id<MNUserSettingsPluginService> _userSettingsService;
	id<MNThreadMessageSenderPluginService> _threadMessageSenderService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataModelService;
-(id)navigationService;
-(id)contentPresentationService;
-(id)userSessionEventsService;
-(id)composerService;
-(id)inAppNotificationService;
-(id)syncProtocolService;
-(id)contactService;
-(id)messageFailureHandlingService;
-(id)messageDetectedDataHandlerProvidingPluginService;
-(id)connectionStatusService;
-(id)soundSerivce;
-(id)userSettingsService;
-(id)threadMessageSenderService;
-(id)initWithDataModelService:(id)arg1 navigationService:(id)arg2 contentPresentationService:(id)arg3 userSessionEventsService:(id)arg4 composerService:(id)arg5 inAppNotificationService:(id)arg6 syncProtocolService:(id)arg7 contactService:(id)arg8 messageFailureHandlingService:(id)arg9 messageDetectedDataHandlerProvidingPluginService:(id)arg10 connectionStatusService:(id)arg11 soundService:(id)arg12 userSettingsService:(id)arg13 threadMessageSenderService:(id)arg14 ;
@end
