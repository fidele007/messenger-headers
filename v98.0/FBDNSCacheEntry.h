/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

