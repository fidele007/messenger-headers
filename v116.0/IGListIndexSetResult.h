/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSIndexSet, NSArray;

@interface IGListIndexSetResult : NSObject {

	NSMapTable* _oldIndexMap;
	NSMapTable* _newIndexMap;
	NSIndexSet* _inserts;
	NSIndexSet* _deletes;
	NSIndexSet* _updates;
	NSArray* _moves;

}

@property (nonatomic,readonly) NSIndexSet * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,readonly) NSIndexSet * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moves;              //@synthesize moves=_moves - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 oldIndexMap:(id)arg5 newIndexMap:(id)arg6 ;
-(id)resultForBatchUpdates;
-(long long)oldIndexForIdentifier:(id)arg1 ;
-(long long)newIndexForIdentifier:(id)arg1 ;
-(id)description;
-(NSIndexSet *)updates;
-(NSIndexSet *)inserts;
-(NSIndexSet *)deletes;
-(BOOL)hasChanges;
@end

