/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPersistentKeyValueStore;

@interface FBMediaPublishingInfoCache : NSObject {

	FBPersistentKeyValueStore* _cache;

}
-(void)composerDidPublishMediaWithAssetIDs:(id)arg1 ;
-(void)hasPublishedWithAssetIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)hasPublishedWithAssetId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end
