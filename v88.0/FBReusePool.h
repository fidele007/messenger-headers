/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReusePoolDelegate;
#import <Messenger/Messenger-Structs.h>
@class NSHashTable, NSMapTable, FBLinkedDictionary;

@interface FBReusePool : NSObject {

	Class _klass;
	/*^block*/id _initializerBlock;
	unsigned long long _maximumCapacity;
	NSHashTable* _allocationQueue;
	NSMapTable* _inUseQueue;
	FBLinkedDictionary* _inWaitingQueue;
	recursive_mutex _poolLock;
	id<FBReusePoolDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned long long capacity; 
@property (assign,nonatomic,__weak) id<FBReusePoolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_initializeWithCapacity:(unsigned long long)arg1 ;
-(void)_releaseInWaitingQueue;
-(void)reclaimInstanceWithID:(id)arg1 ;
-(id)initWithClass:(Class)arg1 initializerBlock:(/*^block*/id)arg2 capacity:(unsigned long long)arg3 maximumCapacity:(unsigned long long)arg4 ;
-(id)dequeueInstanceWithID:(id)arg1 ;
-(void)enqueueInstanceWithID:(id)arg1 ;
-(void)resetPool;
-(void)setDelegate:(id<FBReusePoolDelegate>)arg1 ;
-(void)dealloc;
-(id<FBReusePoolDelegate>)delegate;
-(unsigned long long)capacity;
@end
