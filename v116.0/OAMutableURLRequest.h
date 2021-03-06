/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSMutableURLRequest.h>

@protocol OASignatureProviding;
@class OAConsumer, OAToken, NSString, NSMutableDictionary;

@interface OAMutableURLRequest : NSMutableURLRequest {

	OAConsumer* consumer;
	OAToken* token;
	NSString* realm;
	NSString* signature;
	id<OASignatureProviding> signatureProvider;
	NSString* nonce;
	NSString* timestamp;
	NSMutableDictionary* extraOAuthParameters;

}

@property (readonly) NSString * signature; 
@property (readonly) NSString * nonce; 
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 ;
-(void)_generateTimestamp;
-(void)_generateNonce;
-(id)_signatureBaseString;
-(id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 nonce:(id)arg6 timestamp:(id)arg7 ;
-(void)setOAuthParameterName:(id)arg1 withValue:(id)arg2 ;
-(void)dealloc;
-(void)prepare;
-(NSString *)signature;
-(NSString *)nonce;
@end

