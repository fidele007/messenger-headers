/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadSummarySubscribing.h>

@protocol OS_dispatch_queue, MNThreadSummarySubscribing;
@class NSMutableDictionary, MNThreadSummarySubscribingAnnouncer, NSObject, NSString;

@interface FBMThreadBasedCacheManager : NSObject <MNThreadSummarySubscribing> {

	NSMutableDictionary* _threadFbIdObjectMap;
	MNThreadSummarySubscribingAnnouncer* _threadSummarySubscribingAnnouncer;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	id<MNThreadSummarySubscribing> _dispatchedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(void)startWithQueue:(id)arg1 ;
-(id)initWithCache:(id)arg1 threadSummarySubscribingAnnouncer:(id)arg2 ;
-(void)clearObjectForThreadWithKey:(id)arg1 ;
-(id)initWithThreadSummarySubscribingAnnouncer:(id)arg1 ;
-(id)getObjectForThreadWithKey:(id)arg1 ;
-(void)setObject:(id)arg1 forThreadWithKey:(id)arg2 ;
-(void)dealloc;
-(void)stop;
@end

