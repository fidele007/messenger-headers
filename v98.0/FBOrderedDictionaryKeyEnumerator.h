/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface FBOrderedDictionaryKeyEnumerator : NSEnumerator {

	map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >* _map;
	map_const_iterator<std::__1::__tree_const_iterator<std::__1::__value_type<id, id>, std::__1::__tree_node<std::__1::__value_type<id, id>, void *> *, long> >* _iter;

}
-(id)nextObject;
-(id)initWithMap:(map<id, id, FBOrderedDictionaryDynamicKeyComparator, std::__1::allocator<std::__1::pair<const id, id> > >*)arg1 ;
@end

