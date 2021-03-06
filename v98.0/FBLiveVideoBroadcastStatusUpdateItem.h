/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBLiveVideoBroadcastStatusSubscriptionHandler;

@interface FBLiveVideoBroadcastStatusUpdateItem : NSObject {

	NSString* _videoID;
	/*^block*/id _updateCallback;
	NSString* _lastBroadcastStatus;
	FBLiveVideoBroadcastStatusSubscriptionHandler* _subscriptionHandler;

}

@property (nonatomic,copy) NSString * videoID;                                                                 //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,copy) id updateCallback;                                                                  //@synthesize updateCallback=_updateCallback - In the implementation block
@property (nonatomic,copy) NSString * lastBroadcastStatus;                                                     //@synthesize lastBroadcastStatus=_lastBroadcastStatus - In the implementation block
@property (nonatomic,retain) FBLiveVideoBroadcastStatusSubscriptionHandler * subscriptionHandler;              //@synthesize subscriptionHandler=_subscriptionHandler - In the implementation block
-(NSString *)videoID;
-(void)setVideoID:(NSString *)arg1 ;
-(id)updateCallback;
-(void)setUpdateCallback:(id)arg1 ;
-(NSString *)lastBroadcastStatus;
-(void)setLastBroadcastStatus:(NSString *)arg1 ;
-(FBLiveVideoBroadcastStatusSubscriptionHandler *)subscriptionHandler;
-(void)setSubscriptionHandler:(FBLiveVideoBroadcastStatusSubscriptionHandler *)arg1 ;
@end

