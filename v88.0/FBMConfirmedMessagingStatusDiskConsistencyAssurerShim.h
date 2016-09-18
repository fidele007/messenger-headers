/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNConfirmedMessagingStatusDiskConsistencyAssuring.h>

@protocol OS_dispatch_queue, FBMIncrementalPersistenceCoordinatorObserving;
@class NSObject, FBMConfirmedMessagingStatusDiskConsistencyAssurer, NSString;

@interface FBMConfirmedMessagingStatusDiskConsistencyAssurerShim : NSObject <MNConfirmedMessagingStatusDiskConsistencyAssuring> {

	NSObject*<OS_dispatch_queue> _assurerQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	FBMConfirmedMessagingStatusDiskConsistencyAssurer* _assurer;
	id<FBMIncrementalPersistenceCoordinatorObserving> _queueDispatchedObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)waitForPersistingMessagingDataRelatedToUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithIncrementalPersistenceAnnouncer:(id)arg1 callbackQueue:(id)arg2 ;
@end
