/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:40 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSMapTable, IGMemoryCacheItem, NSMutableArray;

@interface IGMemoryCache : NSObject {

	unsigned long long _capacity;
	double _compactionFactor;
	unsigned long long _compactionStrategy;
	NSString* _name;
	mutex _mutex;
	NSMapTable* _keyToItemMap;
	IGMemoryCacheItem* _head;
	IGMemoryCacheItem* _tail;
	IGMemoryCacheStatistics _stats;
	BOOL _needsCompaction;
	NSMutableArray* _itemReusePool;
	NSMapTable* _weakCache;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)markItemMostRecentlyUsed:(id)arg1 ;
-(void)setNeedsCompaction;
-(id)initWithCapacity:(unsigned long long)arg1 compactionFactor:(double)arg2 compactionStrategy:(unsigned long long)arg3 weakLayer:(BOOL)arg4 name:(id)arg5 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeItem:(id)arg1 ;
-(void)compact;
-(void)cacheObject:(id)arg1 forKey:(id)arg2 ;
@end

