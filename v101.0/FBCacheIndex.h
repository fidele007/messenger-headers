/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol FBCacheIndexFileDelegate, OS_dispatch_queue;
@class NSCache, NSObject, NSString;

@interface FBCacheIndex : NSObject <NSCacheDelegate> {

	id<FBCacheIndexFileDelegate> _delegate;
	NSCache* _cachedEntries;
	unsigned long long _currentDiskUsage;
	unsigned long long _diskCapacity;
	sqlite3Ref _database;
	sqlite3_stmtRef _insertStatement;
	sqlite3_stmtRef _removeByKeyStatement;
	sqlite3_stmtRef _selectByKeyStatement;
	sqlite3_stmtRef _selectByKeyFragmentStatement;
	sqlite3_stmtRef _selectExcludingKeyFragmentStatement;
	sqlite3_stmtRef _trimStatement;
	sqlite3_stmtRef _updateStatement;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}

@property (assign) id delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long currentDiskUsage;                     //@synthesize currentDiskUsage=_currentDiskUsage - In the implementation block
@property (assign,nonatomic) unsigned long long diskCapacity;                           //@synthesize diskCapacity=_diskCapacity - In the implementation block
@property (assign,nonatomic) unsigned long long entryCacheCountLimit; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> databaseQueue;              //@synthesize databaseQueue=_databaseQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fetchCurrentDiskUsage;
-(id)_entryForKey:(id)arg1 ;
-(void)_writeEntryInDatabase:(id)arg1 ;
-(void)_trimDatabase;
-(void)_removeEntryFromDatabaseForKey:(id)arg1 ;
-(id)_readEntriesFromDatabase:(id)arg1 excludingFragment:(BOOL)arg2 ;
-(id)_readEntryFromDatabase:(id)arg1 ;
-(void)_updateEntryInDatabaseForKey:(id)arg1 entry:(id)arg2 ;
-(id)_createCacheEntityInfo:(sqlite3_stmtRef)arg1 ;
-(void)_dropTrimmingTable;
-(void)_flushOrphanedFiles;
-(id)initWithCacheFolder:(id)arg1 ;
-(unsigned long long)entryCacheCountLimit;
-(void)setEntryCacheCountLimit:(unsigned long long)arg1 ;
-(id)fileNameForKey:(id)arg1 ;
-(id)storeFileForKey:(id)arg1 withData:(id)arg2 ;
-(void)removeEntries:(id)arg1 excludingFragment:(BOOL)arg2 ;
-(unsigned long long)currentDiskUsage;
-(NSObject*<OS_dispatch_queue>)databaseQueue;
-(unsigned long long)diskCapacity;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)removeEntryForKey:(id)arg1 ;
-(void)setDiskCapacity:(unsigned long long)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end
