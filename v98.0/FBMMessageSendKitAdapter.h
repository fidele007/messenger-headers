/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessageSendSchedulerListening.h>
#import <Messenger/MNMessageSendAttachmentProgressListening.h>
#import <Messenger/MNMessageSendConfigurationFactory.h>
#import <Messenger/MNMessageSendTimestampGenerating.h>
#import <Messenger/MNMessageSendGenericDiskHandlingDelegate.h>
#import <Messenger/FBGraphMessageSendRequestRunnerDelegate.h>

@protocol MNThreadMessageCaching, FBClock, FBMMessageSendListening;
@class FBMMQTTManager, MNNonDiscardingBlobStore, FBMMessageSendStatesGating, MNMessagingRegionHeaderHelper, NSString;

@interface FBMMessageSendKitAdapter : NSObject <FBViewerContextClassProvidable, MNMessageSendSchedulerListening, MNMessageSendAttachmentProgressListening, MNMessageSendConfigurationFactory, MNMessageSendTimestampGenerating, MNMessageSendGenericDiskHandlingDelegate, FBGraphMessageSendRequestRunnerDelegate> {

	id<MNThreadMessageCaching> _messageStore;
	id<FBClock> _clock;
	FBMMQTTManager* _mqttManager;
	MNNonDiscardingBlobStore* _blobStore;
	FBMMessageSendStatesGating* _sendStatesGating;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<FBMMessageSendListening> _messageSendListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didPublishMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 ;
-(void)didPutMessageBackInQueue:(id)arg1 ;
-(void)didCancelMessage:(id)arg1 ;
-(void)didEnqueueMessageAndWillSendImmediately:(id)arg1 ;
-(void)didEnqueueMessageAndWillWaitInQueue:(id)arg1 ;
-(void)willSendQueuedMessage:(id)arg1 ;
-(void)didSendMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didCancelMessage:(id)arg1 andWillSendNextMessageInQueueImmediately:(id)arg2 ;
-(void)didFailMessage:(id)arg1 error:(id)arg2 errorType:(unsigned long long)arg3 ;
-(void)message:(id)arg1 attachmentPreparationProgressDidChange:(double)arg2 ;
-(void)message:(id)arg1 attachmentPreparationDidSucceedWithPreparedAttachment:(id)arg2 ;
-(void)message:(id)arg1 attachmentPreparationDidFailWithError:(id)arg2 isRetriable:(BOOL)arg3 ;
-(id)sendConfigurationForMessage:(id)arg1 ;
-(unsigned long long)sendTimestampForNewOutgoingMessageInTarget:(id)arg1 lastOutgoingMessageSendTimestamp:(unsigned long long)arg2 clock:(id)arg3 ;
-(void)persistDataToDisk:(id)arg1 forType:(long long)arg2 callbackQueue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)restoreDataFromDiskWithType:(long long)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)analyticsExtraForMessageLog:(id)arg1 ;
-(id)additionalHTTPHeadersForMessage:(id)arg1 ;
-(BOOL)shouldContinueInBackground;
@end

