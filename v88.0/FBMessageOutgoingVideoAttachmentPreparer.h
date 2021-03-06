/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageOutgoingMediaAttachmentPreparing.h>

@protocol MNAuthenticationManager, FBMessageAttachmentServerFbIdQuerier;
@class FBMessageVideoAttachmentContent, FBMessageOutgoingAttribution, FBMediaAttachmentUploadDecisionConfig, NSString, FBMobileConfigContextManager, FBMediaSegmentStreamHandler, FBMessageAttachmentUploadResultCache, FBMessageVideoAttachmentUploadEventForwarder, FBMessageVideoAttachmentPreparationLogger, FBMessageVideoAttachmentPreparationListenerAnnouncer, NSDictionary;

@interface FBMessageOutgoingVideoAttachmentPreparer : NSObject <FBMessageOutgoingMediaAttachmentPreparing> {

	FBMessageVideoAttachmentContent* _videoAttachmentContent;
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
	NSDictionary* _extraLoggingData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideoAttachmentContent:(id)arg1 outgoingAttribution:(id)arg2 extraLoggingData:(id)arg3 videoUploadConfig:(id)arg4 parentMessageOfflineId:(id)arg5 attachmentServerFbIdQuerier:(id)arg6 authManager:(id)arg7 analytics:(id)arg8 mobileConfigContextManager:(id)arg9 streamHandler:(id)arg10 videoUploadListener:(id)arg11 videoExportListener:(id)arg12 progressBlock:(/*^block*/id)arg13 ;
-(NSString *)description;
-(id)startWithCompletion:(/*^block*/id)arg1 ;
@end

