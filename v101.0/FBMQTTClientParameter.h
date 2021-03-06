/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMqttCredential, NSString;

@interface FBMQTTClientParameter : FBValueObject <NSCopying> {

	BOOL _inBackground;
	BOOL _useVOIP;
	BOOL _disableSSL;
	int _mqttHostPort;
	int _encodingFormat;
	FBMqttCredential* _credential;
	NSString* _clientId;
	NSString* _mqttHostName;
	NSString* _appSessionId;
	NSString* _networkSessionId;
	NSString* _mqttSessionId;

}

@property (nonatomic,copy,readonly) FBMqttCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientId;                        //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mqttHostName;                    //@synthesize mqttHostName=_mqttHostName - In the implementation block
@property (nonatomic,readonly) int mqttHostPort;                                //@synthesize mqttHostPort=_mqttHostPort - In the implementation block
@property (nonatomic,readonly) BOOL inBackground;                               //@synthesize inBackground=_inBackground - In the implementation block
@property (nonatomic,readonly) BOOL useVOIP;                                    //@synthesize useVOIP=_useVOIP - In the implementation block
@property (nonatomic,copy,readonly) NSString * appSessionId;                    //@synthesize appSessionId=_appSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkSessionId;                //@synthesize networkSessionId=_networkSessionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * mqttSessionId;                   //@synthesize mqttSessionId=_mqttSessionId - In the implementation block
@property (nonatomic,readonly) BOOL disableSSL;                                 //@synthesize disableSSL=_disableSSL - In the implementation block
@property (nonatomic,readonly) int encodingFormat;                              //@synthesize encodingFormat=_encodingFormat - In the implementation block
-(NSString *)mqttSessionId;
-(BOOL)inBackground;
-(int)encodingFormat;
-(BOOL)useVOIP;
-(NSString *)mqttHostName;
-(int)mqttHostPort;
-(BOOL)disableSSL;
-(NSString *)networkSessionId;
-(NSString *)appSessionId;
-(id)initWithCredential:(id)arg1 clientId:(id)arg2 mqttHostName:(id)arg3 mqttHostPort:(int)arg4 inBackground:(BOOL)arg5 useVOIP:(BOOL)arg6 appSessionId:(id)arg7 networkSessionId:(id)arg8 mqttSessionId:(id)arg9 disableSSL:(BOOL)arg10 encodingFormat:(int)arg11 ;
-(FBMqttCredential *)credential;
-(NSString *)clientId;
@end

