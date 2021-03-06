/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoPrefetcher : NSObject
+(void)prefetchIfAllowed:(id)arg1 SDPlaybackURL:(id)arg2 HDPlaybackURL:(id)arg3 sdBitRate:(int)arg4 sdAtomSize:(int)arg5 hdBitRate:(int)arg6 hdAtomSize:(int)arg7 session:(id)arg8 shouldAutoPlay:(BOOL)arg9 useQueue:(BOOL)arg10 definition:(long long)arg11 forScenePath:(id)arg12 ;
+(long long)_sizeFromSeconds:(long long)arg1 atomSize:(int)arg2 bitRate:(int)arg3 defaultSize:(long long)arg4 ;
+(id)_selectVideoTrackForMpd:(id)arg1 session:(id)arg2 ;
+(void)_prefetchTrack:(id)arg1 videoID:(id)arg2 roundingOffset:(unsigned long long)arg3 videoNetworker:(id)arg4 forScenePath:(id)arg5 useQueue:(BOOL)arg6 ;
+(void)_prefetchDashIfAllowed:(id)arg1 playlistData:(id)arg2 session:(id)arg3 shouldAutoPlay:(BOOL)arg4 videoNetworker:(id)arg5 forScenePath:(id)arg6 useQueue:(BOOL)arg7 ;
+(void)prefetchIfAllowed:(id)arg1 session:(id)arg2 shouldAutoPlay:(BOOL)arg3 useQueue:(BOOL)arg4 definition:(long long)arg5 forScenePath:(id)arg6 ;
+(void)setDisableVideoPrefetching:(BOOL)arg1 ;
@end

