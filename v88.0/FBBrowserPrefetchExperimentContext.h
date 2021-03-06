/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBBrowserPrefetchExperimentContext : FBExperimentContext {

	BOOL _usePrefetchedRequests;
	BOOL _prefetchOnShareAttachments;
	BOOL _prefetchOnWifiOnly;
	BOOL _useFBNetworker;
	BOOL _blacklistAds;
	BOOL _useAcceptHeader;
	NSString* _blacklistURLs;
	long long _maxTimeCacheUseOnceInSeconds;

}

@property (nonatomic,readonly) BOOL usePrefetchedRequests;                          //@synthesize usePrefetchedRequests=_usePrefetchedRequests - In the implementation block
@property (nonatomic,readonly) BOOL prefetchOnShareAttachments;                     //@synthesize prefetchOnShareAttachments=_prefetchOnShareAttachments - In the implementation block
@property (nonatomic,readonly) BOOL prefetchOnWifiOnly;                             //@synthesize prefetchOnWifiOnly=_prefetchOnWifiOnly - In the implementation block
@property (nonatomic,readonly) BOOL useFBNetworker;                                 //@synthesize useFBNetworker=_useFBNetworker - In the implementation block
@property (nonatomic,copy,readonly) NSString * blacklistURLs;                       //@synthesize blacklistURLs=_blacklistURLs - In the implementation block
@property (nonatomic,readonly) BOOL blacklistAds;                                   //@synthesize blacklistAds=_blacklistAds - In the implementation block
@property (nonatomic,readonly) BOOL useAcceptHeader;                                //@synthesize useAcceptHeader=_useAcceptHeader - In the implementation block
@property (nonatomic,readonly) long long maxTimeCacheUseOnceInSeconds;              //@synthesize maxTimeCacheUseOnceInSeconds=_maxTimeCacheUseOnceInSeconds - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)prefetchOnShareAttachments;
-(BOOL)blacklistAds;
-(BOOL)useAcceptHeader;
-(BOOL)prefetchOnWifiOnly;
-(NSString *)blacklistURLs;
-(BOOL)useFBNetworker;
-(long long)maxTimeCacheUseOnceInSeconds;
-(BOOL)usePrefetchedRequests;
@end

