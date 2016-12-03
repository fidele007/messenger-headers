/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBAccessToken;

@interface FBViewerInfo : NSObject <NSCopying> {

	unsigned long long _hash;
	NSString* _fbid;
	FBAccessToken* _accessToken;

}

@property (copy,readonly) NSString * fbid;                          //@synthesize fbid=_fbid - In the implementation block
@property (copy,readonly) FBAccessToken * accessToken;              //@synthesize accessToken=_accessToken - In the implementation block
-(NSString *)fbid;
-(id)initWithFBID:(id)arg1 accessToken:(id)arg2 ;
-(id)initWithFBID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBAccessToken *)accessToken;
@end

