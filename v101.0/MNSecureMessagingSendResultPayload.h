/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSString;

@interface MNSecureMessagingSendResultPayload : NSObject <TBase, NSCoding> {

	long long __server_time_micros;
	NSData* __facebook_hmac;
	BOOL __server_time_micros_isset;
	BOOL __facebook_hmac_isset;

}

@property (assign,setter=setServer_time_micros:,getter=server_time_micros,nonatomic) long long server_time_micros; 
@property (setter=setFacebook_hmac:,getter=facebook_hmac,nonatomic,retain) NSData * facebook_hmac; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setServer_time_micros:(long long)arg1 ;
-(void)setFacebook_hmac:(NSData *)arg1 ;
-(id)initWithServer_time_micros:(long long)arg1 facebook_hmac:(id)arg2 ;
-(long long)server_time_micros;
-(BOOL)server_time_microsIsSet;
-(void)unsetServer_time_micros;
-(NSData *)facebook_hmac;
-(BOOL)facebook_hmacIsSet;
-(void)unsetFacebook_hmac;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end
