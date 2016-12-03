/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAPNSMessageDiskRestoreListening.h>
#import <Messenger/MNAPNSMessageStoreWriting.h>
#import <Messenger/MNAPNSMessageStoreReading.h>

@protocol OS_dispatch_queue, MNAPNSMessageDiskRestoreListening;
@class FBMCustomDictionaryStore, MNAPNSMessageStoreMemoryCache, NSObject, NSString;

@interface MNAPNSMessageStore : NSObject <MNAPNSMessageDiskRestoreListening, MNAPNSMessageStoreWriting, MNAPNSMessageStoreReading> {

	FBMCustomDictionaryStore* _diskHandler;
	MNAPNSMessageStoreMemoryCache* _memoryCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	id<MNAPNSMessageDiskRestoreListening> _restoreListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRestoreAPNSMessagesFromDiskWithAffectedThreadKeys:(id)arg1 ;
-(id)initWithQueue:(id)arg1 messagingStore:(id)arg2 messagingStoreDatabaseDelayer:(id)arg3 ;
-(void)configureAndBeginRestoreWithListener:(id)arg1 ;
-(void)getSortedAPNSMessagesForThreadKey:(/*^block*/id)arg1 ;
-(void)addAPNSMessage:(id)arg1 ;
-(void)removeAPNSMessageWithMessageId:(id)arg1 ;
@end

