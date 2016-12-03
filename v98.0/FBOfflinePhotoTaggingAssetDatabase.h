/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSString;

@interface FBOfflinePhotoTaggingAssetDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _db;
	sqlite3_stmtRef _selectStmt;
	sqlite3_stmtRef _insertStmt;
	NSString* _dbPath;

}

@property (nonatomic,copy) NSString * dbPath;              //@synthesize dbPath=_dbPath - In the implementation block
-(void)fetchAssetByAssetID:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsByAssetIDs:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cleanAssetsOlderThan:(unsigned long long)arg1 ;
-(void)insertNeedResetAsset:(id)arg1 ;
-(void)cleanAllNeedResetAssets;
-(void)insertPhotoAssets:(id)arg1 ;
-(id)initWithDBPath:(id)arg1 ;
-(void)_freeResouce;
-(id)_photoAssetFromData:(id)arg1 ;
-(id)_paramValueForArray:(id)arg1 ;
-(void)_insertPhotoAsset:(id)arg1 ;
-(void)_openDatabase;
-(void)dealloc;
-(void)deleteAssets:(id)arg1 ;
-(NSString *)dbPath;
-(void)setDbPath:(NSString *)arg1 ;
@end
