/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNCDNPhotoAssetURLFetcher, MNCDNVideoAssetURLFetcher, MNCDNProfileImageAssetURLFetcher, MNCDNThreadImageAssetURLFetcher, NSMutableSet, NSMutableDictionary;

@interface MNCDNAssetURLFetcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNPhotoAssetURLFetcher* _photoUrlFetcher;
	MNCDNVideoAssetURLFetcher* _videoUrlFetcher;
	MNCDNProfileImageAssetURLFetcher* _profileImageUrlFetcher;
	MNCDNThreadImageAssetURLFetcher* _threadImageUrlFetcher;
	NSMutableSet* _activeAssetIdentifiers;
	NSMutableDictionary* _assetToSuccessMap;
	NSMutableDictionary* _assetToFailureMap;

}
-(id)initWithPhotoUrlFetcher:(id)arg1 videoUrlFetcher:(id)arg2 profileImageUrlFetcher:(id)arg3 threadImageUrlFetcher:(id)arg4 queue:(id)arg5 ;
-(void)_addDependantAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_startFetchForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_cleanUpAssetIdentifier:(id)arg1 ;
-(void)_assetIdentifier:(id)arg1 succeededWithURL:(id)arg2 ;
-(void)_assetIdentifier:(id)arg1 failedWithError:(id)arg2 ;
-(void)_triggerFetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)fetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
@end

