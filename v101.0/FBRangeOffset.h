/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBRangeOffset : FBValueObject <NSCopying> {

	long long _offset;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                 //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long offset;              //@synthesize offset=_offset - In the implementation block
-(id)initWithRange:(NSRange)arg1 offset:(long long)arg2 ;
-(long long)offset;
-(NSRange)range;
@end

