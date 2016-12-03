/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphBatchParticipatingRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface FBGraphRequest : FBGraphBatchParticipatingRequest <NSCopying> {

	NSString* _path;
	NSString* _friendlyName;
	NSString* _httpMethod;
	NSDictionary* _parameters;
	NSString* _relativePath;
	BOOL _useMultipartForm;
	BOOL _shouldCompressBody;
	BOOL _useSecureTierHost;
	BOOL _useInternTierHost;
	BOOL _sentUDPPrimingPacket;
	NSString* _version;

}

@property (assign,nonatomic) BOOL includeMigrationBundle; 
@property (nonatomic,copy) NSString * version;                         //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL useMultipartForm;                    //@synthesize useMultipartForm=_useMultipartForm - In the implementation block
@property (assign,nonatomic) BOOL shouldCompressBody;                  //@synthesize shouldCompressBody=_shouldCompressBody - In the implementation block
@property (assign,nonatomic) BOOL useSecureTierHost;                   //@synthesize useSecureTierHost=_useSecureTierHost - In the implementation block
@property (assign,nonatomic) BOOL useInternTierHost;                   //@synthesize useInternTierHost=_useInternTierHost - In the implementation block
@property (nonatomic,readonly) BOOL sentUDPPrimingPacket;              //@synthesize sentUDPPrimingPacket=_sentUDPPrimingPacket - In the implementation block
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 ;
-(id)initWithPath:(id)arg1 parameters:(id)arg2 httpMethod:(id)arg3 friendlyName:(id)arg4 callerClass:(Class)arg5 ;
-(void)setUseMultipartForm:(BOOL)arg1 ;
-(void)setUseSecureTierHost:(BOOL)arg1 ;
-(void)setIncludeMigrationBundle:(BOOL)arg1 ;
-(id)batchParameters;
-(void)setShouldCompressBody:(BOOL)arg1 ;
-(void)setQueryParameter:(id)arg1 forKey:(id)arg2 ;
-(void)setUseInternTierHost:(BOOL)arg1 ;
-(BOOL)sentUDPPrimingPacket;
-(id)requestForUDPPriming;
-(void)setUDPPrimedChannelID:(id)arg1 withRequestForHeader:(id)arg2 ;
-(id)analyticsName;
-(BOOL)useMultipartForm;
-(void)removeQueryParameterForKey:(id)arg1 ;
-(void)copyMembersFromRequest:(id)arg1 withZone:(NSZone*)arg2 ;
-(BOOL)useInternTierHost;
-(BOOL)useSecureTierHost;
-(BOOL)includeMigrationBundle;
-(unsigned long long)compressionMethod;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)host;
-(id)parameters;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)httpMethod;
-(BOOL)shouldCompressBody;
-(id)relativePath;
@end

