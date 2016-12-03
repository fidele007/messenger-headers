/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMCustomDictionaryStoreDelegate.h>

@protocol OS_dispatch_queue;
@class FBMCustomDictionaryStore, NSObject, NSMutableDictionary, FBMThreadKey, NSString;

@interface MNMActionsStore : NSObject <FBMCustomDictionaryStoreDelegate> {

	FBMCustomDictionaryStore* _diskHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _actionsByThread;
	FBMThreadKey* _head;
	FBMThreadKey* _tail;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)customDictionaryStore:(id)arg1 didRestoreStateFromDisk:(id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 queue:(id)arg3 ;
-(void)_scheduleSaveToDisk;
-(void)kickOffRestoreFromDisk;
-(id)actionsForThreadKey:(id)arg1 ;
-(void)setActions:(id)arg1 forThreadKey:(id)arg2 ;
-(void)_addNode:(id)arg1 forKey:(id)arg2 ;
-(id)_removeNodeAtKey:(id)arg1 ;
-(void)_bumpNodeAtKey:(id)arg1 ;
@end

