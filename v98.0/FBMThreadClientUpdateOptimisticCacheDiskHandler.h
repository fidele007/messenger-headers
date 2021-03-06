/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>
#import <Messenger/MNThreadClientUpdateOptimisticCacheDiskHandling.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSString, NSObject;

@interface FBMThreadClientUpdateOptimisticCacheDiskHandler : NSObject <FBMCustomDictionaryStoreDelegate, MNThreadClientUpdateOptimisticCacheDiskHandling> {

	FBMCustomDictionaryStore* _diskRunner;
	/*^block*/id _completionBlock;
	NSString* _version;
	NSObject*<OS_dispatch_queue> _customDictionaryStoreQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(void)restoreClientUpdateOptimisticCacheWithCompletion:(/*^block*/id)arg1 forVersion:(id)arg2 ;
-(void)scheduleSaveOfClientOptimisticUpdates:(id)arg1 withVersion:(id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDatabaseDelayer:(id)arg2 customDictionaryStoreQueue:(id)arg3 ;
@end

