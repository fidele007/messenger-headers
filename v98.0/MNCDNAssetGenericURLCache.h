/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNURLExpirationEvaluating;
@class FBCache, FBDiskCache, FBAnalytics;

@interface MNCDNAssetGenericURLCache : NSObject {

	FBCache* _urlCache;
	FBDiskCache* _urlDiskCache;
	id<MNCDNURLExpirationEvaluating> _expirationEvaluator;
	FBAnalytics* _analytics;

}
-(id)initWithCache:(id)arg1 diskCache:(id)arg2 expirationEvaluator:(id)arg3 analytics:(id)arg4 ;
-(id)getAllKeys;
-(void)_diskCacheDidFetchData:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forKey:(id)arg2 ;
-(void)fetchCachedUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateUrlForKey:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cacheUrlToMemoryCache:(id)arg1 forKey:(id)arg2 ;
@end

