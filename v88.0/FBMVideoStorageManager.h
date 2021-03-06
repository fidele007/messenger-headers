/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNVideoUploadListener.h>

@protocol OS_dispatch_queue;
@class FBUserSession, NSObject, FBDiskStore, FBPreferences, MNAppMessageAttachmentUtils, NSString;

@interface FBMVideoStorageManager : NSObject <FBViewerContextClassProvidable, MNVideoUploadListener> {

	FBUserSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	FBDiskStore* _sessionDiskStore;
	FBPreferences* _preferences;
	MNAppMessageAttachmentUtils* _attachmentUtils;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)directoryPathForVideoStorage;
-(void)fetchVideoPathForVideoAttachment:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)fetchLocalVideoFilePathForMessageSynchronously:(id)arg1 ignoringAssetLibrary:(BOOL)arg2 ;
-(id)generateVideoFilePathForVideoAttachment:(id)arg1 ;
-(id)_MNNonAssetLibraryCachedFilePathForFilename:(id)arg1 ;
-(void)_removeCachedLocalURLForCacheKey:(id)arg1 ;
-(void)_fetchVideoPathForIncomingVideoAttachment:(id)arg1 withCacheKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeLocalVideoAttachmentURL:(id)arg1 orAssetURL:(id)arg2 forCacheKey:(id)arg3 ;
-(void)willBeginVideoUploadWithInfo:(id)arg1 ;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2 ;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2 ;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
-(void)_unstoreLocalPathForCacheKey:(id)arg1 ;
@end

