/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPushMessageChainedHandling.h>
#import <Messenger/MNPushMessageChainedHandlingConfigurable.h>

@protocol MNAuthenticationManager, OS_dispatch_queue, MNPushMessageChainedHandling;
@class MNAppMessageAttachmentUtils, FBMThreadSharedMediaModelCache, MNThreadMediaFetcherFactory, NSObject, NSString;

@interface MNPushMessagePhotoViewModelHandler : NSObject <MNPushMessageChainedHandling, MNPushMessageChainedHandlingConfigurable> {

	MNAppMessageAttachmentUtils* _attachmentUtils;
	FBMThreadSharedMediaModelCache* _sharedMediaModelCache;
	MNThreadMediaFetcherFactory* _threadMediaFetcherFactory;
	id<MNAuthenticationManager> _authManager;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNPushMessageChainedHandling> _nextHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_prepareThreadPhotoViewModelsForMessage:(id)arg1 ontoSyncedThreadKey:(id)arg2 ;
-(void)handleAPNSMessage:(id)arg1 threadSummary:(id)arg2 supportsPreview:(BOOL)arg3 userActionInfo:(id)arg4 fetchCompletionBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)handleSyncMessage:(id)arg1 ;
-(id)initWithAttachmentUtils:(id)arg1 sharedMediaModelCache:(id)arg2 threadMediaFetcherFactory:(id)arg3 authManager:(id)arg4 queue:(id)arg5 ;
-(void)configureWithNextHandler:(id)arg1 ;
@end

