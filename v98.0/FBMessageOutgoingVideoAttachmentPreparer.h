/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageOutgoingMediaAttachmentPreparing.h>

@protocol MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier;
@class FBMessageVideoAttachmentContent, FBMessageOutgoingVideoAttachmentPreparationConfiguration, FBMessageOutgoingAttribution, FBMediaAttachmentUploadDecisionConfig, NSString, FBMobileConfigContextManager, FBMediaSegmentStreamHandler, FBMessageAttachmentUploadResultCache, FBMessageVideoAttachmentUploadEventForwarder, FBMessageVideoAttachmentPreparationLogger, FBMessageVideoAttachmentPreparationListenerAnnouncer, NSDictionary;

@interface FBMessageOutgoingVideoAttachmentPreparer : NSObject <FBMessageOutgoingMediaAttachmentPreparing> {

	FBMessageVideoAttachmentContent* _videoAttachmentContent;
	FBMessageOutgoingVideoAttachmentPreparationConfiguration* _preparationConfiguration;
	FBMessageOutgoingAttribution* _outgoingAttribution;
	FBMediaAttachmentUploadDecisionConfig* _videoUploadConfig;
	NSString* _parentMessageOfflineId;
	id<MNAuthenticationManager> _authManager;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBMediaSegmentStreamHandler* _streamHandler;
	id<FBMessageAttachmentServerFbIdQuerier> _attachmentServerFbIdQuerier;
	FBMessageAttachmentUploadResultCache* _uploadResultCache;
	/*^block*/id _progressBlock;
	FBMessageVideoAttachmentUploadEventForwarder* _uploadEventForwarder;
	FBMessageVideoAttachmentPreparationLogger* _preparationLogger;
	FBMessageVideoAttachmentPreparationListenerAnnouncer* _preparationAnnouncer;
	NSDictionary* _uploadParameters;
	NSDictionary* _extraLoggingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoAttachmentContent:(id)arg1 preparationConfiguration:(id)arg2 outgoingAttribution:(id)arg3 extraLoggingData:(id)arg4 videoUploadConfig:(id)arg5 parentMessageOfflineId:(id)arg6 attachmentServerFbIdQuerier:(id)arg7 authManager:(id)arg8 analytics:(id)arg9 mobileConfigContextManager:(id)arg10 streamHandler:(id)arg11 videoUploadListener:(id)arg12 videoExportListener:(id)arg13 uploadParameters:(id)arg14 progressBlock:(/*^block*/id)arg15 ;
-(id)_loggingExtras:(id)arg1 ;
-(NSString *)description;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

