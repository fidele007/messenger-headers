/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsCurrency : FBValueObject <NSCopying> {

	NSString* _iso;
	NSString* _format;
	NSString* _symbol;
	NSString* _offset;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * iso;                 //@synthesize iso=_iso - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;              //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * symbol;              //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
-(NSString *)iso;
-(id)initWithIso:(id)arg1 format:(id)arg2 symbol:(id)arg3 offset:(id)arg4 name:(id)arg5 ;
-(NSString *)name;
-(NSString *)offset;
-(NSString *)symbol;
-(NSString *)format;
@end

