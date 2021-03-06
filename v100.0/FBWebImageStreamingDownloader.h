/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebImageNetworkDownloaderHelperDelegate.h>
#import <Messenger/FBWebImageDownloader.h>

@protocol FBImageStreamingService;
@class FBWebImageNetworkDownloaderHelper, NSString;

@interface FBWebImageStreamingDownloader : NSObject <FBWebImageNetworkDownloaderHelperDelegate, FBWebImageDownloader> {

	id<FBImageStreamingService> _streamer;
	FBWebImageNetworkDownloaderHelper* _downloaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)startDownloadForSpecifier:(id)arg1 downloadNode:(id)arg2 withScenePath:(id)arg3 analyticsTags:(id)arg4 queue:(id)arg5 ;
-(id)webImageDownloadResponseForDownloadResponse:(id)arg1 downloadNode:(id)arg2 specifier:(id)arg3 isLast:(BOOL)arg4 ;
-(void)cancelDownloadToken:(id)arg1 ;
-(void)_streamingResponse:(id)arg1 forNode:(id)arg2 andSpecifier:(id)arg3 queue:(id)arg4 ;
-(void)cancel;
-(id)initWithStreamer:(id)arg1 ;
@end

