/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_FB79*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(NSMutableOrderedSet *)orderedSet;
-(id)initWithComparator:(/*^block*/id)arg1 ;
@end

