/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessagePostHandlingDelegate.h>
#import <Messenger/MNSyncMessageHandlerListening.h>
#import <Messenger/MNAPNSMessageDiskRestoreListening.h>

@protocol MNPushMessageChainedHandling, MNPushMessageReceivedListening;
@class NSString;

@interface MNMessengerPushMessageHandler : NSObject <MNAPNSMessagePostHandlingDelegate, MNSyncMessageHandlerListening, MNAPNSMessageDiskRestoreListening> {

	id<MNPushMessageChainedHandling> _handlerChain;
	id<MNPushMessageReceivedListening> _pushMessageReceivedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(id)_wireUpHandlerChainWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 pushLogger:(id)arg5 attachmentUtils:(id)arg6 sharedMediaModelCache:(id)arg7 inAppNotificationManager:(id)arg8 threadNavigationCoordinator:(id)arg9 soundController:(id)arg10 notificationPreviewGenerator:(id)arg11 userStore:(id)arg12 application:(id)arg13 pushRegistrar:(id)arg14 userSettings:(id)arg15 pushMessageReceivedListener:(id)arg16 threadMessageSender:(id)arg17 summaryUpdateRunningService:(id)arg18 callStarter:(id)arg19 fetchCompletionHandlerExecutor:(id)arg20 servicesInitializedDelayer:(id)arg21 userSession:(id)arg22 cdnPhotoDownloader:(id)arg23 globalMuteStatusReader:(id)arg24 threadMediaFetcherFactory:(id)arg25 analytics:(id)arg26 configManager:(id)arg27 ;
-(void)beginPostHandlingForAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 networkFetchCompletionBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)initWithThreadStore:(id)arg1 databaseOpenedDelayer:(id)arg2 appProperties:(id)arg3 authManager:(id)arg4 pushLogger:(id)arg5 attachmentUtils:(id)arg6 sharedMediaModelCache:(id)arg7 inAppNotificationManager:(id)arg8 threadNavigationCoordinator:(id)arg9 soundController:(id)arg10 notificationPreviewGenerator:(id)arg11 userStore:(id)arg12 application:(id)arg13 pushRegistrar:(id)arg14 userSettings:(id)arg15 pushMessageReceivedListener:(id)arg16 threadMessageSender:(id)arg17 summaryUpdateRunningService:(id)arg18 callStarter:(id)arg19 fetchCompletionHandlerExecutor:(id)arg20 servicesInitializedDelayer:(id)arg21 userSession:(id)arg22 cdnPhotoDownloader:(id)arg23 globalMuteStatusReader:(id)arg24 threadMediaFetcherFactory:(id)arg25 analytics:(id)arg26 configManager:(id)arg27 ;
-(void)willHandleSyncMessage:(id)arg1 ;
-(void)didHandleSyncMessage:(id)arg1 ;
-(void)didFailHandlingSyncMessage:(id)arg1 ;
@end

