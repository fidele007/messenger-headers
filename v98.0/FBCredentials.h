/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCredentials : FBValueObject <NSCopying> {

	NSString* _loginUUID;
	NSString* _accessToken;
	NSString* _loggedInUserFBID;
	NSString* _actingAccessToken;
	NSString* _actingUserFBID;

}

@property (nonatomic,copy,readonly) NSString * loginUUID;                      //@synthesize loginUUID=_loginUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessToken;                    //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggedInUserFBID;               //@synthesize loggedInUserFBID=_loggedInUserFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * actingAccessToken;              //@synthesize actingAccessToken=_actingAccessToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * actingUserFBID;                 //@synthesize actingUserFBID=_actingUserFBID - In the implementation block
-(NSString *)loggedInUserFBID;
-(NSString *)actingAccessToken;
-(NSString *)actingUserFBID;
-(NSString *)loginUUID;
-(id)initWithLoginUUID:(id)arg1 accessToken:(id)arg2 loggedInUserFBID:(id)arg3 actingAccessToken:(id)arg4 actingUserFBID:(id)arg5 ;
-(NSString *)accessToken;
@end

