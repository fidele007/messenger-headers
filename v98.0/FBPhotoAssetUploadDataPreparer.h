/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBImageProcessingConcurrentPipe, NSMutableDictionary;

@interface FBPhotoAssetUploadDataPreparer : NSObject {

	FBImageProcessingConcurrentPipe* _sharedUniversalPipe;
	NSMutableDictionary* _assetURLsToMostRecentDisplayRequests;

}
+(id)sharedInstance;
-(void)prepareDisplayImageForPhotoAttachment:(id)arg1 maxDimension:(int)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)prepareDisplayImageForAssetID:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelDisplayImagePreparationForAssetID:(id)arg1 ;
-(void)prepareUploadDataForPhotoAttachment:(id)arg1 uploadDimension:(int)arg2 compressionRate:(float)arg3 loggingBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_prepareImageDataForAssetURL:(id)arg1 edits:(id)arg2 metadata:(id)arg3 uploadDimension:(int)arg4 compressionRate:(float)arg5 shouldPreserveOriginalMetadata:(BOOL)arg6 loggingBlock:(/*^block*/id)arg7 completionBlock:(/*^block*/id)arg8 ;
-(void)_prepareDisplayImageForAssetURL:(id)arg1 edits:(id)arg2 maxDimension:(int)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_removePendingDisplayRequestForAssetURL:(id)arg1 cancel:(BOOL)arg2 ;
-(id)_createImageDataForUploadForImage:(id)arg1 compressionRate:(float)arg2 metadata:(id)arg3 preserveOriginalMetadata:(id)arg4 error:(id*)arg5 ;
-(void)_setPendingDisplayRequest:(id)arg1 forAssetURL:(id)arg2 ;
-(id)init;
@end

