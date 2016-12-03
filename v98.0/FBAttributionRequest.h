/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBAttributionRequest : FBNetworkerRequest {

	BOOL _trackingEnabled;
	NSString* _userID;
	NSString* _deviceID;
	NSString* _advertisingID;
	NSString* _previousAdvertisingID;

}

@property (nonatomic,copy,readonly) NSString * userID;                             //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceID;                           //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * advertisingID;                      //@synthesize advertisingID=_advertisingID - In the implementation block
@property (nonatomic,copy,readonly) NSString * previousAdvertisingID;              //@synthesize previousAdvertisingID=_previousAdvertisingID - In the implementation block
@property (nonatomic,readonly) BOOL trackingEnabled;                               //@synthesize trackingEnabled=_trackingEnabled - In the implementation block
-(id)networkRequest;
-(id)initWithUserID:(id)arg1 deviceID:(id)arg2 advertisingID:(id)arg3 previousAdvertisingID:(id)arg4 trackingEnabled:(BOOL)arg5 callbackPerformer:(id)arg6 ;
-(NSString *)advertisingID;
-(BOOL)trackingEnabled;
-(NSString *)previousAdvertisingID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)deviceID;
-(NSString *)userID;
@end

