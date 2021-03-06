/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/IGFilter.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableIndexSet;

@interface IGFilterGroup : IGFilter <NSCopying> {

	NSMutableArray* _filters;
	unsigned long long _surfaceIdx;
	NSMutableIndexSet* _disabledFilters;

}
-(void)removeFilterAtIndex:(unsigned long long)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)firstFilter;
-(id)lastFilter;
-(void)removeLastFilter;
-(id)renderByConsumingSource:(id)arg1 ;
-(void)render:(id)arg1 to:(id*)arg2 consumeSource:(BOOL)arg3 ;
-(void)setFilterAtIndex:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(BOOL)isFilterAtIndexEnabled:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2 ;
-(void)addFilter:(id)arg1 ;
@end

