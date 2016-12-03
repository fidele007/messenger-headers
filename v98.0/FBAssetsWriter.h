/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:09 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, ALAssetsLibrary;

@interface FBAssetsWriter : NSObject {

	NSObject*<OS_dispatch_semaphore> _writeSemaphore;
	NSObject*<OS_dispatch_queue> _assetsWriterWriteImageQueue;
	int _pendingAssetWrites;
	ALAssetsLibrary* _assetsLibraryForGIFWriting;

}
+(id)sharedInstance;
-(void)addAssetWithURL:(id)arg1 toAlbumWithName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeImageData:(id)arg1 metadataDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeVideoURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_writeGIFImageDataUsingALAssetsLibrary:(id)arg1 metadataDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_createAlbumIfNeededWithAlbumName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initSharedInstance;
@end

