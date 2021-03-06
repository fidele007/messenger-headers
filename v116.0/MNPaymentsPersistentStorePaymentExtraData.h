/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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

