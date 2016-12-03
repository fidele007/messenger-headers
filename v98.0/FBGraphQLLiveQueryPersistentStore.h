/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLMemResponseCache;
@class FBGraphQLConsistentLookasideCache;

@interface FBGraphQLLiveQueryPersistentStore : NSObject {

	id<FBGraphQLMemResponseCache> _responseCache;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;

}
+(id)defaultDiskCacheConfig;
-(id)initWithResponseCache:(id)arg1 consistentLookasideCache:(id)arg2 ;
-(void)updateCachedResponseFromCLC:(id)arg1 forQuery:(id)arg2 metadata:(id)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)cacheResponse:(id)arg1 metadata:(id)arg2 forQuery:(id)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchResponseForQuery:(id)arg1 callbackQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

