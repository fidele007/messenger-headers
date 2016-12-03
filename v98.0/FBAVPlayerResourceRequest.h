/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class AVAssetResourceLoadingRequest, NSString, NSURL, NSError;

@interface FBAVPlayerResourceRequest : NSObject {

	AVAssetResourceLoadingRequest* _loadingRequest;
	NSString* _requestID;
	unsigned long long _dataLength;
	BOOL _disableThrottling;
	BOOL _disableRedirects;
	BOOL _enableLimitRequestLength;
	NSURL* _requestURL;
	NSString* _videoID;
	NSString* _cacheKey;
	NSString* _trackerID;
	BOOL _isAudio;
	BOOL _bypassCache;
	BOOL _enablePrefetchLookupWhenBypassCache;
	BOOL _firstRequest;
	NSError* _error;

}
-(id)videoID;
-(id)trackerID;
-(id)initWithResourceLoadingRequest:(id)arg1 ;
-(BOOL)bypassCache;
-(BOOL)enablePrefetchLookupWhenBypassCache;
-(id)_createRequestID;
-(id)initWithFNFResourceLoadingRequest:(id)arg1 ;
-(void)sendResponseData:(id)arg1 ;
-(void)sendResponseDataForPlaylist:(id)arg1 ;
-(void)sendErrorForPlaylist:(id)arg1 ;
-(void)sendFinishedLoadingResponse;
-(void)sendHeaderDataForURL:(id)arg1 range:(NSRange)arg2 length:(unsigned long long)arg3 ;
-(void)sendRedirectForURL:(id)arg1 error:(id)arg2 ;
-(NSRange)getByteRequestRange;
-(NSRange)getByteRequestAbsoluteRange;
-(id)getRequestURL;
-(void)disableRedirects;
-(void)enableLimitRequestLength;
-(BOOL)limitRequestLength;
-(void)setVideoId:(id)arg1 cacheKey:(id)arg2 trackerID:(id)arg3 ;
-(BOOL)isFirstRequest;
-(id)cacheKey;
-(unsigned long long)currentOffset;
-(unsigned long long)dataLength;
-(void)setRemoteURL:(id)arg1 ;
-(id)requestID;
-(BOOL)isAudio;
@end

