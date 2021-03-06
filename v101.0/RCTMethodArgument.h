/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTMethodArgument : NSObject {

	BOOL _unused;
	NSString* _type;
	unsigned long long _nullability;

}

@property (nonatomic,copy,readonly) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long nullability;              //@synthesize nullability=_nullability - In the implementation block
@property (nonatomic,readonly) BOOL unused;                                 //@synthesize unused=_unused - In the implementation block
-(id)initWithType:(id)arg1 nullability:(unsigned long long)arg2 unused:(BOOL)arg3 ;
-(unsigned long long)nullability;
-(BOOL)unused;
-(NSString *)type;
@end

