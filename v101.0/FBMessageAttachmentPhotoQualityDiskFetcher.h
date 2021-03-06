/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMessageAttachmentPhotoQualityFetching.h>

@protocol FBPersistentKeyValueStoreProtocol, OS_dispatch_queue, FBMessageAttachmentPhotoQualityFetching;
@class NSObject, NSString;

@interface FBMessageAttachmentPhotoQualityDiskFetcher : NSObject <FBMessageAttachmentPhotoQualityFetching> {

	id<FBPersistentKeyValueStoreProtocol> _persistentKeyValueStore;
	NSObject*<OS_dispatch_queue> _pkvsDispatchQueue;
	id<FBMessageAttachmentPhotoQualityFetching> _photoQualityFetcher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_refetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_persistentStoreForFetchResult:(id)arg1 fbId:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)fetchPhotoQualityForFbId:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 photoQualityFetcher:(id)arg2 ;
@end

