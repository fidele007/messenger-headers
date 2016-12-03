/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol OS_dispatch_queue, MNAuthenticationManager, FBCancelable, MNPushMessageChainedHandling;
@class MNCDNPhotoDownloader, NSObject, FBUserSession, MNAppMessageAttachmentUtils, NSMutableArray, NSString;

@interface MNPushMessagePrefetchingHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	MNCDNPhotoDownloader* _photoDownloader;
	NSObject*<OS_dispatch_queue> _queue;
	FBUserSession* _userSession;
	id<MNAuthenticationManager> _authManager;
	MNAppMessageAttachmentUtils* _attachmentUtils;
	BOOL _enablePrefetch;
	NSMutableArray* _requestsQueue;
	id<FBCancelable> _cancelToken;
	id<MNPushMessageChainedHandling> _nextHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(void)configureWithNextHandler:(id)arg1 ;
-(void)_prefetchPhotoAttachment:(id)arg1 ;
-(void)_updateRequestsQueue:(id)arg1 ;
-(void)_flushQueueAndPrefechPhoto;
-(id)initWithCDNPhotoDownloader:(id)arg1 attachmentUtils:(id)arg2 userSession:(id)arg3 authManager:(id)arg4 queue:(id)arg5 ;
@end

