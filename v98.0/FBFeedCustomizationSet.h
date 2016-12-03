/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMapTable;

@interface FBFeedCustomizationSet : NSObject <NSCopying> {

	NSMapTable* _customizations;

}
-(id)customizationForClass:(Class)arg1 ;
-(id)initWithCustomizations:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)customizationsByAddingCustomizationSet:(id)arg1 ;
-(void)_addSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(void)_removeSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)customizationsByAddingSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)customizationsByRemovingSet:(const unordered_set<id, FB::HashFunctor<NSObject *>, std::__1::equal_to<id>, std::__1::allocator<id> >*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

