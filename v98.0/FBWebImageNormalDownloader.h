/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebImageNetworkDownloaderHelperDelegate.h>
#import <Messenger/FBWebImageDownloader.h>

@class FBImageDownloader, FBWebImageNetworkDownloaderHelper, NSString;

@interface FBWebImageNormalDownloader : NSObject <FBWebImageNetworkDownloaderHelperDelegate, FBWebImageDownloader> {

	FBImageDownloader* _downloader;
	FBWebImageNetworkDownloaderHelper* _downloaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithDownloader:(id)arg1 ;
-(id)startDownloadForSpecifier:(id)arg1 downloadNode:(id)arg2 withScenePath:(id)arg3 analyticsTags:(id)arg4 queue:(id)arg5 ;
-(id)webImageDownloadResponseForDownloadResponse:(id)arg1 downloadNode:(id)arg2 specifier:(id)arg3 isLast:(BOOL)arg4 ;
-(void)cancelDownloadToken:(id)arg1 ;
-(void)_handleDownloadProgress:(double)arg1 node:(id)arg2 queue:(id)arg3 ;
-(void)_completeDownload:(id)arg1 node:(id)arg2 specifier:(id)arg3 queue:(id)arg4 ;
-(void)cancel;
@end

