/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface CDResourceMeta : NSObject {

	unsigned long long _size;
	long long _accessTime;
	long long _modificationTime;
	NSString* _tag;
	NSData* _extra;

}

@property (nonatomic,readonly) unsigned long long size;                 //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) long long accessTime;                    //@synthesize accessTime=_accessTime - In the implementation block
@property (nonatomic,readonly) long long modificationTime;              //@synthesize modificationTime=_modificationTime - In the implementation block
@property (nonatomic,readonly) NSString * tag;                          //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSData * extra;                          //@synthesize extra=_extra - In the implementation block
-(NSData *)extra;
-(id)initWithSize:(unsigned long long)arg1 accessTime:(long long)arg2 modificationTime:(long long)arg3 tag:(id)arg4 extra:(id)arg5 ;
-(long long)accessTime;
-(unsigned long long)size;
-(NSString *)tag;
-(long long)modificationTime;
@end

