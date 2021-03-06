/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:26 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNImageSize;

@interface MNImageCacheRequest : FBValueObject <NSCopying> {

	NSString* _key;
	MNImageSize* _size;

}

@property (nonatomic,copy,readonly) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) MNImageSize * size;              //@synthesize size=_size - In the implementation block
-(id)initWithKey:(id)arg1 size:(id)arg2 ;
-(MNImageSize *)size;
-(NSString *)key;
@end

