/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNGroupThreadsFetchingAnalyticsLogger : NSObject
-(void)canonicalGroupThreadFetchDidStart;
-(void)canonicalGroupThreadFetchDidSucceedWithDidFindCanonicalGroupThread:(BOOL)arg1 ;
-(void)_logEvent:(id)arg1 withExtraData:(id)arg2 ;
-(void)groupThreadsFetchDidStartAfterIdle;
-(void)groupThreadsFetchDidStartAfterFqlRefresh;
-(void)groupThreadsFetchGraphQLDidSucceedWithNumThreadKeys:(long long)arg1 ;
-(void)groupThreadsFetchGraphQLDidFail;
-(void)groupThreadsFetchThreadStoreRequestDidStartWithNumThreadKeys:(long long)arg1 ;
-(void)groupThreadsFetchThreadStoreRequestDidReceiveProgressUpdateWithNumThreadKeys:(long long)arg1 numThreadsFetchedFromMemoryOrDisk:(long long)arg2 numThreadsToFetchFromNetwork:(long long)arg3 ;
-(void)groupThreadsFetchThreadStoreRequestDidSucceedWithNumThreadKeys:(long long)arg1 numThreadsFetched:(long long)arg2 numThreadsNotFetched:(long long)arg3 ;
-(void)groupThreadsFetchThreadStoreRequestDidFail;
-(void)_logEvent:(id)arg1 ;
@end

