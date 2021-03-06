/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsPersistentStorePaymentExtraData : FBValueObject <NSCopying> {

	NSString* _credentialId;
	NSString* _url;
	id _extraData;

}

@property (nonatomic,copy,readonly) NSString * credentialId;              //@synthesize credentialId=_credentialId - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id extraData;                         //@synthesize extraData=_extraData - In the implementation block
-(NSString *)credentialId;
-(id)initWithCredentialId:(id)arg1 url:(id)arg2 extraData:(id)arg3 ;
-(NSString *)url;
-(id)extraData;
@end

