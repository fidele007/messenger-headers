/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoPlaybackLoggingDataProvider.h>

@protocol FBVideoPlaybackLoggingDataProviderInitializer, FBVideoPlaybackChainingDepthProvider, FBScrollVelocityProvider;
@class NSString, NSArray, NSNumber, FBUserSession;

@interface FBSimpleVideoPlaybackLoggingDataProvider : NSObject <FBVideoPlaybackLoggingDataProvider> {

	BOOL _isSponsored;
	BOOL _isLiveStreaming;
	BOOL _isSpherical;
	BOOL _isLoggingEnabled;
	BOOL _wasAutoScrolled;
	BOOL _isBroadcast;
	BOOL _logLiveEventRealtime;
	id<FBVideoPlaybackLoggingDataProviderInitializer> _loggingProviderInitializer;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	unsigned long long _playerSource;
	unsigned long long _videoPlayReason;
	NSArray* _trackingCodes;
	unsigned long long _debugReason;
	NSString* _channelEligibility;
	NSString* _streamFormat;
	NSNumber* _isMonetizable;
	NSString* _channelAdsOpportunity;
	NSString* _channelSessionID;
	NSString* _castingSessionID;
	NSNumber* _positionInChannel;
	id<FBVideoPlaybackChainingDepthProvider> _channelDepthLevelProvider;
	FBUserSession* _session;
	NSString* _playerVersion;
	id<FBScrollVelocityProvider> _scrollVelocityProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) BOOL isSponsored;                                                                          //@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,readonly) BOOL isLiveStreaming;                                                                      //@synthesize isLiveStreaming=_isLiveStreaming - In the implementation block
@property (nonatomic,readonly) BOOL isSpherical;                                                                          //@synthesize isSpherical=_isSpherical - In the implementation block
@property (nonatomic,readonly) BOOL isBroadcast;                                                                          //@synthesize isBroadcast=_isBroadcast - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * isMonetizable;                                                             //@synthesize isMonetizable=_isMonetizable - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelAdsOpportunity;                                                     //@synthesize channelAdsOpportunity=_channelAdsOpportunity - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelSessionID;                                                          //@synthesize channelSessionID=_channelSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * castingSessionID;                                                          //@synthesize castingSessionID=_castingSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * positionInChannel;                                                         //@synthesize positionInChannel=_positionInChannel - In the implementation block
@property (nonatomic,__weak,readonly) id<FBVideoPlaybackChainingDepthProvider> channelDepthLevelProvider;                 //@synthesize channelDepthLevelProvider=_channelDepthLevelProvider - In the implementation block
@property (nonatomic,__weak,readonly) id<FBScrollVelocityProvider> scrollVelocityProvider;                                //@synthesize scrollVelocityProvider=_scrollVelocityProvider - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer;              //@synthesize loggingProviderInitializer=_loggingProviderInitializer - In the implementation block
@property (assign,nonatomic) unsigned long long playerSource;                                                             //@synthesize playerSource=_playerSource - In the implementation block
@property (assign,nonatomic) unsigned long long videoPlayReason;                                                          //@synthesize videoPlayReason=_videoPlayReason - In the implementation block
@property (assign,nonatomic) unsigned long long debugReason;                                                              //@synthesize debugReason=_debugReason - In the implementation block
@property (assign,nonatomic) NSString * channelEligibility;                                                               //@synthesize channelEligibility=_channelEligibility - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerVersion;                                                             //@synthesize playerVersion=_playerVersion - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                                                                       //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (assign,nonatomic) BOOL wasAutoScrolled;                                                                        //@synthesize wasAutoScrolled=_wasAutoScrolled - In the implementation block
@property (nonatomic,copy) NSString * streamFormat;                                                                       //@synthesize streamFormat=_streamFormat - In the implementation block
@property (assign,nonatomic) BOOL logLiveEventRealtime;                                                                   //@synthesize logLiveEventRealtime=_logLiveEventRealtime - In the implementation block
-(unsigned long long)playerSource;
-(BOOL)isSpherical;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(NSArray *)trackingCodes;
-(NSString *)streamFormat;
-(NSString *)playerVersion;
-(void)setVideoPlayReason:(unsigned long long)arg1 ;
-(id)init:(id)arg1 playerOrigin:(id)arg2 playerSubOrigin:(id)arg3 playerSource:(unsigned long long)arg4 trackingCodes:(id)arg5 isSponsored:(BOOL)arg6 positionInChannel:(id)arg7 scrollVelocityProvider:(id)arg8 session:(id)arg9 ;
-(void)setChannelEligibility:(NSString *)arg1 ;
-(NSNumber *)isMonetizable;
-(void)updateAttributesWhenVideoPlaybackItemIsReplaced:(id)arg1 isLiveStreaming:(BOOL)arg2 isMonetizable:(id)arg3 isSpherical:(BOOL)arg4 playerVersion:(id)arg5 isBroadcast:(BOOL)arg6 ;
-(void)setDebugReason:(unsigned long long)arg1 ;
-(void)setStreamFormat:(NSString *)arg1 ;
-(void)updateChannelAttributes:(id)arg1 channelSessionID:(id)arg2 positionInChannel:(id)arg3 channelDepthLevelProvider:(id)arg4 wasAutoScrolled:(BOOL)arg5 ;
-(void)updateChannelSessionID:(id)arg1 ;
-(void)updateCastingSessionID:(id)arg1 ;
-(NSString *)channelAdsOpportunity;
-(NSString *)channelSessionID;
-(NSString *)castingSessionID;
-(NSNumber *)positionInChannel;
-(id<FBVideoPlaybackChainingDepthProvider>)channelDepthLevelProvider;
-(id<FBScrollVelocityProvider>)scrollVelocityProvider;
-(unsigned long long)videoPlayReason;
-(unsigned long long)debugReason;
-(NSString *)channelEligibility;
-(BOOL)wasAutoScrolled;
-(void)setWasAutoScrolled:(BOOL)arg1 ;
-(BOOL)logLiveEventRealtime;
-(void)setLogLiveEventRealtime:(BOOL)arg1 ;
-(void)setPlayerSource:(unsigned long long)arg1 ;
-(BOOL)isLiveStreaming;
-(FBUserSession *)session;
-(BOOL)isSponsored;
-(BOOL)isLoggingEnabled;
-(BOOL)isBroadcast;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
@end

