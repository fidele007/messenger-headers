/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMessagesSyncDeltaWithMetadataStoring.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface MNMessagesSyncDeltaWithMetadataStore : NSObject <MNMessagesSyncDeltaWithMetadataStoring> {

	NSMutableDictionary* _threadKeyToMetadata;
	NSMutableDictionary* _sequenceIdToCountOfMetadatasInStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)storeContainsAnyMetadata;
-(void)storeDeltasWithMetadata:(id)arg1 ;
-(id)popAllMetadatasForThreadKey:(id)arg1 withPrepLevelPerformed:(long long)arg2 maxNetworkPrepLevelSequenceId:(long long)arg3 ;
-(BOOL)storeContainsDeltasWithMetadataForThreadKey:(id)arg1 ;
-(long long)mostAggresivePrepLevelInStoreForThreadKey:(id)arg1 ;
-(BOOL)storeContainsMetadataWithSequenceId:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

