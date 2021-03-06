/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

