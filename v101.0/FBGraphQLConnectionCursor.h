/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBGraphQLConnectionCursor : FBValueObject <NSCopying> {

	NSString* _cursorString;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * cursorString;              //@synthesize cursorString=_cursorString - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
-(NSString *)cursorString;
-(id)initWithCursorString:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
@end
