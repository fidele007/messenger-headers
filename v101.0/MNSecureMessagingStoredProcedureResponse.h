/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSData, MNSecureMessagingStoredProcedureResponseBody, NSString;

@interface MNSecureMessagingStoredProcedureResponse : NSObject <TBase, NSCoding> {

	int __version;
	int __result;
	NSData* __nonce;
	MNSecureMessagingStoredProcedureResponseBody* __body;
	long long __date_micros;
	BOOL __version_isset;
	BOOL __result_isset;
	BOOL __nonce_isset;
	BOOL __body_isset;
	BOOL __date_micros_isset;

}

@property (assign,setter=setVersion:,getter=version,nonatomic) int version; 
@property (assign,setter=setResult:,getter=result,nonatomic) int result; 
@property (setter=setNonce:,getter=nonce,nonatomic,retain) NSData * nonce; 
@property (setter=setBody:,getter=body,nonatomic,retain) MNSecureMessagingStoredProcedureResponseBody * body; 
@property (assign,setter=setDate_micros:,getter=date_micros,nonatomic) long long date_micros; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)bodyIsSet;
-(long long)date_micros;
-(void)setDate_micros:(long long)arg1 ;
-(BOOL)versionIsSet;
-(void)unsetVersion;
-(BOOL)date_microsIsSet;
-(void)unsetDate_micros;
-(void)unsetBody;
-(BOOL)nonceIsSet;
-(void)unsetNonce;
-(id)initWithVersion:(int)arg1 result:(int)arg2 nonce:(id)arg3 body:(id)arg4 date_micros:(long long)arg5 ;
-(BOOL)resultIsSet;
-(void)unsetResult;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(MNSecureMessagingStoredProcedureResponseBody *)body;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(void)validate;
-(int)result;
-(void)setBody:(MNSecureMessagingStoredProcedureResponseBody *)arg1 ;
-(void)setResult:(int)arg1 ;
-(void)setNonce:(NSData *)arg1 ;
-(NSData *)nonce;
-(void)write:(id)arg1 ;
@end
