/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:35 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNThreadSummarySubscribing.h>
#import <Messenger/MNSingleModelLoading.h>
#import <Messenger/MNSingleModelMonitoring.h>

@protocol OS_dispatch_queue, MNThreadSummarySubscribing, MNModelInvalidating;
@class MNTopBotsListFetcher, NSArray, NSObject, FBUserSession, MNThreadSummarySubscribingAnnouncer, NSString;

@interface MNSearchNullStateBotsSectionViewModelLoader : NSObject <MNThreadSummarySubscribing, MNSingleModelLoading, MNSingleModelMonitoring> {

	MNTopBotsListFetcher* _topBotsFetcher;
	NSArray* _fetchedConversationPages;
	NSObject*<OS_dispatch_queue> _queue;
	FBUserSession* _session;
	MNThreadSummarySubscribingAnnouncer* _summaryAnnouncer;
	id<MNThreadSummarySubscribing> _summarySubscriber;
	id<MNModelInvalidating> _invalidator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNModelInvalidating> invalidator;              //@synthesize invalidator=_invalidator - In the implementation block
-(void)loadModelForKey:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)cancelForKey:(id)arg1 ;
-(id<MNModelInvalidating>)invalidator;
-(void)setInvalidator:(id<MNModelInvalidating>)arg1 ;
-(BOOL)_shouldFetchTopBots;
-(void)_fetchTopBotsListWithCallback:(/*^block*/id)arg1 ;
-(void)_handleFetchedPages:(id)arg1 callback:(/*^block*/id)arg2 ;
-(BOOL)_shouldDisplayAndPromoteDirectM;
-(id)initWithSession:(id)arg1 authManager:(id)arg2 summaryAnnouncer:(id)arg3 queue:(id)arg4 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)stopMonitoring;
-(void)startMonitoring;
@end

