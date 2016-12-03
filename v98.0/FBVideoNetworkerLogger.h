/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAnalytics;

@interface FBVideoNetworkerLogger : NSObject {

	FBAnalytics* _analytics;

}
-(id)initWithAnalytics:(id)arg1 ;
-(void)logNetworkerReceivedHeaders:(id)arg1 forURL:(id)arg2 statusCode:(unsigned long long)arg3 mediaType:(id)arg4 enabledCDNCacheQuery:(BOOL)arg5 videoID:(id)arg6 ;
-(void)logNetworkerDidFail:(id)arg1 forURL:(id)arg2 statusCode:(unsigned long long)arg3 mediaType:(id)arg4 videoID:(id)arg5 progress:(int)arg6 shouldRetry:(BOOL)arg7 duration:(int)arg8 ;
-(void)logNetworkerDidCancelForURL:(id)arg1 mediaType:(id)arg2 progress:(int)arg3 offset:(unsigned long long)arg4 videoID:(id)arg5 duration:(int)arg6 ;
-(void)logNetworkerDidStartForURL:(id)arg1 mediaType:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 videoID:(id)arg5 ;
-(void)logNetworkerDidDequeueForURL:(id)arg1 mediaType:(id)arg2 error:(id)arg3 videoID:(id)arg4 ;
-(void)logNetworkerDidFinishForURL:(id)arg1 mediaType:(id)arg2 bytes:(unsigned long long)arg3 duration:(int)arg4 offset:(unsigned long long)arg5 isPush:(BOOL)arg6 videoID:(id)arg7 ;
-(void)logPrefetchCancel:(id)arg1 videoID:(id)arg2 offset:(unsigned long long)arg3 cancelReason:(id)arg4 ;
-(void)logNetworkerReceivedFirstData:(id)arg1 forURL:(id)arg2 mediaType:(id)arg3 videoID:(id)arg4 ;
-(void)logDidReadConnectionForURL:(id)arg1 socket:(id)arg2 videoID:(id)arg3 offset:(unsigned long long)arg4 requestLength:(unsigned long long)arg5 ;
-(void)logDidFinishConnectionForPlaylist:(id)arg1 socket:(id)arg2 bytes:(unsigned long long)arg3 duration:(unsigned long long)arg4 offset:(unsigned long long)arg5 requestLength:(unsigned long long)arg6 videoID:(id)arg7 cancelReason:(id)arg8 firstRequest:(BOOL)arg9 ;
-(void)logDidSendRedirectForURL:(id)arg1 videoID:(id)arg2 ;
-(void)logDidFinishConnectionForURL:(id)arg1 socket:(id)arg2 bytes:(unsigned long long)arg3 duration:(unsigned long long)arg4 bytesCached:(unsigned long long)arg5 prefetchedBytesCached:(unsigned long long)arg6 cacheReadDurationMS:(unsigned long long)arg7 prefetchCacheReadDurationMS:(unsigned long long)arg8 offset:(unsigned long long)arg9 requestLength:(unsigned long long)arg10 videoID:(id)arg11 cancelReason:(id)arg12 firstRequest:(BOOL)arg13 ;
-(void)logDidCloseConnectionForURL:(id)arg1 socket:(id)arg2 videoID:(id)arg3 offset:(unsigned long long)arg4 requestLength:(unsigned long long)arg5 bytes:(unsigned long long)arg6 bytesCached:(unsigned long long)arg7 prefetchBytesCached:(unsigned long long)arg8 error:(id)arg9 ;
-(void)_logEvent:(id)arg1 URL:(id)arg2 error:(id)arg3 extra:(id)arg4 ;
@end

