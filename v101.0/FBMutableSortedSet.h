/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet;

@interface FBMutableSortedSet : NSObject <NSFastEnumeration> {

	/*^block*/id _comparator;
	NSMutableOrderedSet* _orderedSet;

}

@property (nonatomic,copy) NSMutableOrderedSet * orderedSet;              //@synthesize orderedSet=_orderedSet - In the implementation block
+(id)sortedSetWithComparator:(/*^block*/id)arg1 ;
-(id)popLastObject;
-(unsigned long long)indexOfObjectComparedSameTo:(id)arg1 ;
-(id)objectComparedSameTo:(id)arg1 ;
-(id)popFirstObject;
-(void)setOrderedSet:(NSMutableOrderedSet *)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB113*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)orderedSet;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end

