/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class MNBestEffortThreadSummaryPreparer, MNBestEffortUserPreparer, MNExtensionThreadDataBatchPreparer, FBAnalytics, NSObject;

@interface MNMessageLocalNotificationDataPreparer : NSObject {

	MNBestEffortThreadSummaryPreparer* _bestEffortThreadSummaryPreparer;
	MNBestEffortUserPreparer* _bestEffortUserPreparer;
	MNExtensionThreadDataBatchPreparer* _extensionThreadDataBatchPreparer;
	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)_createPreparedDataForMessageFromMessages:(id)arg1 summariesByThreadKey:(id)arg2 sendersBySenderId:(id)arg3 successLoadedMap:(id)arg4 ;
-(void)_prepareExtensionThreadViewModel:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prepareSenderUsersForMessages:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prepareThreadSummariesForMessages:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)prepareDataForMessages:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithBestEffortThreadPreparer:(id)arg1 bestEffortUserPreparer:(id)arg2 extensionThreadDataBatchPreparer:(id)arg3 analytics:(id)arg4 queue:(id)arg5 ;
@end
