/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol FBVideoPlaybackLoggingDataProviderInitializer <NSObject>
@property (nonatomic,copy,readonly) NSString * videoChannelID; 
@property (nonatomic,copy,readonly) NSString * externalLogID; 
@property (nonatomic,copy,readonly) NSString * externalLogType; 
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData; 
@property (nonatomic,copy,readonly) NSString * hostVideoID; 
@property (nonatomic,copy,readonly) NSString * initialChannelSessionID; 
@property (nonatomic,readonly) NSNumber * instreamVideoAdBreakIndex; 
@required
-(id)initWithLoggingProviderInitializer:(id)arg1 videoChannelID:(id)arg2 initialChannelSessionID:(id)arg3;
-(NSString *)videoChannelID;
-(id)forCopyingOnlyVideoHomeSession;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)initialChannelSessionID;
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2;
-(id)videoHomeSessionID;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;

@end

