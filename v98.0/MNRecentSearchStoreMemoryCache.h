/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNRecentSearchStoreReading.h>
#import <Messenger/MNRecentSearchStoreWriting.h>

@protocol OS_dispatch_queue, MNRecentSearchStoreMemoryCacheListener;
@class NSObject, MNNonDiscardingBlobStore, NSOrderedSet, NSString;

@interface MNRecentSearchStoreMemoryCache : NSObject <MNRecentSearchStoreReading, MNRecentSearchStoreWriting> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MNRecentSearchStoreMemoryCacheListener> _memoryCacheListener;
	MNNonDiscardingBlobStore* _diskStore;
	NSOrderedSet* _recentSearchHistory;

}

@property (copy) NSOrderedSet * recentSearchHistory;                //@synthesize recentSearchHistory=_recentSearchHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getRecentSearches;
-(id)initWithNonDiscardingBlobStore:(id)arg1 memoryCacheListener:(id)arg2 updatingQueue:(id)arg3 ;
-(void)_handleLoadedRecentSearchData:(id)arg1 ;
-(NSOrderedSet *)recentSearchHistory;
-(void)_updateRecentSearch:(id)arg1 shouldSaveToDisk:(BOOL)arg2 ;
-(void)setRecentSearchHistory:(NSOrderedSet *)arg1 ;
-(void)addRecentSearch:(id)arg1 ;
@end

