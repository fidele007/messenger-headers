/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMCustomDictionaryStoreConfiguration : FBValueObject <NSCopying> {

	BOOL _ignoreDeserializeFailure;
	double _maxWriteInterval;
	unsigned long long _customBlobType;

}

@property (nonatomic,readonly) double maxWriteInterval;                        //@synthesize maxWriteInterval=_maxWriteInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long customBlobType;              //@synthesize customBlobType=_customBlobType - In the implementation block
@property (nonatomic,readonly) BOOL ignoreDeserializeFailure;                  //@synthesize ignoreDeserializeFailure=_ignoreDeserializeFailure - In the implementation block
-(id)initWithMaxWriteInterval:(double)arg1 customBlobType:(unsigned long long)arg2 ignoreDeserializeFailure:(BOOL)arg3 ;
-(unsigned long long)customBlobType;
-(double)maxWriteInterval;
-(BOOL)ignoreDeserializeFailure;
@end

