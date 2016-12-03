/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:15 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNCompositeViewModelSubscriptionStore, NSMutableDictionary;

@interface MNBatchedViewModelSubscriptionStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNCompositeViewModelSubscriptionStore* _store;
	NSMutableDictionary* _batchedKeyToSubscribedKeys;

}
-(void)beginSubscription:(id)arg1 forSubscriptionId:(id)arg2 ;
-(id)subscriptionForSubscriptionId:(id)arg1 ;
-(void)endSubscription:(id)arg1 ;
-(id)subscriptionIdsForViewModelElementKey:(id)arg1 ;
-(id)allSubscriptionIds;
-(id)subscribedIndividualKeysForBatchedViewModelElementKey:(id)arg1 ;
-(void)setSubscribedIndividualKeys:(id)arg1 forBatchedViewModelElementKey:(id)arg2 ;
-(id)beginIndividualSubscription:(id)arg1 forBatchedViewModelElementKey:(id)arg2 ;
-(id)individualSubscriptionIdsForBatchedViewModelElementKey:(id)arg1 ;
-(void)endIndividualSubscription:(id)arg1 forBatchedViewModelElementKey:(id)arg2 ;
-(void)endIndividualSubscriptionsForBatchedViewModelElementKey:(id)arg1 ;
-(id)lastSentViewModelElementForSubscriptionId:(id)arg1 ;
-(void)setLastSentViewModelElement:(id)arg1 forSubscriptionId:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
@end

