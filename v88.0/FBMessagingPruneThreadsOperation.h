/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class EGODatabase, EGODatabaseStatement, NSSet, NSError;

@interface FBMessagingPruneThreadsOperation : NSOperation {

	EGODatabase* _db;
	EGODatabaseStatement* _selectOldThreadsStatement;
	EGODatabaseStatement* _deleteOldThreadsStatement;
	EGODatabaseStatement* _deleteOrphanedMessagesStatement;
	NSSet* _prunedThreadKeys;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSSet * prunedThreadKeys;              //@synthesize prunedThreadKeys=_prunedThreadKeys - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
-(void)_pruneThreadsAndAssociatedDataIfNecessary;
-(void)_pruneThreadsAndAssociatedData:(id)arg1 ;
-(id)initWithDB:(id)arg1 selectOldThreadsStatement:(id)arg2 deleteOldThreadsStatement:(id)arg3 deleteOrphanedMessagesStatement:(id)arg4 ;
-(NSSet *)prunedThreadKeys;
-(void)main;
-(NSError *)error;
@end
