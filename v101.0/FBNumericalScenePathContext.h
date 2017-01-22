/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBScenePathContext.h>

@class NSMapTable;

@interface FBNumericalScenePathContext : FBScenePathContext {

	NSMapTable* _indexToPath;
	NSMapTable* _indexToHolder;
	unordered_map<unsigned long, unsigned long, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* _pathToIndex;
	unsigned long long _maxRelevantSiblingDistance;
	mutex _lock;

}
-(id)initWithRootView:(id)arg1 delegate:(id)arg2 maxRelevantSiblingDistance:(unsigned long long)arg3 ;
-(id)pathForIndex:(unsigned long long)arg1 ;
-(id)_holderForIndex:(unsigned long long)arg1 ;
-(void)updateActiveIndex:(unsigned long long)arg1 ;
-(void)invalidateIndex:(unsigned long long)arg1 ;
-(float)distanceBetweenChildPath:(unsigned long long)arg1 andSibling:(unsigned long long)arg2 ;
@end
