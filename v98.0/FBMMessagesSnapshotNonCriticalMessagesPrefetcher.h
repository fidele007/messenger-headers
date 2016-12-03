/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBMMessagesSnapshotNonCriticalNetworkFetching.h>

@protocol FBMMessagesSnapshotNetworkFetchingDelegate;
@class FBAnalytics, MNThreadSummaryCacheThreadListFilterer, MNMessageStore, NSNotificationCenter, NSString;

@interface FBMMessagesSnapshotNonCriticalMessagesPrefetcher : NSObject <FBClassProvidable, FBMMessagesSnapshotNonCriticalNetworkFetching> {

	FBAnalytics* _analytics;
	MNThreadSummaryCacheThreadListFilterer* _threadListFilterer;
	MNMessageStore* _messageStore;
	NSNotificationCenter* _notificationCenter;
	id<FBMMessagesSnapshotNetworkFetchingDelegate> _delegate;
	unsigned long long _messageStoreRequestId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)performNetworkFetchWithDelegate:(id)arg1 ;
-(void)_handleMessageStoreSuccess:(id)arg1 ;
-(void)_handleMessageStoreFailureWithError:(id)arg1 ;
-(id)initWithThreadListFilterer:(id)arg1 analytics:(id)arg2 messageStore:(id)arg3 notificationCenter:(id)arg4 ;
-(id)_buildRequestQueriesFromInboxList;
-(void)cancel;
@end

