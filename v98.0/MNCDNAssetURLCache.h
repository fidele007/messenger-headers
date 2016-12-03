/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNAssetProfileImageURLCaching;
@class MNCDNAssetGenericURLCache, MNCDNAssetIDImageURLCacheKeyGenerator;

@interface MNCDNAssetURLCache : NSObject {

	MNCDNAssetGenericURLCache* _genericURLCache;
	id<MNCDNAssetProfileImageURLCaching> _profileImageURLCache;
	MNCDNAssetIDImageURLCacheKeyGenerator* _photoCacheKeyGenerator;
	MNCDNAssetIDImageURLCacheKeyGenerator* _videoCacheKeyGenerator;

}
-(id)initWithGenericURLCache:(id)arg1 profileImageURLCache:(id)arg2 ;
-(void)invalidateUrlForAssetIdentifier:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchCachedUrlForAssetIdentifier:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cacheUrl:(id)arg1 forAssetIdentifier:(id)arg2 ;
@end
