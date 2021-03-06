/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class FBDNSCacheHost;

@interface FBDNSCacheEntry : NSObject <NSCoding> {

	BOOL _pinned;
	FBDNSCacheHost* _host;
	long long _timestamp;

}

@property (nonatomic,copy,readonly) FBDNSCacheHost * host;              //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL pinned;                             //@synthesize pinned=_pinned - In the implementation block
+(unsigned long long)persistenceVersion;
-(id)initWithHost:(id)arg1 timestamp:(long long)arg2 pinned:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)timestamp;
-(FBDNSCacheHost *)host;
-(BOOL)pinned;
@end

