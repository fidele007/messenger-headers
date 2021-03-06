/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMQTTCredentials : NSObject {

	NSString* _userID;
	NSString* _deviceID;
	NSString* _accessToken;

}

@property (nonatomic,copy,readonly) NSString * userID;                   //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceID;                 //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(id)initWithUserID:(id)arg1 deviceID:(id)arg2 accessToken:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)deviceID;
-(NSString *)userID;
-(NSString *)accessToken;
@end

