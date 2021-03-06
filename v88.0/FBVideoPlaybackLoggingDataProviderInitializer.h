/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBVideoPlaybackLoggingDataProviderInitializer <NSObject>
@property (nonatomic,readonly) id<FBVideoPlaybackKitLoggingDataSessionIDProvider> videoHomeSession; 
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID; 
@property (nonatomic,copy,readonly) NSString * videoChannelID; 
@property (nonatomic,copy,readonly) NSString * externalLogID; 
@property (nonatomic,copy,readonly) NSString * externalLogType; 
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData; 
@property (nonatomic,copy,readonly) NSString * hostVideoID; 
@required
-(id<FBVideoPlaybackKitLoggingDataSessionIDProvider>)videoHomeSession;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 reactionComponentTrackingData:(id)arg5;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4;
-(id)initWithHostVideoID:(id)arg1;
-(NSString *)videoHomeSessionID;
-(NSString *)videoChannelID;
-(NSString *)hostVideoID;

@end

