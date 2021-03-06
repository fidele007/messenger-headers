/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNViewModelSubscriptionCoordinating.h>

@protocol MNViewModelSubscriptionCoordinating, OS_dispatch_queue;
@class NSObject, NSString, MNViewModelSubscriptionAttributes, NSMutableDictionary;

@interface MNQueueDispatchedViewModelSubscriptionCoordinator : NSObject <MNViewModelSubscriptionCoordinating> {

	id<MNViewModelSubscriptionCoordinating> _coordinator;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _kind;
	MNViewModelSubscriptionAttributes* _attributes;
	NSObject*<OS_dispatch_queue> _performerQueue;
	NSMutableDictionary* _subscriptionIdToSubscriptionMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelSubscription:(id)arg1 ;
-(void)startSubscription:(id)arg1 forSubscriptionId:(id)arg2 ;
-(void)cancelAllSubscriptions;
-(void)_invokeCallbackForSubscriptionId:(id)arg1 withUpdate:(id)arg2 ;
-(id)initWithViewModelSubscriptionCoordinator:(id)arg1 queue:(id)arg2 ;
-(NSString *)description;
-(id)attributes;
-(id)kind;
-(id)queue;
@end

