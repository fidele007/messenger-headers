/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNFrequentlyUsedEmojisStoring.h>

@protocol OS_dispatch_queue;
@class FBTimeThrottler, MNNonDiscardingBlobStore, NSObject, NSDictionary, NSArray, NSString;

@interface MNFrequentlyUsedEmojisStore : NSObject <MNFrequentlyUsedEmojisStoring> {

	FBTimeThrottler* _throttler;
	MNNonDiscardingBlobStore* _blobStore;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _restored;
	NSDictionary* _emojisUsageDict;
	NSArray* _sortedFrequentlyUsedEmojis;

}

@property (copy) NSDictionary * emojisUsageDict;                    //@synthesize emojisUsageDict=_emojisUsageDict - In the implementation block
@property (copy) NSArray * sortedFrequentlyUsedEmojis;              //@synthesize sortedFrequentlyUsedEmojis=_sortedFrequentlyUsedEmojis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_readFromDisk;
-(void)_writeToDisk;
-(void)_scheduleWriteToDatabase;
-(void)incrementUsageCounterForEmoji:(id)arg1 ;
-(id)frequentlyUsedEmojis;
-(void)applyDefaultFrequentlyUsedEmojis:(id)arg1 ;
-(void)_incrementUsageCounterForEmoji:(id)arg1 ;
-(void)_updateFrequentlyUsedEmojis;
-(void)setEmojisUsageDict:(NSDictionary *)arg1 ;
-(void)setSortedFrequentlyUsedEmojis:(NSArray *)arg1 ;
-(NSArray *)sortedFrequentlyUsedEmojis;
-(NSDictionary *)emojisUsageDict;
-(void)_didRestoreFrequentlyUsedEmojisUsageDict:(id)arg1 ;
-(id)initWithBlobStore:(id)arg1 queue:(id)arg2 ;
@end

