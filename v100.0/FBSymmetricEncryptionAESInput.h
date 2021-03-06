/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface FBSymmetricEncryptionAESInput : FBValueObject <NSCopying> {

	NSData* _data;
	NSData* _key;
	NSData* _iv;

}

@property (nonatomic,copy,readonly) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSData * key;               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSData * iv;                //@synthesize iv=_iv - In the implementation block
-(NSData *)iv;
-(id)initWithData:(id)arg1 key:(id)arg2 iv:(id)arg3 ;
-(NSData *)key;
-(NSData *)data;
@end

