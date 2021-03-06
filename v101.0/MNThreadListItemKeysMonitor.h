/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadListMonitorListener.h>
#import <Messenger/MNListModelItemKeysMonitoring.h>

@protocol OS_dispatch_queue, MNThreadListMonitorListener, MNListModelItemKeysInvalidating;
@class MNThreadListMonitor, NSObject, NSMutableArray, FBTimeThrottler, NSString;

@interface MNThreadListItemKeysMonitor : NSObject <MNThreadListMonitorListener, MNListModelItemKeysMonitoring> {

	long long _threadListType;
	MNThreadListMonitor* _threadListMonitor;
	NSObject*<OS_dispatch_queue> _queue;
	id<MNThreadListMonitorListener> _threadListMonitorListener;
	NSMutableArray* _updateQueue;
	FBTimeThrottler* _throttler;
	id<MNListModelItemKeysInvalidating> _invalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNListModelItemKeysInvalidating> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)_applyUpdate:(id)arg1 ;
-(void)reloadThreadList;
-(void)reloadThreadWithKey:(id)arg1 ;
-(void)removeThreadWithKeyFromList:(id)arg1 ;
-(id<MNListModelItemKeysInvalidating>)invalidator;
-(void)setInvalidator:(id<MNListModelItemKeysInvalidating>)arg1 ;
-(void)_submitInvalidationsInQueue;
-(id)initWithThreadListType:(long long)arg1 threadListMonitor:(id)arg2 queue:(id)arg3 ;
-(void)startMonitoring;
-(void)stopMonitoring;
@end

