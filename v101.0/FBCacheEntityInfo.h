/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBCacheEntityInfo : NSObject {

	NSString* _uuid;
	NSString* _key;
	double _accessTime;
	unsigned long long _fileSize;
	BOOL _dirty;

}

@property (copy,readonly) NSString * key;                      //@synthesize key=_key - In the implementation block
@property (copy,readonly) NSString * uuid;                     //@synthesize uuid=_uuid - In the implementation block
@property (readonly) double accessTime;                        //@synthesize accessTime=_accessTime - In the implementation block
@property (readonly) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDirty) BOOL dirty;                         //@synthesize dirty=_dirty - In the implementation block
-(double)accessTime;
-(void)registerAccess;
-(id)initWithKey:(id)arg1 uuid:(id)arg2 accessTime:(double)arg3 fileSize:(unsigned long long)arg4 ;
-(void)dealloc;
-(NSString *)key;
-(NSString *)uuid;
-(void)setDirty:(BOOL)arg1 ;
-(unsigned long long)fileSize;
-(BOOL)isDirty;
@end
