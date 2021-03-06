/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class FBMessagingStore, MNFetchedThreadKeyTracker, MNDeletedThreadKeyTracker, MNThreadListFetchedTracker, MNMessageListFetchedTracker, NSString;

@interface FBMThreadFetchStateClearer : NSObject <FBViewerContextClassProvidable> {

	FBMessagingStore* _store;
	MNFetchedThreadKeyTracker* _fetchedThreadKeyTracker;
	MNDeletedThreadKeyTracker* _deletedThreadKeyTracker;
	MNThreadListFetchedTracker* _threadListFetchedTracker;
	MNMessageListFetchedTracker* _messageListFetchedTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)resetThreadFetchStateAndClearDbState:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)initWithMessagingStore:(id)arg1 fetchedThreadKeyTracker:(id)arg2 deletedThreadKeyTracker:(id)arg3 threadListFetchedTracker:(id)arg4 messageListFetchedTracker:(id)arg5 ;
@end

