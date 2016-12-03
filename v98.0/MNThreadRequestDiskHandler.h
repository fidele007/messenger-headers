/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummaryRequestHandling.h>

@protocol MNLegacyThreadRestoring, MNThreadFetchedAffirming, MNThreadDeletedAffirming, OS_dispatch_queue;
@class FBMessagingStore, NSObject, NSString;

@interface MNThreadRequestDiskHandler : NSObject <MNThreadSummaryRequestHandling> {

	FBMessagingStore* _store;
	id<MNLegacyThreadRestoring> _restorer;
	id<MNThreadFetchedAffirming> _threadFetchedAffirmer;
	id<MNThreadDeletedAffirming> _threadDeletedAffirmer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_runQueryWithMessagingStoreRequestMap:(id)arg1 request:(id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)_processLoadThreadSummariesResult:(id)arg1 request:(id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(void)handleBatchThreadSummaryRequest:(id)arg1 longOperationDidBeginBlock:(/*^block*/id)arg2 forwardBlock:(/*^block*/id)arg3 responseBlock:(/*^block*/id)arg4 ;
-(id)initWithMessagingStore:(id)arg1 threadRestorer:(id)arg2 threadFetchedAffirmer:(id)arg3 threadDeletedAffirmer:(id)arg4 queue:(id)arg5 ;
@end
