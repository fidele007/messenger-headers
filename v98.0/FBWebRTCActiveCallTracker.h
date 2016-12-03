/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummarySubscribing.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNThreadSummaryCacheReading, FBWebRTCActiveCallTrackerDelegate;
@class MNThreadSummarySubscribingAnnouncer, FBMSyncedThreadKey, FBMRTCCallData, NSString;

@interface FBWebRTCActiveCallTracker : NSObject <MNThreadSummarySubscribing, FBClassProvidable> {

	id<MNThreadSummaryCacheReading> _threadSummaryCache;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	FBMSyncedThreadKey* _trackedThread;
	FBMRTCCallData* _callData;
	id<FBWebRTCActiveCallTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBWebRTCActiveCallTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isInActiveCall; 
@property (nonatomic,copy,readonly) NSString * activeCallServerInfoData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)trackActiveCallsForThread:(id)arg1 ;
-(BOOL)isInActiveCall;
-(NSString *)activeCallServerInfoData;
-(id)initWithThreadSummaryCache:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 ;
-(void)_setCallData:(id)arg1 ;
-(id)_callDataForThreadSummary:(id)arg1 ;
-(BOOL)_isTrackedThreadSummary:(id)arg1 ;
-(BOOL)_isTrackedThreadKey:(id)arg1 ;
-(void)setDelegate:(id<FBWebRTCActiveCallTrackerDelegate>)arg1 ;
-(id<FBWebRTCActiveCallTrackerDelegate>)delegate;
@end

