/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBImageDownloader, FBUserSession, FBSimpleNetworkerRequest;

@interface FBAnimatedGIFDownloader : NSObject {

	FBImageDownloader* _imageDownloader;
	FBUserSession* _session;
	id _currentPlaceholderImageDownload;
	FBSimpleNetworkerRequest* _currentAnimatedGIFDownloadRequest;

}
-(id)initWithImageDownloader:(id)arg1 session:(id)arg2 ;
-(void)dowloadPlaceholderImageWithURL:(id)arg1 scenePath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cancelCurrentPlaceholderImageDownloadWasDownloaded:(BOOL)arg1 ;
-(void)downloadAnimatedImageForURL:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)cancelCurrentAnimatedImageDownloadWasDownloaded:(BOOL)arg1 ;
-(void)dealloc;
@end
