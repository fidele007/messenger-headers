/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBOmnistoreCollection : NSObject {

	shared_ptr<facebook::omnistore::Collection>* _collection;

}
-(id)newCursorFromGetObjectWithPrimaryKey:(id)arg1 ;
-(id)newCursorFromQueryWithStartKey:(id)arg1 sortDirection:(unsigned long long)arg2 withNumItems:(unsigned)arg3 ;
-(unsigned long long)getSnapshotState;
-(BOOL)saveObjectWithPrimaryKey:(id)arg1 withSortKey:(id)arg2 withBytes:(const void*)arg3 withLength:(unsigned)arg4 ;
-(BOOL)reindexAllObjects;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 fieldNamesWithTokens:(id)arg2 prerequisites:(id)arg3 sortFieldName:(id)arg4 sortDirection:(unsigned long long)arg5 numItems:(unsigned)arg6 ;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 paramValues:(id)arg2 sortFieldName:(id)arg3 sortDirection:(unsigned long long)arg4 numItems:(unsigned)arg5 ;
-(id)newCursorFromQueryWithIndexSorted:(id)arg1 filterKeys:(id)arg2 sortFieldName:(id)arg3 sortDirection:(unsigned long long)arg4 numItems:(unsigned)arg5 ;
-(id)newCursorFromQueryWithIndex:(id)arg1 paramValues:(id)arg2 numItems:(unsigned)arg3 ;
-(id)initWithCollection:(shared_ptr<facebook::omnistore::Collection>*)arg1 ;
-(BOOL)deleteObject:(id)arg1 ;
@end

