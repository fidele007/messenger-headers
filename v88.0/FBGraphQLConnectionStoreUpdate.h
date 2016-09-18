/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLConnectionStoreStateModifying.h>

@class NSString;

@interface FBGraphQLConnectionStoreUpdate : NSObject <FBGraphQLConnectionStoreStateModifying> {

	map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >* _updateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(id)transitionsFromState:(id)arg1 ;
-(id)initWithUpdateMap:(map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >*)arg1 ;
-(const map<FBMemModelObject *, FBMemModelObject *, std::__1::less<FBMemModelObject *>, std::__1::allocator<std::__1::pair<FBMemModelObject *const, FBMemModelObject *> > >*)updateMap;
-(NSString *)description;
@end
