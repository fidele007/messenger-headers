/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSString, NSMutableDictionary;

@interface FBPowerLogsSQLClient : NSObject {

	NSObject*<OS_dispatch_queue> _loadingQueue;
	NSString* _logfile;
	sqlite3Ref _logfileDatabase;
	sqlite3_stmtRef _statement;
	NSMutableDictionary* _columnNameToIndexMap;

}
-(id)stringForColumn:(id)arg1 ;
-(int)intForColumn:(id)arg1 ;
-(double)doubleForColumn:(id)arg1 ;
-(id)initWithLogfile:(id)arg1 ;
-(void)processQuery:(id)arg1 tableName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_doProcessQuery:(id)arg1 tableName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)columnNameToIndexMap;
-(int)columnIndexForName:(id)arg1 ;
-(void)dealloc;
-(int)columnCount;
-(id)stringForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
@end
