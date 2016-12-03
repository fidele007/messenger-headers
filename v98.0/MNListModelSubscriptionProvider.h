/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNModelSubscriptionProvider.h>
#import <Messenger/MNModelSubscriptionCallbackHandling.h>

@protocol MNListModelLoading, MNModelSubscriptionBackfeeding;
@class MNModelSubscriptionProvider, MNModelSubscriptionUpdateTracker, MNModelSubscriptionCallbackHandler, NSMutableDictionary, NSString;

@interface MNListModelSubscriptionProvider : MNModelSubscriptionProvider <MNModelSubscriptionCallbackHandling> {

	long long _initialBehavior;
	MNModelSubscriptionProvider* _itemSubscriptionProvider;
	id<MNListModelLoading> _loader;
	id<MNModelSubscriptionBackfeeding> _backfeeder;
	MNModelSubscriptionProvider* _itemKeysSubscriptionProvider;
	MNModelSubscriptionUpdateTracker* _updateTracker;
	MNModelSubscriptionUpdateTracker* _itemUpdateTracker;
	MNModelSubscriptionCallbackHandler* _callbackHandler;
	NSMutableDictionary* _keyToItemKeysSubscriptionMap;
	NSMutableDictionary* _keyToItemKeysMap;
	NSMutableDictionary* _itemKeyToKeysMap;
	NSMutableDictionary* _itemKeyToSubscriptionMap;
	atomic<long long> _currentSubscriptionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addSubscriptionCallback:(/*^block*/id)arg1 forSubscriptionId:(long long)arg2 key:(id)arg3 ;
-(void)removeCallbackForSubscriptionId:(long long)arg1 ;
-(id)subscriptionForKey:(id)arg1 ;
-(void)_reloadForKeyIfPossible:(id)arg1 ;
-(void)_handleUpdate:(id)arg1 forKey:(id)arg2 ;
-(void)_setUpItemKeysSubscriptionForKey:(id)arg1 ;
-(void)_tearDownItemKeysSubscriptionForKey:(id)arg1 ;
-(void)_handleItemKeysUpdate:(id)arg1 forKey:(id)arg2 ;
-(void)_tearDownItemSubscriptionForItemKey:(id)arg1 key:(id)arg2 ;
-(void)_handleItemKeys:(id)arg1 forKey:(id)arg2 ;
-(void)_setUpItemSubscriptionForItemKey:(id)arg1 key:(id)arg2 ;
-(void)_handleItemUpdate:(id)arg1 forItemKey:(id)arg2 ;
-(id)_allItemsIfReadyForKey:(id)arg1 ;
-(id)initWithKind:(id)arg1 initialBehavior:(long long)arg2 itemSubscriptionProvider:(id)arg3 itemDataPreloader:(id)arg4 itemKeysLoader:(id)arg5 itemKeysMonitor:(id)arg6 loader:(id)arg7 backfeeder:(id)arg8 queue:(id)arg9 ;
-(NSString *)description;
-(void)invalidateForKey:(id)arg1 ;
@end

