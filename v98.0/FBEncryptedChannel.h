/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface FBEncryptedChannel : NSObject <NSCoding, NSCopying> {

	NSString* _encryptionKey;
	NSString* _macKey;
	NSString* _userAgent;
	NSString* _bucketId;
	BOOL _activated;
	long long _ttlSinceActivation;
	double _serverCreationUnixTime;
	NSString* _channelID;
	NSDate* _expirationDate;

}

@property (copy) NSDate * expirationDate;                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                  //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * encryptionKey;              //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * macKey;                     //@synthesize macKey=_macKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent;                  //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy,readonly) NSString * bucketId;                   //@synthesize bucketId=_bucketId - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) BOOL activated;                             //@synthesize activated=_activated - In the implementation block
-(NSString *)bucketId;
-(NSString *)channelID;
-(NSString *)macKey;
-(id)initWithChannelID:(id)arg1 encryptionKey:(id)arg2 macKey:(id)arg3 userAgent:(id)arg4 bucketId:(id)arg5 ttlSinceActivation:(long long)arg6 expirationDate:(id)arg7 serverCreationUnixTime:(double)arg8 ;
-(BOOL)isValidForUserAgent:(id)arg1 andBucketId:(id)arg2 ;
-(BOOL)_isExpired;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)activate;
-(BOOL)activated;
-(NSString *)userAgent;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)encryptionKey;
@end

