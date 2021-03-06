/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReceivedDataBufferProtocol.h>

@protocol FBImageDownloaderCache, FBReceivedDataBufferProtocol;
@class NSURL, NSData, NSString;

@interface FBCachingReceivedDataBuffer : NSObject <FBReceivedDataBufferProtocol> {

	NSURL* _url;
	id<FBImageDownloaderCache> _imageCache;
	NSData* _partialData;
	id<FBReceivedDataBufferProtocol> _targetBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReceivedDataBufferDelegate> delegate; 
-(void)_appendData:(id)arg1 ;
-(void)_cacheFullImageData;
-(id)initWithURL:(id)arg1 partialData:(id)arg2 imageCache:(id)arg3 targetBuffer:(id)arg4 ;
-(void)setDelegate:(id<FBReceivedDataBufferDelegate>)arg1 ;
-(id<FBReceivedDataBufferDelegate>)delegate;
-(unsigned long long)length;
-(id)data;
-(void)close;
-(void)appendData:(id)arg1 ;
-(void)open;
@end

