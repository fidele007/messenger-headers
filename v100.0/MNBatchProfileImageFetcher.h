/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAddressBookContactSyncQuerying, MNDefaultProfileImageFactory, OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class MNCDNProfileImageDownloader, MNCDNProfileImageSizeConfiguration, MNAsyncOperationTracker, NSMutableArray, NSObject;

@interface MNBatchProfileImageFetcher : NSObject {

	mutex _allDownloadArrayMutex;
	MNCDNProfileImageDownloader* _cdnProfileImageDownloader;
	id<MNAddressBookContactSyncQuerying> _addressBookContactSyncQuerier;
	MNCDNProfileImageSizeConfiguration* _profileImageSizeConfiguration;
	id<MNDefaultProfileImageFactory> _defaultProfileImageFactory;
	MNAsyncOperationTracker* _asyncOperationTracker;
	NSMutableArray* _allDownloads;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithCdnProfileImageDownloader:(id)arg1 addressBookContactSyncQuerier:(id)arg2 profileImageSizeConfiguration:(id)arg3 defaultProfileImageFactory:(id)arg4 queue:(id)arg5 ;
-(id)fetchImagesWithRequest:(id)arg1 scenePath:(id)arg2 priority:(long long)arg3 callbackQueue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_addDownloadToAllDownloads:(unsigned long long)arg1 ;
-(void)_performNotifyForRequestId:(unsigned long long)arg1 profileImageResults:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_removeDownloadFromAllDownloads:(unsigned long long)arg1 ;
-(id)_allDownloads;
-(void)cancelRequest:(id)arg1 ;
-(void)cancelAllRequests;
@end

