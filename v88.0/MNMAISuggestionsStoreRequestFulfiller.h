/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMAISuggestionsStoreRequestFulfilling.h>

@protocol OS_dispatch_queue;
@class MNMAISuggestionsListenerAnnouncer, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, MNMAISuggestionsStore, NSObject, NSString;

@interface MNMAISuggestionsStoreRequestFulfiller : NSObject <MNMAISuggestionsStoreRequestFulfilling> {

	MNMAISuggestionsListenerAnnouncer* _suggestionListenerAnnouncer;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingStoreDelayer;
	MNMAISuggestionsStore* _suggestionsStore;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)markSuggestionExpired:(id)arg1 forThreadKey:(id)arg2 ;
-(BOOL)isSuggestionExpired:(id)arg1 forThreadKey:(id)arg2 ;
-(id)expirationDateForSuggestion:(id)arg1 threadKey:(id)arg2 ;
-(void)setExpirationDate:(id)arg1 forSuggestion:(id)arg2 threadKey:(id)arg3 ;
-(id)initMessagingStore:(id)arg1 messagingStoreDelayer:(id)arg2 suggestionsListenerAnnouncer:(id)arg3 queue:(id)arg4 ;
-(void)kickOffRestoreFromDisk;
@end
