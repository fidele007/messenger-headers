/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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

