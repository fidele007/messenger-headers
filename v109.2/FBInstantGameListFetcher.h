/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBGenericFetcher;

@interface FBInstantGameListFetcher : NSObject {

	FBUserSession* _session;
	FBGenericFetcher* _genericFetcher;
	BOOL _shouldAllowQueryCaching;
	long long _cacheThresholdInSeconds;

}

@property (nonatomic,readonly) BOOL isFetching; 
-(void)_handleSuccessWithSuccessBlock:(/*^block*/id)arg1 responseObject:(id)arg2 ;
-(id)initWithSession:(id)arg1 shouldAllowQueryCaching:(BOOL)arg2 ;
-(void)fetchSectionGameListWithQuerySurface:(long long)arg1 referralInfo:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)fetchFlatGameListWithExcludedGameID:(id)arg1 referralInfo:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)_logFetchSuccessFromCache:(BOOL)arg1 ;
-(void)_logFetchFailure;
-(void)_handleFailureWithFailureBlock:(/*^block*/id)arg1 error:(id)arg2 querySurface:(long long)arg3 referralInfo:(id)arg4 ;
-(BOOL)isFetching;
@end

