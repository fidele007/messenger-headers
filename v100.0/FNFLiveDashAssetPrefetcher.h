/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FNFDashAssetPrefetcherLogger;
#import <Messenger/Messenger-Structs.h>
@class FNFLiveDashPrefetchedAssetSet, NSMutableDictionary;

@interface FNFLiveDashAssetPrefetcher : NSObject {

	FNFLiveDashPrefetchedAssetSet* _prefetchedAssets;
	NSMutableDictionary* _timers;
	id<FNFDashAssetPrefetcherLogger> _logger;
	mutex _mutex;

}
-(id)initWithLogger:(id)arg1 ;
-(id)newAssetForURL:(id)arg1 creatorBlock:(/*^block*/id)arg2 ;
-(void)prefetchURL:(id)arg1 timeManager:(id)arg2 delayBeforeDeallocInMs:(unsigned)arg3 creatorBlock:(/*^block*/id)arg4 ;
-(void)_logAndReleaseUnusedAssetWithUrl:(id)arg1 ;
@end

