/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMThreadSnippetLoading.h>

@protocol OS_dispatch_queue;
@class NSObject, FBMThreadSnippetLoader, NSString;

@interface FBMThreadSnippetLoaderWithQueueDispatchedCallback : NSObject <FBMThreadSnippetLoading> {

	NSObject*<OS_dispatch_queue> _invocationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBMThreadSnippetLoader* _loader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadThreadSnippetsForThreadSummaries:(id)arg1 pendingThreads:(id)arg2 threadKeyToLatestDisplayableMessageMap:(id)arg3 offlineIdToLatestDisplayableMessageMap:(id)arg4 userIdToUserMap:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)initWithThreadSnippetGenerator:(id)arg1 invocationQueue:(id)arg2 callbackQueue:(id)arg3 ;
@end

