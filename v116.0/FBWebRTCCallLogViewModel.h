/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebRTCRecentCallLogListener.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol FBWebRTCCallLogViewModelDelegate;
@class FBWebRTCRecentCallLog, FBWebRTCContactReadThroughCache, NSArray, FBWebRtcCallTabAggregationExperimentContext, NSString;

@interface FBWebRTCCallLogViewModel : NSObject <FBWebRTCRecentCallLogListener, FBClassProvidable> {

	BOOL _isFirstTimeFetchComplete;
	FBWebRTCRecentCallLog* _callLog;
	FBWebRTCContactReadThroughCache* _contactCache;
	NSArray* _fullyFetchedCallEntries;
	BOOL _useCallAggregation;
	BOOL _useNewDesignAggregation;
	BOOL _archiveSupport;
	FBWebRtcCallTabAggregationExperimentContext* _advancedCallAggregationExperement;
	id<FBWebRTCCallLogViewModelDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCCallLogViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)checkCallLogModelSnapshotEqualityBetween:(id)arg1 and:(id)arg2 considerUnseenState:(BOOL)arg3 ;
-(void)recentCallLogLoaded;
-(void)recentCallLogCallsChanged;
-(void)recentCallLogUnseenMissedCallCountChanged;
-(void)setAllCallsSeen;
-(long long)numberOfRecentCallEntriesIncludesAllMissedCalls;
-(void)setVoiceMailSeenForCallLogEntry:(id)arg1 ;
-(void)archiveForCallLogEntry:(id)arg1 ;
-(void)refreshCallLog;
-(id)initWithRecentCallLog:(id)arg1 contactCache:(id)arg2 experimentManager:(id)arg3 ;
-(id)getContactForFBID:(id)arg1 ;
-(id)_recentCallsConsistArchived:(BOOL)arg1 ;
-(BOOL)_isDate:(id)arg1 sameDayAsDate:(id)arg2 ;
-(void)_groupByUser:(id)arg1 resultTo:(id)arg2 ;
-(id)_getCallLogGroupedByDateConsistArchived:(BOOL)arg1 ;
-(void)_didFetchContactCache;
-(id)_getCallLogGroupedByDateAndVoiceMailConsistArchived:(BOOL)arg1 ;
-(id)_getCallLog;
-(long long)getRecentCallsCount;
-(void)deleteCallLogEntry:(id)arg1 ;
-(id)getSnapshotArchived:(BOOL)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<FBWebRTCCallLogViewModelDelegate>)arg1 ;
-(void)dealloc;
-(id<FBWebRTCCallLogViewModelDelegate>)delegate;
-(BOOL)isLoaded;
-(id)getSnapshot;
-(void)deleteCallAtIndex:(long long)arg1 ;
@end

