/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkRequest.h>
#import <Messenger/FBDuplicatedFacebookAPIProperties.h>

@class NSString, FBGraphRequest;

@interface FBFacebookAPIRequest : FBNetworkRequest <FBDuplicatedFacebookAPIProperties> {

	BOOL _useZeroRatedHost;
	NSString* _actorFBID;
	NSString* _accessTokenOverride_DEPRECATED;

}

@property (assign,nonatomic) BOOL useZeroRatedHost;                                //@synthesize useZeroRatedHost=_useZeroRatedHost - In the implementation block
@property (nonatomic,readonly) FBGraphRequest * requestForUDPPriming; 
@property (nonatomic,copy) NSString * actorFBID;                                   //@synthesize actorFBID=_actorFBID - In the implementation block
@property (nonatomic,copy) NSString * accessTokenOverride_DEPRECATED;              //@synthesize accessTokenOverride_DEPRECATED=_accessTokenOverride_DEPRECATED - In the implementation block
+(void)configureWithLoginSecret:(id)arg1 appVersion:(id)arg2 ;
-(void)setUseZeroRatedHost:(BOOL)arg1 ;
-(void)setActorFBID:(NSString *)arg1 ;
-(void)setAccessTokenOverride_DEPRECATED:(NSString *)arg1 ;
-(NSString *)accessTokenOverride_DEPRECATED;
-(NSString *)actorFBID;
-(id)generateRequest;
-(FBGraphRequest *)requestForUDPPriming;
-(BOOL)useZeroRatedHost;
-(id)methodForSignature;
-(BOOL)useMultipartForm;
-(unsigned long long)compressionMethod;
-(id)init;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
@end

