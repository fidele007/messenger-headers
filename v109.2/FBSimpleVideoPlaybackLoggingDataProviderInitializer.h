/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoPlaybackLoggingDataProviderInitializer.h>

@protocol FBVideoPlaybackKitLoggingDataSessionIDProvider;
@class NSString, NSNumber;

@interface FBSimpleVideoPlaybackLoggingDataProviderInitializer : NSObject <FBVideoPlaybackLoggingDataProviderInitializer> {

	NSString* _staticVideoHomeSessionID;
	id<FBVideoPlaybackKitLoggingDataSessionIDProvider> _videoHomeSession;
	BOOL _isCreatorChannelPlaylistItem;
	NSString* _videoChannelID;
	NSString* _externalLogID;
	NSString* _externalLogType;
	NSString* _reactionComponentTrackingData;
	NSString* _sectionTrackingData;
	NSString* _hostVideoID;
	NSString* _initialChannelSessionID;
	NSNumber* _instreamVideoAdBreakIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * videoChannelID;                             //@synthesize videoChannelID=_videoChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogID;                              //@synthesize externalLogID=_externalLogID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogType;                            //@synthesize externalLogType=_externalLogType - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData;              //@synthesize reactionComponentTrackingData=_reactionComponentTrackingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionTrackingData;                        //@synthesize sectionTrackingData=_sectionTrackingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostVideoID;                                //@synthesize hostVideoID=_hostVideoID - In the implementation block
@property (nonatomic,copy,readonly) NSString * initialChannelSessionID;                    //@synthesize initialChannelSessionID=_initialChannelSessionID - In the implementation block
@property (nonatomic,copy) NSNumber * instreamVideoAdBreakIndex;                           //@synthesize instreamVideoAdBreakIndex=_instreamVideoAdBreakIndex - In the implementation block
@property (nonatomic,readonly) BOOL isCreatorChannelPlaylistItem;                          //@synthesize isCreatorChannelPlaylistItem=_isCreatorChannelPlaylistItem - In the implementation block
-(id)_initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6 sectionTrackingData:(id)arg7 isCreatorChannelPlaylistItem:(BOOL)arg8 staticVideoHomeSessionID:(id)arg9 hostVideoID:(id)arg10 instreamVideoAdBreakIndex:(id)arg11 ;
-(NSString *)videoChannelID;
-(id)forCopyingOnlyVideoHomeSession;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(NSString *)initialChannelSessionID;
-(NSString *)reactionComponentTrackingData;
-(NSString *)sectionTrackingData;
-(BOOL)isCreatorChannelPlaylistItem;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 initialChannelSessionID:(id)arg5 reactionComponentTrackingData:(id)arg6 sectionTrackingData:(id)arg7 ;
-(id)initWithLoggingProviderInitializer:(id)arg1 ;
-(id)initWithVideoChannelID:(id)arg1 staticVideoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 ;
-(id)initWithHostVideoID:(id)arg1 instreamVideoAdBreakIndex:(id)arg2 ;
-(void)updateVideoChannelID:(id)arg1 ;
-(void)updateInitialChannelSessionID:(id)arg1 ;
-(void)updateIsCreatorChannelPlaylistItem:(BOOL)arg1 ;
-(id)videoHomeSessionID;
-(id)forCopyingOnlyStaticVideoHomeSessionID;
-(NSString *)hostVideoID;
-(NSNumber *)instreamVideoAdBreakIndex;
-(void)setInstreamVideoAdBreakIndex:(NSNumber *)arg1 ;
@end

